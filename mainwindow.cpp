#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Cacher les boutons Chiffrement et Déchiffrement au départ
    ui->btnChiff->hide();
    ui->btnDchiff->hide();

    // Connecter le bouton pour ouvrir un fichier (ajoute ce bouton dans ton UI si ce n'est pas fait)
    connect(ui->btnDoss, &QPushButton::clicked, this, &MainWindow::ouvrirFichier);

    // Connecter les boutons de sélection
    connect(ui->btnSHA, &QPushButton::clicked, this, &MainWindow::handleSHAButtonClicked);
    connect(ui->btnAES, &QPushButton::clicked, this, &MainWindow::handleAESButtonClicked);
    connect(ui->btnRSA, &QPushButton::clicked, this, &MainWindow::handleRSAButtonClicked);

    // Connecter le bouton Chiffrement à la méthode
    connect(ui->btnChiff, &QPushButton::clicked, this, &MainWindow::onEncryptionButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Slot pour le bouton d'ouverture de fichier
void MainWindow::onFileOpenButtonClicked()
{
    ouvrirFichier();
}

// Slot pour le bouton SHA
void MainWindow::handleSHAButtonClicked()
{
    ui->btnChiff->show();
    ui->btnDchiff->show();

    ui->btnAES->setEnabled(false);
    ui->btnRSA->setEnabled(false);
}

// Slot pour le bouton AES
void MainWindow::handleAESButtonClicked()
{
    ui->btnChiff->show();
    ui->btnDchiff->show();

    ui->btnSHA->setEnabled(false);
    ui->btnRSA->setEnabled(false);
}

// Slot pour le bouton RSA
void MainWindow::handleRSAButtonClicked()
{
    ui->btnChiff->show();
    ui->btnDchiff->show();

    ui->btnSHA->setEnabled(false);
    ui->btnAES->setEnabled(false);
}

// Slot pour le bouton Chiffrement
void MainWindow::onEncryptionButtonClicked()
{
    ouvrirFichier();
}

// Fonction pour ouvrir un fichier
void MainWindow::ouvrirFichier()
{
    QString myOpenFile = QFileDialog::getOpenFileName(this, tr("Choisir et Ouvrir un fichier"), tr("C:\\"), tr("Text Files (*.txt)"));

    if (myOpenFile.isEmpty())
    {
        QMessageBox::warning(this, "ERREUR", "Le fichier n'a pas été sélectionné !");
        return;
    }

    QFile file(myOpenFile);

    if (!file.exists())
    {
        QMessageBox::critical(this, "Erreur", "Le fichier " + myOpenFile + " n'existe pas.");
        return;
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::critical(this, "Erreur", "Échec de l'ouverture en mode lecture du fichier " + myOpenFile);
        return;
    }

    QTextStream flux(&file);
    QString contenu = flux.readAll();
    file.close();

    ui->labelFileContent->setText(contenu);

    QMessageBox::information(this, "Succès", "Le fichier a été lu avec succès !");
}

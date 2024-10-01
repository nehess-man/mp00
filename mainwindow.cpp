#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->btnChiff->hide();
    ui->btnDchiff->hide();
    ui->btnHash->hide();
    ui->btnRetour->hide();

    // Feuille de style pour le bouton Retour avec hover en rouge
    ui->btnRetour->setStyleSheet("QPushButton {"
                                 "background-color: lightgray;"
                                 "border: 1px solid black;"
                                 "}"
                                 "QPushButton:hover {"
                                 "background-color: red;"
                                 "color: white;"
                                 "}");

    connect(ui->btnSHA, &QPushButton::clicked, this, &MainWindow::handleSHAButtonClicked);
    connect(ui->btnAES, &QPushButton::clicked, this, &MainWindow::handleAESButtonClicked);
    connect(ui->btnRSA, &QPushButton::clicked, this, &MainWindow::handleRSAButtonClicked);

    connect(ui->btnHash, &QPushButton::clicked, this, &MainWindow::onHashButtonClicked);
    connect(ui->btnChiff, &QPushButton::clicked, this, &MainWindow::onEncryptionButtonClicked);
    connect(ui->btnDchiff, &QPushButton::clicked, this, &MainWindow::onDecryptionButtonClicked);

    connect(ui->btnRetour, &QPushButton::clicked, this, &MainWindow::onRetourButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleSHAButtonClicked()
{
    ui->btnHash->show();
    ui->btnRetour->show();
    ui->btnAES->setEnabled(false);
    ui->btnRSA->setEnabled(false);
}

void MainWindow::handleAESButtonClicked()
{
    ui->btnChiff->show();
    ui->btnDchiff->show();
    ui->btnRetour->show();
    ui->btnSHA->setEnabled(false);
    ui->btnRSA->setEnabled(false);
}

void MainWindow::handleRSAButtonClicked()
{
    ui->btnChiff->show();
    ui->btnDchiff->show();
    ui->btnRetour->show();
    ui->btnSHA->setEnabled(false);
    ui->btnAES->setEnabled(false);
}

void MainWindow::onHashButtonClicked()
{
    ouvrirFichier();
}


void MainWindow::onEncryptionButtonClicked()
{
    ouvrirFichier();
}

void MainWindow::onDecryptionButtonClicked()
{
    ouvrirFichier();
}

void MainWindow::onRetourButtonClicked()
{
    ui->btnHash->hide();
    ui->btnChiff->hide();
    ui->btnDchiff->hide();
    ui->btnRetour->hide();

    ui->btnSHA->setEnabled(true);
    ui->btnAES->setEnabled(true);
    ui->btnRSA->setEnabled(true);
}

void MainWindow::ouvrirFichier()
{
    QString myOpenFile = QFileDialog::getOpenFileName(this, tr("Choisir et Ouvrir un fichier"), tr("C:\\"), tr("Text Files (*/*)"));

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

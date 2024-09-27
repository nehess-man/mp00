#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onFileOpenButtonClicked();    // Slot pour le bouton d'ouverture de fichier
    void handleSHAButtonClicked();      // Slot pour le bouton SHA
    void handleAESButtonClicked();      // Slot pour le bouton AES
    void handleRSAButtonClicked();      // Slot pour le bouton RSA
    void onEncryptionButtonClicked();    // Slot pour le bouton Chiffrement

private:
    Ui::MainWindow *ui;
    void ouvrirFichier();               // Méthode pour ouvrir un fichier
};

#endif // MAINWINDOW_H

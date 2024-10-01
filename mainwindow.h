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
    void handleSHAButtonClicked();
    void handleAESButtonClicked();
    void handleRSAButtonClicked();
    void onEncryptionButtonClicked();
    void onDecryptionButtonClicked();
    void onHashButtonClicked();
    void onRetourButtonClicked();

private:
    Ui::MainWindow *ui;
    void ouvrirFichier();
};
#endif // MAINWINDOW_H

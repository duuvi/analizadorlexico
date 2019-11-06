#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAbrir_clicked();

    void on_btnGuardar_clicked();

    void on_btnAnalizar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void printMessage(QString message);
signals:
private slots:
    void on_connectButton_clicked();
    void on_sendButton_clicked();
    void socketConnected();
    void socketDisconnected();
    void socketReadyRead();
private:
    Ui::MainWindow *ui;
    bool connectedToHost;
    QTcpSocket * socket;
};
#endif // MAINWINDOW_H

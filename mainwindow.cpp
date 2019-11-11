#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "toolsimportdialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_AboutProg_triggered()
{
    QMessageBox::about(this, "О программе", "Версия 1.0");
}

void MainWindow::on_ExitProg_triggered()
{
    QMessageBox::StandardButton _quest = QMessageBox::question(this, "Выход из программы","Вы действительно хотите покинуть программу?", QMessageBox::Yes | QMessageBox::No );

    if (_quest == QMessageBox::Yes) {
        QApplication::quit();
    }
}

void MainWindow::on_OptionImport_triggered()
{
    ToolsImportDialog TIdialog;
    TIdialog.setModal(true);
    TIdialog.exec();
}

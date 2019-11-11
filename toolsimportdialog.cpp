#include "toolsimportdialog.h"
#include "ui_toolsimportdialog.h"

ToolsImportDialog::ToolsImportDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ToolsImportDialog)
{
    ui->setupUi(this);
}

ToolsImportDialog::~ToolsImportDialog()
{
    delete ui;
}

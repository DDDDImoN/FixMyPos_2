#ifndef TOOLSIMPORTDIALOG_H
#define TOOLSIMPORTDIALOG_H

#include <QDialog>

namespace Ui {
class ToolsImportDialog;
}

class ToolsImportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ToolsImportDialog(QWidget *parent = nullptr);
    ~ToolsImportDialog();

private:
    Ui::ToolsImportDialog *ui;
};

#endif // TOOLSIMPORTDIALOG_H

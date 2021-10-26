#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // �������� ����������� ������
    this->setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// ������ �����
void MainWindow::on_new_file_triggered()
{   // ������ (������)
    currentFile.clear();
    // �������� ����� ��� � plainTextEdit
    ui->plainTextEdit->setPlainText(QString());
}

// �������� �����
void MainWindow::on_open_file_triggered()
{   // ������� ���������� ���� ��� �������� �����
    QString dialogName = QString::fromLocal8Bit("���������� ����");
    // getOpenFileName() ������� ���������� ���� ������ ������ �����
    QString fileName = QFileDialog::getOpenFileName(this, dialogName, "*.*", "����� � ����������� *.txt, *.html, *.css, *.cpp, *.xalm, *.cs, *.rtf, *.bin � �.�."); // "������� �����"
    QFile file(fileName); // ���� ��� �����
    currentFile = fileName;
    // ����� ��������� ���� �� ������� (��� ����������)
    QString errorName = QString::fromLocal8Bit("��������");
    QString errorDiscription = QString::fromLocal8Bit("���������� ������� ������ ����");
    // �������� �������� ����� (� �������)
    if(!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, errorName, errorDiscription + ": " + file.errorString());
        return;
    }   // ����� ��������� ����������� ����
    QString openFileName = QString::fromLocal8Bit("���� � �������������� �����");
    setWindowTitle(openFileName + ": " + fileName);
    // QTextStream ��� ����� ���������� ��� ������ � ������ ������
    QTextStream in(&file);
    // �������� ���� ����� �� �����
    QString text = in.readAll();
    // � ������� ��� � plainTextEdit �� �����
    ui->plainTextEdit->setPlainText(text);
    // �������� ����
    file.close();
}

// ��������� ����
void MainWindow::on_save_file_triggered()
{   // ��������� ���� (���)
    QString saveDialog = QString::fromLocal8Bit("C�������� ���� ��� (����� ������� ����������)");
    QString fileName = QFileDialog::getSaveFileName(this, saveDialog);
    QFile file(fileName); // ���� ��� �����
    QString errorName = QString::fromLocal8Bit("��������");
    QString errorDiscription = QString::fromLocal8Bit("���������� ��������� ������ ����");
    // �������� ����������� ���������� �����
    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, errorName, errorDiscription + ": " + file.errorString());
        return;
    } // ����� ��������� ����������� ����
    currentFile = fileName;
    QString saveFileName = QString::fromLocal8Bit("��� ���������� �����");
    setWindowTitle(saveFileName + ": " + fileName);
    // ��� ���������� �����
    QTextStream out(&file);
    // ���� ����� �� ������� ��� ������ � ����
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    // �������� ����
    file.close();
}

// ������ ���������� ������
void MainWindow::on_print_dialog_triggered()
{   // ������� �������
    QPrinter printer;
    printer.setPrinterName("Printer name");
    // ������� ������ ��� ������
    QPrintDialog printDialog(&printer, this);
    // ������ ��� ������ ��������� �� ������
    QString errorName = QString::fromLocal8Bit("��������");
    QString printDiscription = QString::fromLocal8Bit("���������� �����������!");
    // ����������� �������� ������ ������� ������
    if(printDialog.exec()== QDialog::Rejected){
        QMessageBox::warning(this, errorName, printDiscription);
        return; // ������ �� ��������
    }
    // ��������� ��������� � ��������� ����� �� ������
    ui->plainTextEdit->print(&printer);
}

//  ����� �� ���������
void MainWindow::on_exit_triggered()
{
    QApplication::quit();
}

// ��� ����������� ������
void MainWindow::on_copy_text_triggered()
{
    ui->plainTextEdit->copy();
}

// ��� ������� ������
void MainWindow::on_paste_text_triggered()
{
    ui->plainTextEdit->paste();
}

// ����� �������� �����
void MainWindow::on_cut_text_triggered()
{
    ui->plainTextEdit->cut();
}

// ����� �������� ��������
void MainWindow::on_undo_action_triggered()
{
    ui->plainTextEdit->undo();
}

// ����� ��������� ��������
void MainWindow::on_redo_action_triggered()
{
    ui->plainTextEdit->redo();
}

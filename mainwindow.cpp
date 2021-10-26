#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // указываю центральный виджет
    this->setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// создаю новый
void MainWindow::on_new_file_triggered()
{   // чистый (пустой)
    currentFile.clear();
    // введЄнный текст идЄт в plainTextEdit
    ui->plainTextEdit->setPlainText(QString());
}

// открытие файла
void MainWindow::on_open_file_triggered()
{   // вызываю диалоговое окно дл€ открыти€ файла
    QString dialogName = QString::fromLocal8Bit("ƒиалоговое окно");
    // getOpenFileName() создает диалоговое окно выбора одного файла
    QString fileName = QFileDialog::getOpenFileName(this, dialogName, "*.*", "‘айлы с расширением *.txt, *.html, *.css, *.cpp, *.xalm, *.cs, *.rtf, *.bin и т.д."); // "открыть файлы"
    QFile file(fileName); // беру им€ файла
    currentFile = fileName;
    // чтобы сообщение было на русском (без кракоз€бры)
    QString errorName = QString::fromLocal8Bit("¬нимание");
    QString errorDiscription = QString::fromLocal8Bit("Ќевозможно открыть данный файл");
    // провер€ю открытие файла (с текстом)
    if(!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, errorName, errorDiscription + ": " + file.errorString());
        return;
    }   // мен€ю заголовок диалогового окна
    QString openFileName = QString::fromLocal8Bit("ѕуть к редактируемому файлу");
    setWindowTitle(openFileName + ": " + fileName);
    // QTextStream это класс интерфейса дл€ чтени€ и записи текста
    QTextStream in(&file);
    // считываю весь текст из файла
    QString text = in.readAll();
    // и передаю его в plainTextEdit на форме
    ui->plainTextEdit->setPlainText(text);
    // закрываю файл
    file.close();
}

// сохранить файл
void MainWindow::on_save_file_triggered()
{   // сохранить файл (как)
    QString saveDialog = QString::fromLocal8Bit("Cохранить файл как (нужно указать расширение)");
    QString fileName = QFileDialog::getSaveFileName(this, saveDialog);
    QFile file(fileName); // беру им€ файла
    QString errorName = QString::fromLocal8Bit("¬нимание");
    QString errorDiscription = QString::fromLocal8Bit("Ќевозможно сохранить данный файл");
    // провер€ю возможность сохранени€ файла
    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, errorName, errorDiscription + ": " + file.errorString());
        return;
    } // мен€ю заголовок диалогового окна
    currentFile = fileName;
    QString saveFileName = QString::fromLocal8Bit("»дЄт сохранение файла");
    setWindowTitle(saveFileName + ": " + fileName);
    // дл€ сохранени€ файла
    QTextStream out(&file);
    // беру текст из виджеты дл€ записи в файл
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    // закрываю файл
    file.close();
}

// печать имеющегос€ текста
void MainWindow::on_print_dialog_triggered()
{   // вызываю принтер
    QPrinter printer;
    printer.setPrinterName("Printer name");
    // вызываю диалог дл€ печати
    QPrintDialog printDialog(&printer, this);
    // строки дл€ вывода сообщени€ об ошибке
    QString errorName = QString::fromLocal8Bit("¬нимание");
    QString printDiscription = QString::fromLocal8Bit("Ќевозможно распечатать!");
    // осуществл€ю проверку вызова диалога печати
    if(printDialog.exec()== QDialog::Rejected){
        QMessageBox::warning(this, errorName, printDiscription);
        return; // выхожу из операции
    }
    // отправл€ю имеющийс€ в редакторе текст на печать
    ui->plainTextEdit->print(&printer);
}

//  выход из программы
void MainWindow::on_exit_triggered()
{
    QApplication::quit();
}

// дл€ копировани€ текста
void MainWindow::on_copy_text_triggered()
{
    ui->plainTextEdit->copy();
}

// дл€ вставки текста
void MainWindow::on_paste_text_triggered()
{
    ui->plainTextEdit->paste();
}

// чтобы вырезать текст
void MainWindow::on_cut_text_triggered()
{
    ui->plainTextEdit->cut();
}

// чтобы отменить операцию
void MainWindow::on_undo_action_triggered()
{
    ui->plainTextEdit->undo();
}

// чтобы повторить операцию
void MainWindow::on_redo_action_triggered()
{
    ui->plainTextEdit->redo();
}

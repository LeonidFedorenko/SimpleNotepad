#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// основное окно
#include <QMainWindow>
// для работы с файлами
#include <QFile>
#include <QFileDialog>
// для работы с текстом
#include <QTextStream>
// для сообщений пользователю
#include <QMessageBox>
// работа с принтером
#include <QPrinter>
#include <QPrintDialog>


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

    void on_new_file_triggered();

    void on_open_file_triggered();

    void on_save_file_triggered();

    void on_print_dialog_triggered();

    void on_exit_triggered();

    void on_copy_text_triggered();

    void on_paste_text_triggered();

    void on_cut_text_triggered();

    void on_undo_action_triggered();

    void on_redo_action_triggered();

private:
    Ui::MainWindow *ui;
    // для текущего (нового) файла
    QString currentFile = "";
};
#endif // MAINWINDOW_H

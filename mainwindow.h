#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// �������� ����
#include <QMainWindow>
// ��� ������ � �������
#include <QFile>
#include <QFileDialog>
// ��� ������ � �������
#include <QTextStream>
// ��� ��������� ������������
#include <QMessageBox>
// ������ � ���������
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
    // ��� �������� (������) �����
    QString currentFile = "";
};
#endif // MAINWINDOW_H

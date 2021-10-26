/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *new_file;
    QAction *open_file;
    QAction *save_file;
    QAction *exit;
    QAction *print_dialog;
    QAction *copy_text;
    QAction *paste_text;
    QAction *cut_text;
    QAction *undo_action;
    QAction *redo_action;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 643);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setBaseSize(QSize(800, 600));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/notepad.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("Resources/notepad.ico"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8("Resources/notepad.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8("Resources/notepad.ico"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QString::fromUtf8("Resources/notepad.ico"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8("Resources/notepad.ico"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QString::fromUtf8("Resources/notepad.ico"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8("Resources/notepad.ico"), QSize(), QIcon::Selected, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: white;"));
        MainWindow->setIconSize(QSize(32, 32));
        new_file = new QAction(MainWindow);
        new_file->setObjectName(QString::fromUtf8("new_file"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        new_file->setIcon(icon1);
        new_file->setFont(font);
        open_file = new QAction(MainWindow);
        open_file->setObjectName(QString::fromUtf8("open_file"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_file->setIcon(icon2);
        open_file->setFont(font);
        save_file = new QAction(MainWindow);
        save_file->setObjectName(QString::fromUtf8("save_file"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save_file->setIcon(icon3);
        save_file->setFont(font);
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/Resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon4);
        exit->setFont(font);
        print_dialog = new QAction(MainWindow);
        print_dialog->setObjectName(QString::fromUtf8("print_dialog"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/Resources/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        print_dialog->setIcon(icon5);
        print_dialog->setFont(font);
        copy_text = new QAction(MainWindow);
        copy_text->setObjectName(QString::fromUtf8("copy_text"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/Resources/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copy_text->setIcon(icon6);
        copy_text->setFont(font);
        paste_text = new QAction(MainWindow);
        paste_text->setObjectName(QString::fromUtf8("paste_text"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/Resources/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        paste_text->setIcon(icon7);
        paste_text->setFont(font);
        cut_text = new QAction(MainWindow);
        cut_text->setObjectName(QString::fromUtf8("cut_text"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        cut_text->setIcon(icon8);
        cut_text->setFont(font);
        undo_action = new QAction(MainWindow);
        undo_action->setObjectName(QString::fromUtf8("undo_action"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/Resources/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undo_action->setIcon(icon9);
        undo_action->setFont(font);
        redo_action = new QAction(MainWindow);
        redo_action->setObjectName(QString::fromUtf8("redo_action"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/Resources/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        redo_action->setIcon(icon10);
        redo_action->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setFont(font);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:  lightgray;"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 799, 583));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy);
        plainTextEdit->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        plainTextEdit->setFont(font1);
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menubar->setFont(font);
        menubar->setCursor(QCursor(Qt::PointingHandCursor));
        menubar->setAutoFillBackground(false);
        menubar->setStyleSheet(QString::fromUtf8("background-color: lightcyan;\n"
"forecolor: black;"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setFont(font1);
        toolBar->setCursor(QCursor(Qt::OpenHandCursor));
        toolBar->setStyleSheet(QString::fromUtf8("background-color: lightblue;"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(new_file);
        menu->addAction(open_file);
        menu->addAction(save_file);
        menu->addAction(print_dialog);
        menu->addSeparator();
        menu->addAction(exit);
        menu_2->addAction(copy_text);
        menu_2->addAction(paste_text);
        menu_2->addAction(cut_text);
        menu_2->addSeparator();
        menu_2->addAction(undo_action);
        menu_2->addAction(redo_action);
        toolBar->addAction(new_file);
        toolBar->addAction(open_file);
        toolBar->addAction(save_file);
        toolBar->addSeparator();
        toolBar->addAction(undo_action);
        toolBar->addAction(redo_action);
        toolBar->addSeparator();
        toolBar->addAction(copy_text);
        toolBar->addAction(cut_text);
        toolBar->addAction(paste_text);
        toolBar->addSeparator();
        toolBar->addAction(print_dialog);
        toolBar->addSeparator();
        toolBar->addAction(exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202\320\276\320\262\321\213\320\271 \321\200\320\265\320\264\320\260\320\272\321\202\320\276\321\200", nullptr));
        new_file->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271", nullptr));
#if QT_CONFIG(tooltip)
        new_file->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        new_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        open_file->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        open_file->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\321\216\321\211\320\270\320\271 \321\204\320\260\320\271\320\273", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        open_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        save_file->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        save_file->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\320\270\320\271 \321\204\320\260\320\271\320\273", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        save_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(tooltip)
        exit->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        exit->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        print_dialog->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        print_dialog->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        print_dialog->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        copy_text->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        copy_text->setToolTip(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\275\321\213\320\271 \321\204\321\200\320\260\320\263\320\274\320\265\320\275\321\202 \321\202\320\265\320\272\321\201\321\202\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        copy_text->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        paste_text->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        paste_text->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202 \320\270\320\267 \320\261\321\203\321\204\320\265\321\200\320\260 \320\276\320\261\320\274\320\265\320\275\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        paste_text->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        cut_text->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        cut_text->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\275\321\213\320\271 \321\203\321\207\320\260\321\201\321\202\320\276\320\272 \321\202\320\265\320\272\321\201\321\202\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        cut_text->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        undo_action->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        undo_action->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\321\216\321\216 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\321\216", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        undo_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        redo_action->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\275\320\276 \320\262\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        redo_action->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\321\216\321\216 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\321\216", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        redo_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QPushButton>

#include "orientbutton.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QPushButton *paint_place[128][8];

    QPushButton *clear_column[128];

    void set_exit_file(QString);

    void set_ru();
    void set_en();

    OrientablePushButton *clear_up_place;
    OrientablePushButton *clear_down_place;

private slots:
    void save_paint();
    void load_paint();
    void get_exit_file();
    void clear_all();
    void fill_in();
    void copy_arr();
    void change_lang();
    void get_about();
};
#endif // MAINWINDOW_HPP

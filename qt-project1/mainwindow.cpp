#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"


/*!
 * \brief MainWindow::MainWindow
 * \param parent
 * Sets up ui
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*!
 * \brief MainWindow::on_pushButton_clicked
 *  outputs that the push button has been clicked
 */

void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}

/*!
 * \brief MainWindow::on_pushButton_2_released
 * outputs that the push button2 has been clicked
 */
void MainWindow::on_pushButton_2_released()
{
    std::cout << "pushbutton2 " << std::endl;
}
/*!
 * \brief MainWindow::on_pushButton_3_released
 * outputs that the push button3 has been clicked
 */
void MainWindow::on_pushButton_3_released()
{
    std::cout << "pushbutton3 " << std::endl;
}

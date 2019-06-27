#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :  QMainWindow(parent),  ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Cria os connecs principais da classe
    this->criarConects();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::criarConects()
{

	//Descrever todas as acoes que os botoes irao executar
    //
	connect(ui->pushButtonClear, SIGNAL(clicked()), this, SLOT(slotClearWindow()));

	connect(ui->pushButton0, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButton1, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButton2, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));


}


void MainWindow::slotSetValueWindow()
{
	QPushButton* pButton = qobject_cast<QPushButton*>(sender());
	if (pButton) // this is the type we expect
	{
		if (ui->lineEdit->text().compare("0") == 0) {
			ui->lineEdit->clear();
		}

		QString buttonText = pButton->text();
		ui->lineEdit->setText(ui->lineEdit->text().append(buttonText));
	}

	
}


void MainWindow::slotClearWindow() {

	//limpar a janela de exibicao
	ui->lineEdit->clear();
	ui->lineEdit->setText(QString::number(0));
}
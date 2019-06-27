#include "mainwindow.h"
#include "ui_mainwindow.h"

int resultado;

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
	connect(ui->pushButton3, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButton4, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButton5, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButton6, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButton7, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButton8, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButton9, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButtonMais, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButtonMenos, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButtonVezes, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButtonDividir, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));


}

void MainWindow::setGlobalValue(double value, QString op)
{
	if(op.compare("+") == 0)
	{
		this->globalVar = this->adicao(this->globalVar, value);
	}
	
}


void MainWindow::slotClearWindowValue()
{
	this->ui->lineEdit->clear();
}

void MainWindow::slotSetValueWindow()
{
	QPushButton* pButton = qobject_cast<QPushButton*>(sender());


	if (pButton->text().compare("+") == 0)
	{
		this->signal = "+";
		this->setGlobalValue(this->ui->lineEdit->text().toDouble(), pButton->text());
	
	}
	else if(pButton->text().compare("-") == 0)
	{
		QMessageBox::warning(this, "", "-");
	}
	else if (pButton->text().compare("x") == 0)
	{
		QMessageBox::warning(this, "", "x");
	}
	else if (pButton->text().compare("÷") == 0) //246 ascii
	{
		QMessageBox::warning(this, "", "÷");
	}
	else // this is the type we expect
	{
		if (ui->lineEdit->text().compare("0") == 0) {
			ui->lineEdit->clear();
		}

		QString buttonText = pButton->text();
		ui->lineEdit->setText(ui->lineEdit->text().append(buttonText));
	}

	
}

void MainWindow::slotSetLineEdit(double _globalVar)
{
	this->ui->lineEdit->clear();
	this->ui->lineEdit->setText(QString::number(_globalVar));
}


void MainWindow::slotClearWindow() {

	//limpar a janela de exibicao
	ui->lineEdit->clear();
	ui->lineEdit->setText(QString::number(0));

	//limpando o historico
	ui->lineEdit_2->clear();


	//limpar a varivel global
	this->globalVar = 0;
}

double MainWindow::adicao(double A, double B) {
	return A + B;
}

//void MainWindow::slotOperacaoWindow() {
//	
//}

//int subtracao(int a, int b);
int MainWindow::subtracao(int A, int B) {
	int C = A - B;
	return C;
}

//int divisao(int a, int b);
int MainWindow::divisao(int A, int B) {
	if (B == 0) {

	}
	int C = A / B;
	return C;
}

//int multiplicacao(int a, int b);
int MainWindow::multiplicacao(int A, int B) {
	int C = A * B;
	return C;
}
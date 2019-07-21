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
	connect(ui->pushButtonIgual, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));
	connect(ui->pushButtonPoint, SIGNAL(clicked()), this, SLOT(slotSetValueWindow()));


}

void MainWindow::setGlobalValue(double value, QString op)
{
	if(op.compare("+") == 0)
	{
		this->globalVar = this->adicao(this->globalVar, value);
	}
	else if (op.compare("-") == 0) {
		this->globalVar = this->subtracao(this->globalVar, value);
	}
	else if (op.compare("x") == 0) {
		this->globalVar = this->multiplicacao(this->globalVar, value);
	}
	else if (op.compare("÷") == 0) {
		this->globalVar = this->divisao(this->globalVar, value);
	}
}


void MainWindow::slotClearWindowValue()
{
	this->ui->lineEdit->clear();
	this->globalVar = 0;
	this->signal = "";
}

void MainWindow::slotSetValueWindow()
{
	QPushButton* pButton = qobject_cast<QPushButton*>(sender());
	QString buttonText = pButton->text();


	if (pButton->text().compare("+") == 0)
	{
        if(this->signal != "n")
        {
            ui->lineEdit_2->setText(ui->lineEdit_2->text().remove(-1,1).append(buttonText));
            this->signal = this->signal_2 = buttonText;
        }
        else
        {
            this->setGlobalValue(this->ui->lineEdit->text().toDouble(), this->signal_2);
            this->signal = this->signal_2 = "+";
            ui->lineEdit_2->setText(ui->lineEdit_2->text().append(ui->lineEdit->text().append(buttonText)));
            ui->lineEdit->setText(QString::number(this->globalVar));
        }
	}
	else if(pButton->text().compare("-") == 0)
	{
        if(this->signal != "n")
        {
            ui->lineEdit_2->setText(ui->lineEdit_2->text().remove(-1,1).append(buttonText));
            this->signal = this->signal_2 = buttonText;
        }
        else
        {
            this->setGlobalValue(this->ui->lineEdit->text().toDouble(), this->signal_2);
            this->signal = this->signal_2 = "-";
            ui->lineEdit_2->setText(ui->lineEdit_2->text().append(ui->lineEdit->text().append(buttonText)));
            ui->lineEdit->setText(QString::number(this->globalVar));
        }
	}
	else if (pButton->text().compare("x") == 0)
	{
        if(this->signal != "n")
        {
            ui->lineEdit_2->setText(ui->lineEdit_2->text().remove(-1,1).append(buttonText));
            this->signal = this->signal_2 = buttonText;
        }
        else
        {
            this->setGlobalValue(this->ui->lineEdit->text().toDouble(), this->signal_2);
            this->signal = this->signal_2 = "x";
            ui->lineEdit_2->setText(ui->lineEdit_2->text().append(ui->lineEdit->text().append(buttonText)));
            ui->lineEdit->setText(QString::number(this->globalVar));
        }
	}
	else if (pButton->text().compare("÷") == 0) //246 ascii
	{
        if(this->signal != "n")
        {
            ui->lineEdit_2->setText(ui->lineEdit_2->text().remove(-1,1).append(buttonText));
            this->signal = this->signal_2 = buttonText;
        }
        else
        {
            this->setGlobalValue(this->ui->lineEdit->text().toDouble(), this->signal_2);
            this->signal = this->signal_2 = "÷";
            ui->lineEdit_2->setText(ui->lineEdit_2->text().append(ui->lineEdit->text().append(buttonText)));
            ui->lineEdit->setText(QString::number(this->globalVar));
        }
	}
	else if (pButton->text().compare("=") == 0) {
		if (this->signal == "n") {
            this->setGlobalValue(this->ui->lineEdit->text().toDouble(), this->signal_2);
            ui->lineEdit->setText(QString::number(this->globalVar));
            ui->lineEdit_2->clear();
		}
		else {
            //ui->lineEdit->setText(QString::number(this->globalVar));
            //ui->lineEdit_2->clear();
            //this->globalVar = 0;
            //this->signal = "";
            this->setGlobalValue(this->ui->lineEdit->text().toDouble(),this->signal_2);
            ui->lineEdit_2->clear();
            ui->lineEdit->setText(QString::number(this->globalVar));
		}
	}
	else // this is the type we expect
	{
		if ( (ui->lineEdit->text().compare("0") == 0) || (this->signal != "n") ) {
			ui->lineEdit->clear();
		}

		//QString buttonText = pButton->text();
		ui->lineEdit->setText(ui->lineEdit->text().append(buttonText));
		this->signal = "n";
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

    //limpar a variavel global dos sinais
    this->signal = "";
    this->signal_2 = "+";
}

double MainWindow::adicao(double A, double B) {
	return A + B;
}

//int subtracao(int a, int b);
double MainWindow::subtracao(double A, double B) {
    double C = A - B;
	return C;
}

//int divisao(int a, int b);
double MainWindow::divisao(double A, double B) {
	if (B == 0) {
		QMessageBox::warning(this, "", "Divisao por zero");
	}
    double C = A / B;
	return C;
}

//int multiplicacao(int a, int b);
double MainWindow::multiplicacao(double A, double B) {
    double C = A * B;
	return C;
}

//void MainWindow::slotOperacaoWindow() {
//	
//}

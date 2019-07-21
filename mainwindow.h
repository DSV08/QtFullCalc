#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessagebox>
#include <QDebug>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

	Ui::MainWindow *ui;

	//varivel Global de REsultado
	double globalVar = 0;
	//var sinal atual
	QString signal =  "";
    //variavel para segundo sinal
    QString signal_2 = "+";


    //Cria os connects da classe MainWindow
    void criarConects();

	//setar varival global acumulada
	void setGlobalValue(double value, QString op);

    //criacao dos metodos de operacoes matematicas
    //int adicao(int a, int b);
	double adicao(double A, double B);

    //int subtracao(int a, int b);
    double subtracao(double A, double B);

    //int divisao(int a, int b);
    double divisao(double A, double B);

    //int multiplicacao(int a, int b);
    double multiplicacao(double A, double B);
	
public slots:

	//Metodo para limpar a janela principal
	void slotClearWindow();

	void slotClearWindowValue();

	void slotSetValueWindow();
	//void slotIgualWindow();

	void slotSetLineEdit(double _globalVar);



};

#endif // MAINWINDOW_H

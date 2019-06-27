#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

    //Cria os connects da classe MainWindow
    void criarConects();

    //criacao dos metodos de operacoes matematicas
    //int adicao(int a, int b);
    //int subtracao(int a, int b);
    //int divisao(int a, int b);
    //int multiplicacao(int a, int b);

	public slots:

	//Metodo para limpar a janela principal
	void slotClearWindow();
	void slotSetValueWindow();

};

#endif // MAINWINDOW_H

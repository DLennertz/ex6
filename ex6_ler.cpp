#include <iostream>
#include "ex6-matriz.h"

using namespace std;

//l representa linha; c representa coluna; x é a variavel string

void TMatriz::ler(){
	cout << "Digite o numero de linhas:";
	cin >> qtdl;
	cout << "Digite o numero de colunas:";
	cin >> qtdc;
	for(int l=0;l<qtdl;l++)
	{
		for(int c=0;c<qtdc;c++)
		{
			cin >> x[l][c];
		}
	}
}


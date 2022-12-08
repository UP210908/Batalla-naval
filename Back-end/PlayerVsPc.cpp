#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

using namespace std;



void iniciar() {

	for(i=1; i<=9; i++) {

		for(j=1; j<=9; j++) {
			jugador[i][j]=0;
			oponente[i][j]=0;
		}
	}

	cout<<"Digita las coordenadas: ";

	srand(time(NULL));
	for(k=1; k<=5; k++) {
		imprimir();

		i=(1 +rand()%8)*2;
		j=(1 +rand()%8)*2-1;
		while(oponente[i][j]==1) {
			i=(1+rand()%8)*2;
			j=(1+rand()%8)*2-1;

		}
		oponente[i][j]=1;

		cout<<"Coordenadas en X"<<k<<"= ";
		cin>>opcion2;
		opcion2=opcion2*2-1;
		while(opcion2<1 || opcion2>16) {
			cout<<" Escoje un valor v�lido (1 a 8) X "<<k<<"= ";
			cin>>opcion2;
			opcion2=opcion2*2-1;
		}

		cout<<"\nCoordenadas en Y"<<k<<"= ";
		cin>>opcion1;
		opcion1=opcion1*2;
		while(opcion1<1 || opcion1>17) {
			cout<<" Escoje un valor v�lido (1 a 8) Y "<<k<<"= ";
			cin>>opcion1;
			opcion1=opcion1*2;
		}
		if(jugador[opcion1][opcion2]==1) {
			cout<<"Ese valor ya esta en uso...";
			getche();
			k=k-1;
		}

		jugador[opcion1][opcion2]=1;

		system("cls");

	}

}
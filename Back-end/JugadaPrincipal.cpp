#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

int main() {


	int res, auxiliar, auxiliar2,  probabilidadPC, destruidoOP=0, destruidoJU=0, ganador;
	float dificultadPC=0.5;
	
	
	portada1();	
	cout<<"\n\n\n\n\t\t*****************************************";
	cout<<"\n\t\t| Option   |  Game mode                 |";
	cout<<"\n\t\t|***************************************|";
	cout<<"\n\t\t|    1     |  PLayer vs Computer        |";
	cout<<"\n\t\t|    2     |  Player 1 vs Player 2      |";
	cout<<"\n\t\t|    3     |  Exit                      |";
	cout<<"\n\t\t*****************************************";
	cout<<"\n\t\tOption: ";
	cin>>res;
	system("cls");

	switch(res) {

		case 1: {
			iniciar();
			cout<<"PREPARADO?"<<endl;
			wait(2);
			cout<<"COMIENZA!!";
			wait(1);


			do {
				time(&start);
				system("cls");

				imprimir();

				cout<<"Elige tus coordenadas de ataque...";
				cout<<"\nCoordenadas en X = ";
				cin>>opcion2;
				opcion2=opcion2*2-1;

				while(opcion2<1 || opcion2>16) {
					cout<<"Elige un valor valido (1 a 8): ";
					cin>>opcion2;
					opcion2=opcion2*2-1;
				}

				cout<<"\nCoordenadas en Y = ";
				cin>>opcion1;
				opcion1=opcion1*2;
				while(opcion1<1 || opcion1>17) {
					cout<<"Elige un valor valido (1 a 8): ";
					cin>>opcion1;
					opcion1=opcion1*2;
				}

				auxiliar= oponente[opcion1][opcion2];
				oponente[opcion1][opcion2]=3;
				system("cls");
				imprimir();
				oponente[opcion1][opcion2]=auxiliar;


				if(oponente[opcion1][opcion2]==1) {
					oponente[opcion1][opcion2]=2;
					destruidoOP=destruidoOP+1;
					puntosJugador=puntosJugador +200;
					cout<<"\x1B[32m"<<"Haz acertado!! \n"<<"\x1B[0m";
				} else {
					oponente[opcion1][opcion2]=3;
					cout<<"\x1B[31m"<<"Haz fallado... \n"<<"\x1B[0m";
				}
				system("PAUSE");
				system("cls");
				if(destruidoOP==5) {
					cout<<"\x1B[32m"<<"Felicidades haz ganado !!"<<"\x1B[0m";
					getche();
				}
				imprimir();

				cout<<"Turno del oponente!";
				wait(2);

				dificultadPC=dificultadPC+0.1;

				srand(time(NULL));

				probabilidadPC=rand()%8;

				if(probabilidadPC> dificultadPC) {
					i=(1+rand()%8)*2;
					j=(1+rand()%8)*2-1;

					while(jugador[i][j]==2) {
						i=1+rand()%8;
						j=1+rand()%8;
					}
					auxiliar=jugador[i][j];
				} else {
					while(jugador[i][j]==2 || jugador[i][j]!=1) {
						i=(1+rand()%8)*2;
						j=(1+rand()%8)*2-1;
					}
					auxiliar= jugador[i][j];
				}
				jugador[i][j]=3;
				opcion1=i;
				opcion2=j;
				system("cls");
				imprimir();
				jugador[opcion1][opcion2]=auxiliar;

				if(jugador[opcion1][opcion2]==1) {
					cout<<"\x1B[32m"<<" El oponente ha acertado!!\n "<<"\x1B[0m";
					jugador[opcion1][opcion2]=2;
					destruidoJU=destruidoJU+1;
					puntosOponente=puntosOponente +200;
				} else {
					jugador[opcion1][opcion2]=3;
					cout<<"\x1B[31m"<<"El oponente ha fallado... \n"<<"\x1B[0m";
				}
				if(destruidoJU==5) {
					system("cls");
					cout<<"\x1B[31m"<<" HAZ PERDIDO!!!"<<"\x1B[0";
					getche();
				}
				system("PAUSE");
				if(destruidoOP==5 || destruidoJU==5) {
					destruidoOP=5;
					destruidoJU=5;
				}
				time(&end);
				dif=difftime (end, start);
				tiempoTotal=tiempoTotal+dif;
				if(tiempoTotal>600) {
					system("cls");
					cout<<" SE ACABO EL TIEMPO DE JUEGO.....  HAZ PERDIDO!!";
					getche();
				}
			} while(destruidoOP<5 || destruidoJU<5);
		}break;
		
		case 2:
			PlayervsPlayer();
			cout<<"PREPARADO?"<<endl;
			wait(2);
			cout<<"COMIENZA!!";
			wait(1);
	
			do {
				time(&start);
				system("cls");

				imprimir2();
				cout<<"Jugador 1 al ataque: \n";
				cout<<"Elige tus coordenadas de ataque...";
				cout<<"\nCoordenadas en X = ";
				cin>>opcion2;
				opcion2=opcion2*2-1;

				while(opcion2<1 || opcion2>17) {
					cout<<"Elige un valor valido (1 a 8): ";
					cin>>opcion2;
					opcion2=opcion2*2-1;
				}

				cout<<"\nCoordenadas en Y = ";
				cin>>opcion1;
				opcion1=opcion1*2;
				while(opcion1<1 || opcion1>17) {
					cout<<"Elige un valor valido (1 a 8): ";
					cin>>opcion1;
					opcion1=opcion1*2;
				}

				auxiliar= jugador2[opcion1][opcion2];
				jugador2[opcion1][opcion2]=3;
				system("cls");
				imprimir2();
				jugador2[opcion1][opcion2]=auxiliar;


				if(jugador2[opcion1][opcion2]==1) {
					jugador2[opcion1][opcion2]=2;
					destruidoOP=destruidoOP+1;
					puntosJugador=puntosJugador +200;
					cout<<"\x1B[32m"<<"Haz acertado!! \n"<<"\x1B[0m";
				} else {
					jugador2[opcion1][opcion2]=3;
					cout<<"\x1B[31m"<<"Haz fallado... \n"<<"\x1B[0m";
				}
	
				system("PAUSE");		
				
				if(destruidoOP<5){
					cout<<"\nJugador 2 al ataque: \n";
					cout<<"Elige tus coordenadas de ataque...";
					cout<<"\nCoordenadas en X = ";
					cin>>opcion2;
					opcion2=opcion2*2-1;
	
					while(opcion2<1 || opcion2>17) {
						cout<<"Elige un valor valido (1 a 8): ";
						cin>>opcion2;
						opcion2=opcion2*2-1;
					}
	
					cout<<"\nCoordenadas en Y = ";
					cin>>opcion1;
					opcion1=opcion1*2;
					while(opcion1<1 || opcion1>17) {
						cout<<"Elige un valor valido (1 a 8): ";
						cin>>opcion1;
						opcion1=opcion1*2;
					}
	
					auxiliar= jugador[opcion1][opcion2];
					jugador[opcion1][opcion2]=3;
					system("cls");
					imprimir2();
					jugador[opcion1][opcion2]=auxiliar;
	
	
					if(jugador[opcion1][opcion2]==1) {
						jugador[opcion1][opcion2]=2;
						destruidoJU=destruidoJU+1;
						puntosJugador2 =puntosJugador2 +200;
						cout<<"\x1B[32m"<<"Haz acertado!! \n"<<"\x1B[0m";
					} else {
						jugador[opcion1][opcion2]=3;
						cout<<"\x1B[31m"<<" Haz fallado... \n"<<"\x1B[0m";
					}
				}
				system("PAUSE");
				system("cls");
				if(destruidoOP==5) {
					cout<<"\x1B[32m"<<"Ha ganado el jugador 1 !!"<<"\x1B[0m";
					getche();
				}
				imprimir2();
			
				
				if(destruidoJU==5) {
					system("cls");
					cout<<"\x1B[32m"<<"Ha ganado el jugador 2 !!"<<"\x1B[0m";
					getche();
				}
				imprimir2();

				if(destruidoOP==5 || destruidoJU==5) {
					destruidoOP=5;
					destruidoJU=5;
				}
				time(&end);
				dif=difftime (end, start);
				tiempoTotal=tiempoTotal+dif;
				if(tiempoTotal>600) {
					system("cls");
					cout<<" SE ACABO EL TIEMPO DE JUEGO.....  HAZ PERDIDO!!";
					getche();
				}
			} while(destruidoOP<5 || destruidoJU<5);
	}

}

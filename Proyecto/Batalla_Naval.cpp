#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

using namespace std;

void wait (int segundos) {
	clock_t endwait;
	endwait= clock() + segundos * CLOCKS_PER_SEC;
	while(clock() < endwait) {
	}
}

int coordenadas[18]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
void imprimir();
void iniciar();
void PlayervsPlayer();
int numero[9]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
int bandera=1;

int i, j, k;
int jugador[18][18], oponente[18][18],jugador2[18][18],  opcion1, opcion2, puntosJugador=0, puntosJugador2=0,  puntosOponente=0;
time_t start, end;
double dif, tiempoTotal=0;

void imprimir2(){
	
	for(i=0; i<=17; i++) {
		
		cout<<"\n\t";
		for(j=0; j<=17; j++) {

			if(jugador[i][j]==3) {
				cout<<"\x1B[33m"<<" # "<<"\x1B[0m";
			} else {

				if(jugador[i][j]==2) {
					cout<<"\x1B[31m"<<" X "<<"\x1B[0m";
				} 
				else {
					if(jugador[i][j]==1) {
						cout<<"\x1B[32m"<<" O "<<"\x1B[0m";
					} 
					else {
						if(i%2==0){
							if(j%2==0){
	                    		cout<<"\x1B[34m"<<"|"<<"\x1B[0m";
	                		}
	                		else if(i==0 && j%2==1 && j<=16){
			                    cout<<" "<<"\x1B[31m"<<coordenadas[j/2]<<"\x1B[0m"<<" ";
			                }
			                else if(i>1 && j==17){
			                    cout<<" "<<"\x1B[31m"<<coordenadas[(i/2)-1]<<"\x1B[0m"<<" ";
			                }
	                		else{
	                    		cout<<" - ";
	                		}
						}
						else{
			                if(j%2==0){
			                    cout<<"\x1B[34m"<<"+"<<"\x1B[0m";
			                }
			                else{
			                    cout<<"\x1B[34m"<<"---"<<"\x1B[0m";
			                }
			            }
					}
				}
			}
		}
		if(i==3) {
			cout<<"\x1B[33m"<<"\t\t\tJugador 1"<<"\x1B[0m";
		} else {
			if(i==1) {
				cout<<"\x1B[32m"<<"\t\t\tPuntos Jugador: "<<"\x1B[0m"<<puntosJugador;
			}
		}
	}
	
	cout<<"\n\n\t_____________________________________________\n\n";
	
	for(i=0; i<=17; i++) {

		cout<<"\n\t";
		for(j=0; j<=17; j++) {

			if(jugador2[i][j]==3) {
				cout<<"\x1B[33m"<<" # "<<"\x1B[0m";
			} else {

				if(jugador2[i][j]==2) {
					cout<<"\x1B[31m"<<" X "<<"\x1B[0m";
				} 
				else {
					if(jugador2[i][j]==1) {
						cout<<"\x1B[32m"<<" O "<<"\x1B[0m";
					} 
					else {
						if(i%2==0){
							if(j%2==0){
	                    		cout<<"\x1B[34m"<<"|"<<"\x1B[0m";
	                		}
	                		else if(i==0 && j%2==1 && j<=16){
			                    cout<<" "<<"\x1B[31m"<<coordenadas[j/2]<<"\x1B[0m"<<" ";
			                }
			                else if(i>1 && j==17){
			                    cout<<" "<<"\x1B[31m"<<coordenadas[(i/2)-1]<<"\x1B[0m"<<" ";
			                }
	                		else{
	                    		cout<<" - ";
	                		}
						}
						else{
			                if(j%2==0){
			                    cout<<"\x1B[34m"<<"+"<<"\x1B[0m";
			                }
			                else{
			                    cout<<"\x1B[34m"<<"---"<<"\x1B[0m";
			                }
			            }
					}
				}
			}
		}
		if(i==3) {
			cout<<"\x1B[33m"<<"\t\t\tJugador 2"<<"\x1B[0m";
		} else {
			if(i==1) {
				cout<<"\x1B[32m"<<"\t\t\tPuntos Jugador 2: "<<"\x1B[0m"<<puntosJugador2;
			}
		}
	}
	cout<<"\n\n";
	
}
	


void imprimir() {
	cout<<"Tiempo trascurrido: "<<tiempoTotal<<"s"<<endl;


	for(i=0; i<=17; i++) {
		cout<<"\n\t";
		for(j=0; j<=17; j++) {
			

			if(oponente[i][j]==3) {
				cout<<"\x1B[33m"<<" # "<<"\x1B[0m";
			} else {
				if(oponente[i][j]==2) {
					cout<<"\x1B[31m"<<" X "<<"\x1B[0m";
				} else {
					
					if(i%2==0){
							if(j%2==0){
	                    		cout<<"\x1B[34m"<<"|"<<"\x1B[0m";
	                		}
	                		else if(i==0 && j%2==1 && j<=16){
			                    cout<<" "<<"\x1B[31m"<<coordenadas[j/2]<<"\x1B[0m"<<" ";
			                }
			                else if(i>1 && j==17){
			                    cout<<" "<<"\x1B[31m"<<coordenadas[(i/2)-1]<<"\x1B[0m"<<" ";
			                }
	                		else{
	                    		cout<<" - ";
	                		}
						}
						else{
			                if(j%2==0){
			                    cout<<"\x1B[34m"<<"+"<<"\x1B[0m";
			                }
			                else{
			                    cout<<"\x1B[34m"<<"---"<<"\x1B[0m";
			                }
			            }
					
				}
			}
		}
		if(i==3) {
			cout<<"\x1B[33m"<<"\t\t\tOPONENTE"<<"\x1B[0m";
		} else {
			if(i==1) {
				cout<<"\x1B[32m"<<"\t\t\tPuntos Oponente: "<<"\x1B[0m"<<puntosOponente;
			}
		}
	}
	cout<<"\n\n\t_____________________________________________\n\n";

	for(i=0; i<=17; i++) {

		cout<<"\n\t";
		for(j=0; j<=17; j++) {

			if(jugador[i][j]==3) {
				cout<<"\x1B[33m"<<" # "<<"\x1B[0m";
			} else {

				if(jugador[i][j]==2) {
					cout<<"\x1B[31m"<<" X "<<"\x1B[0m";
				} 
				else {
					if(jugador[i][j]==1) {
						cout<<"\x1B[32m"<<" O "<<"\x1B[0m";
					} 
					else {
						if(i%2==0){
							if(j%2==0){
	                    		cout<<"\x1B[34m"<<"|"<<"\x1B[0m";
	                		}
	                		else if(i==0 && j%2==1 && j<=16){
			                    cout<<" "<<"\x1B[31m"<<coordenadas[j/2]<<"\x1B[0m"<<" ";
			                }
			                else if(i>1 && j==17){
			                    cout<<" "<<"\x1B[31m"<<coordenadas[(i/2)-1]<<"\x1B[0m"<<" ";
			                }
	                		else{
	                    		cout<<" - ";
	                		}
						}
						else{
			                if(j%2==0){
			                    cout<<"\x1B[34m"<<"+"<<"\x1B[0m";
			                }
			                else{
			                    cout<<"\x1B[34m"<<"---"<<"\x1B[0m";
			                }
			            }
					}
				}
			}
		}
		if(i==3) {
			cout<<"\x1B[33m"<<"\t\t\tJugador 1"<<"\x1B[0m";
		} else {
			if(i==1) {
				cout<<"\x1B[32m"<<"\t\t\tPuntos Jugador: "<<"\x1B[0m"<<puntosJugador;
			}
		}
	}
	cout<<"\n\n";
}

void PlayervsPlayer(){
	
	for(i=1; i<=9; i++) {

		for(j=1; j<=9; j++) {
			jugador[i][j]=0;
			jugador2[i][j]=0;
		}
	}
	
	srand(time(NULL));
	for(k=1; k<=5; k++) {
		imprimir2();
	
	do{
	
	cout<<"\n Jugador 1:"<<endl;
	
	cout<<"Digita las coordenadas: \n";
	cout<<"Coordenadas en X"<<k<<"= ";
		cin>>opcion2;
		opcion2=opcion2*2-1;
		while(opcion2<1 || opcion2>16) {
			cout<<" Escoje un valor válido (1 a 8) X "<<k<<"= ";
			cin>>opcion2;
			opcion2=opcion2*2-1;
		}

		cout<<"\nCoordenadas en Y"<<k<<"= ";
		cin>>opcion1;
		opcion1=opcion1*2;
		while(opcion1<1 || opcion1>17) {
			cout<<" Escoje un valor válido (1 a 8) Y "<<k<<"= ";
			cin>>opcion1;
			opcion1=opcion1*2;
		}
		if(jugador[opcion1][opcion2]==1) {
			cout<<"Ese valor ya esta en uso...";
			getche();
		}
	}while(jugador[opcion1][opcion2]==1);

		jugador[opcion1][opcion2]=1;
		
		
	do{
		cout<<"\n Jugador 2:"<<endl;
		
		cout<<"Digita las coordenadas: \n";
		cout<<"Coordenadas en X"<<k<<"= ";
		cin>>opcion2;
		opcion2=opcion2*2-1;
		while(opcion2<1 || opcion2>16) {
			cout<<" Escoje un valor válido (1 a 8) X "<<k<<"= ";
			cin>>opcion2;
			opcion2=opcion2*2-1;
		}

		cout<<"\nCoordenadas en Y"<<k<<"= ";
		cin>>opcion1;
		opcion1=opcion1*2;
		while(opcion1<1 || opcion1>17) {
			cout<<" Escoje un valor válido (1 a 8) Y "<<k<<"= ";
			cin>>opcion1;
			opcion1=opcion1*2;
		}
		if(jugador2[opcion1][opcion2]==1) {
			cout<<"Ese valor ya esta en uso...";
			getche();
		}
	}while(jugador2[opcion1][opcion2]==1);
		jugador2[opcion1][opcion2]=1;

		system("cls");	
	
	}
}



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
			cout<<" Escoje un valor válido (1 a 8) X "<<k<<"= ";
			cin>>opcion2;
			opcion2=opcion2*2-1;
		}

		cout<<"\nCoordenadas en Y"<<k<<"= ";
		cin>>opcion1;
		opcion1=opcion1*2;
		while(opcion1<1 || opcion1>17) {
			cout<<" Escoje un valor válido (1 a 8) Y "<<k<<"= ";
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
void gotoxy(int x, int y) {
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

void portada1(){
	
	char portada [100][100]={
		
        "\t  ¯¦¦¦¦¦¦¦¦¦_     _¦¦¦¦¦¦¦¦     ¦¦¦         ¦¦¦      _¦          _¦¦¦¦¦¦¦¦ ",
        "\t    ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¯¦¦¦¦¦¦¦¦¦_ ¯¦¦¦¦¦¦¦¦¦_ ¦¦¦         ¦¦¦    ¦¦¦ ",  
        "\t    ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦    ¯¦¦¦¯¯¦¦    ¯¦¦¦¯¯¦¦ ¦¦¦         ¦¦¦    ¦¯  ",     
        "\t   _¦¦¦___¦¦¯    ¦¦¦    ¦¦¦     ¦¦¦   ¯     ¦¦¦   ¯ ¦¦¦        _¦¦¦___     ",     
        "\t  ¯¯¦¦¦¯¯¯¦¦_  ¯¦¦¦¦¦¦¦¦¦¦¦     ¦¦¦         ¦¦¦     ¦¦¦       ¯¯¦¦¦¯¯¯     ",     
        "\t    ¦¦¦    ¦¦_   ¦¦¦    ¦¦¦     ¦¦¦         ¦¦¦     ¦¦¦         ¦¦¦    ¦_  ",     
        "\t    ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦     ¦¦¦         ¦¦¦     ¦¦¦¦    _   ¦¦¦    ¦¦¦ ",     
        "\t  _¦¦¦¦¦¦¦¦¦¯    ¦¦¦    ¦¯     _¦¦¦¦¯      _¦¦¦¦¯   ¦¦¦¦¦__¦¦   ¦¦¦¦¦¦¦¦¦¦ ",    
        "\t                                                    ¯                      ",    
        "\t               _¦¦¦¦¦¦¦¦    _¦    ¦_     _¦     _¦¦¦¦¦¦¦_                  ",     
        "\t              ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦    ¦¦¦                  ",     
        "\t              ¦¦¦    ¦¯    ¦¦¦    ¦¦¦   ¦¦¦¦   ¦¦¦    ¦¦¦                  ",     
        "\t              ¦¦¦         _¦¦¦____¦¦¦__ ¦¦¦¦   ¦¦¦    ¦¦¦                  ",     
        "\t            ¯¦¦¦¦¦¦¦¦¦¦¦ ¯¯¦¦¦¯¯¯¯¦¦¦¯  ¦¦¦¦ ¯¦¦¦¦¦¦¦¦¦¯                   ",     
        "\t                     ¦¦¦   ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦                         ",     
        "\t               _¦    ¦¦¦   ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦                         ",     
        "\t             _¦¦¦¦¦¦¦¦¯    ¦¦¦    ¦¯    ¦¯    _¦¦¦¦¯                       ",};

for(int j=0;j<80;j++){
        for(int i=0;i<20;i++){
            gotoxy(j+5,i+5);printf("%c",portada[i][j]);}}
    gotoxy(36,30);cout<<"CREADOR Y DISENO: ISC03B";
    gotoxy(41,28);cout<<"CARGANDO";
    for(int i=0;i<40;i++){
            gotoxy(i+25,30);printf("%c",219);
            Sleep(100);
            }
            getch();
}

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

/*
Autor: Jeannelyn Avila Jimenez
Fecha: 23/11/2022
Descripción: Tablero inicial
*/

#include <iostream>

using namespace std;

void imprimir (){
    cout<<"Tiempo transcurrido"<<tiempoTotal<<"s";
    for(x=1;x<=5;x++){
        cout<<"\n\t";
        for(y=1;y<=9;y++){
            if(oponente [x][y]==3){
                cout<<" #";
            }
            else {
                if(oponente[x][y]==2){
                    cout<<" x";
                }
                else{
                    cout<<" -";
                }
            }
        }
        if(x==3){
            cout<<"\tOPONENTE";

        }
        else{
            if(x==1){
                cout<<"\t\tPUNTOS OPONENTE: "<<puntosOP;
            }
        }
    }
    cout<<"\n\n\t_______________________________________________\n\n";

    for(x=1;x<=5;x++){
        cout<<"\n\t";
        for(y=1;y<=9;y++){
            if(jugador [x][y]==3){
                cout<<" #";
            }
            else {
                if(jugador[x][y]==2){
                    cout<<" x";
                }
                else{
                    if(jugador[x][y]==1){
                        cout<<" O";
                    }
                    else{
                        cout<<" -";
                    }
                }
            }
        }
        if(x==3){
            cout<<"\tPlayer 1";
        }
        else{
            if(x==1){
                cout<<"\t\tPUNTOS JUGADOR: "<<puntosJ1;
            }
        }

        cout<<"\n\n";

}
}
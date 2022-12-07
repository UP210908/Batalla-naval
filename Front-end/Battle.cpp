/*
Autor: Jeannelyn Avila Jimenez
Fecha: 23/11/2022
Descripción: Portada
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <string.h>

void portada();

using namespace std;

int main(){

    portada();
}

/*void gotoxy(int x, int y){
HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.X = x;
        dwPos.Y = y;
        SetConsoleCursorPosition(hcon, dwPos);
}*/
void gotoxy(int x ,int y){

cout<<"\033["<<y<<";"<<x<<"f";
}
void portada()
{
    for (int x = 50; x >10; x--)
{
                         
                         gotoxy(50,8);
                         cout<< "\x1B[38"<<"███████████    █████████   ███████████ ███████████ █████       ██████████"<<"\x1B[0m"<<endl;
                         gotoxy(50,9);
                        cout<< "\x1B[38"<<"░░███░░░░░███  ███░░░░░███ ░█░░░███░░░█░█░░░███░░░█░░███       ░░███░░░░░█"<<"\x1B[0m"<<endl;
                        gotoxy(50,10);
                         cout<< "\x1B[38"<<"░███    ░███ ░███    ░███ ░   ░███  ░ ░   ░███  ░  ░███        ░███  █ ░ "<<"\x1B[0m"<<endl;
                         gotoxy(50,11);
                         cout<< "\x1B[38"<<"░██████████  ░███████████     ░███        ░███     ░███        ░██████   "<<"\x1B[0m"<<endl;
                         gotoxy(50,12);
                         cout<< "\x1B[38"<<"░███░░░░░███ ░███░░░░░███     ░███        ░███     ░███        ░███░░█   "<<"\x1B[0m"<<endl;
                         gotoxy(50,13);
                         cout<< "\x1B[38"<<"░███    ░███ ░███    ░███     ░███        ░███     ░███      █ ░███ ░   █"<<"\x1B[0m"<<endl;
                          gotoxy(50,14);
                         cout<< "\x1B[38"<<"███████████  █████   █████    █████       █████    ███████████ ██████████"<<"\x1B[0m"<<endl;
                         gotoxy(50,15);
                        cout<< "\x1B[38"<<"░░░░░░░░░░░  ░░░░░   ░░░░░    ░░░░░       ░░░░░    ░░░░░░░░░░░ ░░░░░░░░░░ "<<"\x1B[0m"<<endl;
                                                                                                 
                                        gotoxy(60,16);                                                                                                                                  
                                       cout<<"\x1B[38"<<" █████████  █████   █████ █████ ███████████"<<"\x1B[0m"<<endl; 
                                       gotoxy(60,17);                 
                                      cout<<"\x1B[38"<<" ███░░░░░███░░███   ░░███ ░░███ ░░███░░░░░███"<<"\x1B[0m"<<endl; 
                                      gotoxy(60,18);                
                                     cout<<"\x1B[38"<<" ░███    ░░░  ░███    ░███  ░███  ░███    ░███"<<"\x1B[0m"<<endl;
                                     gotoxy(60,19);                 
                                     cout<<"\x1B[38"<<" ░░█████████  ░███████████  ░███  ░██████████  "<<"\x1B[0m"<<endl; 
                                     gotoxy(60,20);               
                                      cout<<"\x1B[38"<<" ░░░░░░░░███ ░███░░░░░███  ░███  ░███░░░░░░  "<<"\x1B[0m"<<endl; 
                                      gotoxy(60,21);                
                                      cout<<"\x1B[38"<<" ███    ░███ ░███    ░███  ░███  ░███        "<<"\x1B[0m"<<endl; 
                                      gotoxy(60,22);                
                                     cout<<"\x1B[38"<<" ░░█████████  █████   █████ █████ █████        "<<"\x1B[0m"<<endl; 
                                     gotoxy(60,23);               
                                      cout<<"\x1B[38"<<" ░░░░░░░░░  ░░░░░   ░░░░░ ░░░░░ ░░░░░         "<<"\x1B[0m"<<endl;                
                                                                                                  
                                                                                                  
                                                                                                  

}
      
/*for(int j=0;j<80;j++){
        for(int i=0;i<20;i++){
            gotoxy(j+5,i+5);printf("%c",portada[i][j]);}}
    gotoxy(41,34);cout<<"CREADOR Y DISENO: ISC03B";
    gotoxy(41,28);cout<<"CARGANDO";
    for(int i=0;i<40;i++){
            gotoxy(i+25,30);printf("%c",219);
            Sleep(100);
            }
            getch();*/
}

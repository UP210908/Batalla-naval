/*
Autor: Jeannelyn Avila Jimenez
Fecha: 23/11/2022
Descripción: Portada
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <unistd.h>

using namespace std;
void barco();
void gotoxy(int x,int y);
int main(){
barco();

}

void gotoxy(int x ,int y){

cout<<"\033["<<y<<";"<<x<<"f";
}

void barco()
{
for (int x = 50; x >10; x--)
{
system("clear");
gotoxy(x,1); 
cout<<"───│─────────────────────────────────────"<<endl;
gotoxy(x,2);
cout<<"───│────────▄▄───▄▄───▄▄───▄▄───────│────"<<endl;
gotoxy(x,3);
cout<<"───▌────────"<<"\x1B[31m"<<"▒▒───▒▒───▒▒───▒▒"<<"\x1B[0m"<<"───────▌────"<<endl;
gotoxy(x,4);
cout<<"───▌──────▄▀█▀█▀█▀█▀█▀█▀█▀█▀█▀▄─────▌────"<<endl;
gotoxy(x,5);
cout<<"───▌────"<<"\x1b[34m"<<"▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄"<<"\x1B[0m"<<"───▋────"<<endl;
gotoxy(x,6);
cout<<"▀██████████████████████████████████████▄─"<<endl;
gotoxy(x,7);
cout<<"──▀███████████████████████████████████▀──"<<endl;
gotoxy(x,8);
cout<<"─────▀██████████████████████████████▀────"<<endl;
gotoxy(x,9);
cout<<"\033[0;34m"<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<<"\033[0m"<<endl;
gotoxy(x,10);
cout<<"\033[0;34m"<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<<"\033[0m"<<endl;
gotoxy(x,11);
cout<<"\033[0;34m"<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<<"\033[0m"<<endl;
gotoxy(40,18);
cout<<"\x1b[31m"<<"██╗      ██████╗  █████╗ ██████╗ ██╗███╗   ██╗ ██████╗"<<"\x1B[0m"<<endl; 
gotoxy(40,19);
cout<<"\x1b[31m"<<"██║     ██╔═══██╗██╔══██╗██╔══██╗██║████╗  ██║██╔════╝ "<<"\x1B[0m"<<endl;
gotoxy(40,20);
cout<<"\x1b[31m"<<"██║     ██║   ██║███████║██║  ██║██║██╔██╗ ██║██║  ███╗"<<"\x1B[0m"<<endl;
gotoxy(40,21);
cout<<"\x1b[31m"<<"██║     ██║   ██║██╔══██║██║  ██║██║██║╚██╗██║██║   ██║"<<"\x1B[0m"<<endl;
gotoxy(40,22);
cout<<"\x1b[31m"<<"███████╗╚██████╔╝██║  ██║██████╔╝██║██║ ╚████║╚██████╔╝"<<"\x1B[0m"<<endl;
gotoxy(40,23);
cout<<"\x1b[31m"<<"╚══════╝ ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚═╝╚═╝  ╚═══╝ ╚═════╝ "<<"\x1B[0m"<<endl;
                                                       
usleep(100000);
system("clear");

gotoxy(50,8);
 cout<<"\x1b[32m"<<"███▄ ▄███▓▓█████  ███▄    █  █    ██"<<"\x1B[0m"<<endl;
 gotoxy(50,9);
cout<<"\x1b[32m"<<"▓██▒▀█▀ ██▒▓█   ▀  ██ ▀█   █  ██  ▓██▒"<<"\x1B[0m"<<endl;
gotoxy(50,10);
cout<<"\x1b[32m"<<"▓██    ▓██░▒███   ▓██  ▀█ ██▒▓██  ▒██░"<<"\x1B[0m"<<endl;
gotoxy(50,11);
cout<<"\x1b[32m"<<"▒██    ▒██ ▒▓█  ▄ ▓██▒  ▐▌██▒▓▓█  ░██░"<<"\x1B[0m"<<endl;
gotoxy(50,12);
cout<<"\x1b[32m"<<"▒██▒   ░██▒░▒████▒▒██░   ▓██░▒▒█████▓ "<<"\x1B[0m"<<endl;
gotoxy(50,13);
cout<<"\x1b[32m"<<"░ ▒░   ░  ░░░ ▒░ ░░ ▒░   ▒ ▒ ░▒▓▒ ▒ ▒ "<<"\x1B[0m"<<endl;
gotoxy(50,14);
cout<<"\x1b[32m"<<"░  ░      ░ ░ ░  ░░ ░░   ░ ▒░░░▒░ ░ ░ "<<"\x1B[0m"<<endl;
gotoxy(50,15);
cout<<"\x1b[32m"<<"░      ░      ░      ░   ░ ░  ░░░ ░ ░ "<<"\x1B[0m"<<endl;
gotoxy(50,16);
cout<<"\x1b[32m"<<"       ░      ░  ░         ░    ░    "<<"\x1B[0m"<<endl; 
gotoxy(50,17);
cout<<"*************************************"<<endl;
gotoxy(50,18);
cout<<"1.--------------SINGLE PLAYER--------"<<endl;
gotoxy(50,19);
cout<<"2.--------------MULTI  PLAYER--------"<<endl;
cin>>res;
                                      

}

}

#include <unistd.h>
#include <iostream>
using namespace std;

void CrearTablero();


int main()
{
CrearTablero();
}

void CrearTablero()
{       
        
        for (int row = 0; row < 23; row++)
        {
                for (int col = 0; col < 23; col++)
                {
                        if (row % 2 ==0)
                        {
                                if (col % 2 == 0)
                                {

                                        cout << "+";
                                }

                                else
                                {
                                        cout << "...";
                                }
                        }
                        else{
                                  if (col % 2 == 0)
                                {

                                        cout << "|";
                                }

                                else if(row==1 && col==3)
                                {
                                        cout<<" 1 ";
                                }
                                 else if(row==1 && col==5)
                                {
                                        cout<<" 2 ";
                                }
                                 else if(row==1 && col==7)
                                {
                                        cout<<" 3 ";
                                }
                                 else if(row==1 && col==9)
                                {
                                        cout<<" 4 ";
                                }
                                 else if(row==1 && col==11)
                                {
                                        cout<<" 5 ";
                                }
                                 else if(row==1 && col==13)
                                {
                                        cout<<" 6 ";
                                }
                                 else if(row==1 && col==15)
                                {
                                        cout<<" 7 ";
                                }
                                 else if(row==1 && col==17)
                                {
                                        cout<<" 8 ";
                                }
                                 else if(row==1 && col==19)
                                {
                                        cout<<" 9 ";
                                }
                                 else if(row==1 && col==21)
                                {
                                        cout<<" 10";
                                }
                                  else if(row==3 && col==1)
                                {
                                        cout<<" "<<"1"<<" ";
                                }
                                  else if(row==5 && col==1)
                                {
                                        cout<<" 2 ";
                                }
                                  else if(row==7 && col==1)
                                {
                                        cout<<" 3 ";
                                }
                                  else if(row==9 && col==1)
                                {
                                        cout<<" 4 ";
                                }
                                  else if(row==11 && col==1)
                                {
                                        cout<<" 5 ";
                                }
                                  else if(row==13 && col==1)
                                {
                                        cout<<" 6 ";
                                }
                                  else if(row==15 && col==1)
                                {
                                        cout<<" 7 ";
                                }
                                  else if(row==17 && col==1)
                                {
                                        cout<<" 8 ";
                                }
                                  else if(row==19 && col==1)
                                {
                                        cout<<" 9 ";
                                }
                                  else if(row==21 && col==1)
                                {
                                        cout<<" 10 ";
                                }

                                else{
                                        cout<<"   ";
                                }

                        }
                }

                cout<<endl;
        }
}



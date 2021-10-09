#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

char matrix[3][3];//={0};
void cou(void);
int main()
{

    int m,n;
    char ch='y';
    while(ch=='Y'||ch=='y'){
        for (m=0;m<3;m++)for (n=0;n<3;n++)matrix[m][n]= '\0';
        int i,j,sum=0;
        while ( sum < 10){
            if (sum == 0) cou();
            cout<<"Jugador 1 es 'X': escoje fila y columna"<<endl;
            cout<<"fila : ";
            cin>>i;
            cout<<"Columna : ";
            cin>>j;
            for (;i>3 || i<1 || j>3 || j<1 ||('X'==matrix[i-1][j-1]||'O'==matrix[i-1][j-1]);) {cout<<"lo siento, escoge otro lugar.\n";cout<<"fila : ";cin>>i;cout<<"columna : ";cin>>j;}
            matrix[i-1][j-1]='X';
            sum++;
            cou();


            if (matrix[0][0]=='X' && matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2]) {cout<<"el jugador 1 es el ganador"<<endl;break;}
            if (matrix[2][0]=='X' && matrix[2][0]==matrix[1][1] && matrix[1][1]==matrix[0][2]) {cout<<"el jugador 1 es el ganador"<<endl;break;}
            if (matrix[0][0]=='X' && matrix[0][0]==matrix[1][0] && matrix[1][0]==matrix[2][0]) {cout<<"el jugador 1 es el ganador"<<endl;break;}
            if (matrix[0][1]=='X' && matrix[0][1]==matrix[1][1] && matrix[1][1]==matrix[2][1]) {cout<<"el jugador 1 es el ganador"<<endl;break;}
            if (matrix[0][2]=='X' && matrix[0][2]==matrix[1][2] && matrix[1][2]==matrix[2][2]) {cout<<"el jugador 1 es el ganador"<<endl;break;}
            if (matrix[0][0]=='X' && matrix[0][0]==matrix[0][1] && matrix[0][1]==matrix[0][2]) {cout<<"el jugador 1 es el ganador"<<endl;break;}
            if (matrix[1][0]=='X' && matrix[1][0]==matrix[1][1] && matrix[1][1]==matrix[1][2]) {cout<<"el jugador 1 es el ganador"<<endl;break;}
            if (matrix[2][0]=='X' && matrix[2][0]==matrix[2][1] && matrix[2][1]==matrix[2][2]) {cout<<"el jugador 1 es el ganador"<<endl;break;}

            if (sum == 9){cout<<"el juego ha terminado, y no hubo ganador!!!"<<endl; break;}


            cout<<"Jugador 2 es 'O': escoje fila y columna"<<endl;
            cout<<"fila : ";
            cin>>i;
            cout<<"Columna : ";
            cin>>j;
            for (;i>3 || i<1 || j>3 || j<1 ||('X'==matrix[i-1][j-1]||'O'==matrix[i-1][j-1]);) {cout<<"lo siento, escoje otro lugar.\n";cout<<"fila : ";cin>>i;cout<<"columna : ";cin>>j;}
            matrix[i-1][j-1]='O';
            sum++;

            cou();

            if (matrix[0][0]=='O' && matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2]) {cout<<"El jugador 2 es el ganador"<<endl;break;}
            if (matrix[2][0]=='O' && matrix[2][0]==matrix[1][1] && matrix[1][1]==matrix[0][2]) {cout<<"El jugador 2 es el ganador"<<endl;break;}
            if (matrix[0][0]=='O' && matrix[0][0]==matrix[1][0] && matrix[1][0]==matrix[2][0]) {cout<<"El jugador 2 es el ganador"<<endl;break;}
            if (matrix[0][1]=='O' && matrix[0][1]==matrix[1][1] && matrix[1][1]==matrix[2][1]) {cout<<"El jugador 2 es el ganador"<<endl;break;}
            if (matrix[0][2]=='O' && matrix[0][2]==matrix[1][2] && matrix[1][2]==matrix[2][2]) {cout<<"El jugador 2 es el ganador"<<endl;break;}
            if (matrix[0][0]=='O' && matrix[0][0]==matrix[0][1] && matrix[0][1]==matrix[0][2]) {cout<<"El jugador 2 es el ganador"<<endl;break;}
            if (matrix[1][0]=='O' && matrix[1][0]==matrix[1][1] && matrix[1][1]==matrix[1][2]) {cout<<"El jugador 2 es el ganador"<<endl;break;}
            if (matrix[2][0]=='O' && matrix[2][0]==matrix[2][1] && matrix[2][1]==matrix[2][2]) {cout<<"El jugador 2 es el ganador"<<endl;break;}

        }
        cout<<"\ndeseas jugar otra vez??? (Y - N)\n";
        cin>>ch;
    }
    system("PAUSE");
    return 0;
}




void cou(void)
{

    cout<<"\n\t\t                1   2   3\n"<<endl;
    cout<<"\t\t             1  "<<matrix[0][0]<<" | "<<matrix[0][1]<<" | "<<matrix[0][2]<<endl;
    cout<<"\t\t               ---|---|---\n";
    cout<<"\t\t             2  "<<matrix[1][0]<<" | "<<matrix[1][1]<<" | "<<matrix[1][2]<<endl;
    cout<<"\t\t               ---|---|---\n";
    cout<<"\t\t             3  "<<matrix[2][0]<<" | "<<matrix[2][1]<<" | "<<matrix[2][2]<<"\n\n\n";
}


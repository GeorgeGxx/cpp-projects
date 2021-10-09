#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL,"Spanish");
    int a,semest,mes,sem,dia,hora;
    cout<<"Dame la cantidad de años: ";cin>>a;
    semest=a*2;
    mes=a*12;
    sem=a*52;
    dia=a*365;
    hora=dia*24;
    cout<<a<<" años equivalen en: "<<semest<<" semestres, "<<mes<<" meses, "<<sem<<" semanas, "<<dia<<" días y "<<hora<<" horas"<<endl;
    cin.get();
    return 0;
}

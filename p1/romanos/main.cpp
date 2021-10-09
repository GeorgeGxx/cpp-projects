#include<stdio.h>
#include<conio.h>
main()
{
    char lin,col,n;
    int a,b,c,d, opc;
    do
    {
        clrscr ();
        for(col=2;col<=47;col++)
        {
            gotoxy(col,1); printf("!");
            gotoxy(col,25); printf("!");
            gotoxy(col,10); printf("!");
            gotoxy(col,1); printf("!");
        }
        for(lin=2;lin<=25;lin++)
        {
            gotoxy(1,lin); printf("!");
            gotoxy(78,lin); printf("!");
        }
        gotoxy(2,1); printf("!");
        gotoxy(80,1); printf("!");
        gotoxy(78,25); printf("!");
        gotoxy(5,25); printf("!");
        gotoxy(5,3); printf("!");
        gotoxy(6,10); printf("!");
        gotoxy(78,3); printf("!");
        gotoxy(75,10); printf("!");
        gotoxy(5,2); printf("Centro de Estudios Tecnologicos Industriales y de Servicios #153");
        gotoxy(3,4); printf("Materia: Programacion Estructurada (Lenguaje C)");
        gotoxy(3,5); printf("Grupo: 3�O");
        gotoxy(3,6); printf("Alumna: Mariana Segura Andrade");
        gotoxy(3,7); printf("Prosefor: Eric Perez Altamirano");
        gotoxy(35,11); printf("Menu");
        gotoxy(22,13); printf("1.Numeros Romanos");
        gotoxy(22,14); printf("2.Promedios");
        gotoxy(22,15); printf("3.Operaciones");
        gotoxy(22,16); printf("4.Salir");
        gotoxy(25,18); printf("Opcion");
        scanf("%d",& a);
        gotoxy(25,20); printf("Su opcion fue \n\n\a");
        scanf("%d",& opc);
        switch(opc)
        {
            case 1:
            {
                clrscr ();
                int a,b,c,d,f;
                float e;
                printf("Introducir el valor de a\n");
                scanf("%d",& a);
                printf("Introducir el valor de b\n");
                scanf("%d",& b);
                c=a+b;
                d=a*b;
                e=a/b;
                f=a-b;
                printf("La suma de a y b es=%d\n\a", c);
                printf("La multiplicacion de a y b es=%d\n\a", d);
                printf("La division de a y b es=%f\n\a", e);
                printf("La resta de a y b es=%d\n\a", f);
                getch ();
                return 0;
            }
                while (opc>0 && opc<8);
                printf("\t Usted selecciono la opcion 2\n\n");
                break;

            case 2:
            {
                clrscr ();
                int calificacion_a, calificacion_b, calificacion_c;
                float promedio;
                printf("Introducir calificacion_a\n");
                scanf("%d",& calificacion_a);
                printf("Ingrese calificacion_b\n");
                scanf("%d",& calificacion_b);
                printf("Ingrese la calificacion_c\n");
                scanf("%d",& calificacion_c);
                promedio=(calificacion_a+calificacion_b+calificacion_c)/3;
                if(promedio==6|promedio>6)
                {
                    printf("Aprobado con promedio de:%f\n\a", promedio);
                }
                else
                    printf("Reprobado con promedio de:%f\n\a", promedio);
                getch ();
                return 0;
            }
                printf("\t Usted seleciono la opcion 3\n\n");
                break;

            case 3:
            {
                clrscr ();
                int M,RM,C,RC,D,RD,U,Numero;
                printf("Este programa convierte numeros arabigos a romanos\n\n");
                printf("Introduce un nnumero entre 1 y 4000\n");
                scanf("%d",& Numero);
                M=Numero/1000;
                if(Numero>0 && Numero<4000)
                {
                    printf("El numero romano es:\n\a   ");
                    M=int(Numero/1000);
                    RM=(Numero%1000);
                    C=int(RM/100);
                    RC=(RM%100);
                    D=int(RC/10);
                    RD=(RC%10);
                    if(M==1)
                        printf("M");
                    if(M==2)
                        printf("MM");
                    if(M==3)
                        printf("MMM");
                    if(C==1)
                        printf("C");
                    if(C==2)
                        printf("CC");
                    if(C==3)
                        printf("CCC");
                    if(C==4)
                        printf("CD");
                    if(C==5)
                        printf("D");
                    if(C==6)
                        printf("DC");
                    if(C==7)
                        printf("DCC");
                    if(C==8)
                        printf("DCCC");
                    if(C==9)
                        printf("CM");
                    if(D==1)
                        printf("X");
                    if(D==2)
                        printf("XX");
                    if(D==3)
                        printf("XXX");
                    if(D==4)
                        printf("XL");
                    if(D==5)
                        printf("L");
                    if(D==6)
                        printf("LX");
                    if(D==7)
                        printf("LXX");
                    if(D==8)
                        printf("LXXX");
                    if(D==9)
                        printf("XC");
                    if(RD==1)
                        printf("I");
                    if(RD==2)
                        printf("II");
                    if(RD==3)
                        printf("III");
                    if(RD==4)
                        printf("IV");
                    if(RD==5)
                        printf("V");
                    if(RD==6)
                        printf("VI");
                    if(RD==7)
                        printf("VII");
                    if(RD==8)
                        printf("VIII");
                    if(RD==9)
                        printf("IX");
                    getch ();
                }
            }
            default: printf("\t Opcion no disponible\n\n");
                break;
        }
    }
    while(opc>0 && opc<4);
    getch ();
    return 0;
}
# include <stdio.h>
# include <conio.h>
void main ()
{/*inicio del programa*/
    int opc;
    char col,lin;
    clrscr();
    gotoxy(1,1);printf("E");
    gotoxy(1,25);printf("E");
    gotoxy(78,1);printf("�");
    gotoxy(78,25);printf("�");
    for(col=2;col<78;col++)
    {
/*inicio de la 1ra sentencia for*/
        gotoxy(col,1);printf("I");
        gotoxy(col,25);printf("I");
    }/*fin de la 1ra sentencia for*/
    for(lin=2;lin<25;lin++)
    {/*inicio de la 2a sentencia for*/
        gotoxy(1,lin);printf("�");
        gotoxy(78,lin);printf("�");
    }/*fin de la 2a sentencia for*/
    gotoxy(1,5);printf("I");
    gotoxy(78,5);printf("");
    for(col=2;col<78;col++)
    {
        gotoxy(col,5);printf("I");
        gotoxy(col,25);printf("I");}
    gotoxy(1,12);printf("I");
    gotoxy(78,12);printf("");
    for(col=2;col<77;col++){
        gotoxy(col,12);printf("I");
        gotoxy(col,25);printf("I");



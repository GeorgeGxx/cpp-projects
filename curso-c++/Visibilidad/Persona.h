#include <iostream>
#pragma once

using namespace std;

class Persona{
public:
  int altura;
  int edad;
  static int c;

public:
  Persona(){
    altura = 0;
    edad = 0;
    c++;
  }

  Persona(int _altura, int _edad){
    altura = _altura;
    edad = _edad;
  }

  ~Persona(){
    cout << "Destructor" << endl;
  }

  void setAltura(int _altura);
  void setEdad(int edad);
  int getAltura();
  int getEdad();
  void saludar();
  void saludar(int x);
  void saludar(int x, int y);
  static void mostrarC();  

};

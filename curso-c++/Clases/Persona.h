class Persona{
public:
  int altura;
  int edad;

public:
  Persona(){
    altura = 0;
    edad = 0;
  }

  Persona(int _altura, int _edad){
    altura = _altura;
    edad = _edad;
  }

  void setAltura(int altura);
  void setAltura(int edad);
  int getAltura();
  int getEdad();
};

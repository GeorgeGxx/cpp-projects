class Persona{
private:
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
  void setEdad(int edad);
  int getAltura();
  int getEdad();
};

void Persona::setAltura(int _altura){
  altura = _altura;
}

int Persona::getAltura(){
  return altura;
}

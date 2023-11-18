#include "Paciente.h"
#include <iostream>
#include <string>

using namespace std;

class Datospaciente : public Paciente {

private: // atributos de la clase
  int numero;
  string direccion;
  string nombreCompleto;

public:
  // cosntructor
  Datospaciente(string _nombre, int _edad, float _peso, int _altura, char _sexo,
                int _numero, string _direccion, string _nombreCompleto)
      : Paciente(_nombre, _edad, _peso, _altura, _sexo), numero(_numero),
        direccion(_direccion), nombreCompleto(_nombreCompleto) {}

  // definir getters
  int getNumero() const;
  string getDireccion() const;
  string getNombreCompleto() const;

  // definir los setters
  void setNumero(int nuevoNumero);
  void setDireccion(string nuevaDireccion);
  void setNombreCompleto(string nuevoNombreCompleto);

  // definir los metodos
  void mostrarDatos1();
};

// getters
int Datospaciente::getNumero() const { return numero; }
string Datospaciente::getDireccion() const { return direccion; }
string Datospaciente::getNombreCompleto() const { return nombreCompleto; }

// setters
void Datospaciente::setNumero(int nuevoNumero) { numero = nuevoNumero; }
void Datospaciente::setDireccion(string nuevaDireccion) {
  direccion = nuevaDireccion;
}
void Datospaciente::setNombreCompleto(string nuevoNombreCompleto) {
  nombreCompleto = nuevoNombreCompleto;
}

// metodo
void Datospaciente::mostrarDatos1() {
  cout << "LOS DATOS DEL PACIENTE SON: " << endl;
  cout << "Nombre completo: " << getNombreCompleto() << endl;
  cout << "Direccion: " << getDireccion() << endl;
  cout << "Numero: " << getNumero() << endl;
}

// Datospaciente.h
#include <iostream>
#include <string>
using namespace std;

class Datospaciente {
private: // atributos de la clase
  int numero;
  string direccion;
  string nombreCompleto;

public:
  // cosntructor
  Datospaciente(int _numero, string _direccion, string _nombreCompleto) {
    numero = _numero;
    direccion = _direccion;
    nombreCompleto = _nombreCompleto;
  }

  // definir getters
  string getNombreCompleto() const;
  string getDireccion() const;
  int getNumero() const;

  // definir Setters
  void setNombreCompleto(string nuevoNombreCompleto);
  void setNumero(int nuevoNumero);
  void setDireccion(string nuevaDireccion);

  // definir los metodos
  void mostrarDatos1();
};

// getters
string Datospaciente::getNombreCompleto() const { return nombreCompleto; }

string Datospaciente::getDireccion() const { return direccion; }

int Datospaciente::getNumero() const { return numero; }

// Setters
void Datospaciente::setNombreCompleto(const string nuevoNombreCompleto) {
  nombreCompleto = nuevoNombreCompleto;
}

void Datospaciente::setDireccion(string nuevaDireccion) {
  direccion = nuevaDireccion;
}

void Datospaciente::setNumero(int nuevoNumero) { numero = nuevoNumero; }

// metodos
void Datospaciente::mostrarDatos1() {
  Datospaciente paciente1(8991, "123 Main St", "John Doe");
  cout << "*LOS DATOS DEL PACIENTE SON: " << endl;
  cout << "Nombre Completo: " << nombreCompleto << endl;
  cout << "Direccion: " << direccion << endl;
  cout << "Numero: " << numero << endl;
}
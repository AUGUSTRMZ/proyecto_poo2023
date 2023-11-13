// Paciente.h
#pragma once
// ... [Paciente class definition] ...

#include <iostream>
#include <string>

using namespace std;

// clase

class Paciente {
private: // atributos de la clase
  string nombre;
  int edad;
  float peso;
  float altura;
  char sexo;

public:
  // constructor
  Paciente(string _nombre, int _edad, float _peso, float _altura, char _sexo) {
    nombre = _nombre;
    edad = _edad;
    peso = _peso;
    altura = _altura;
    sexo = _sexo;
  };

  // definir Getters
  string getNombre() const;
  int getEdad() const;
  float getPeso() const;
  float getAltura() const;
  char getSexo() const;

  // definir Setters
  void setNombre(string nuevoNombre);
  void setEdad(int nuevaEdad);
  void setPeso(float nuevoPeso);
  void setAltura(float nuevaAltura);
  void setSexo(char nuevoSexo);

  // definir metodos
  void ingresarDatos();
  void mostrarDatos();
};

// Getters
string Paciente::getNombre() const { return nombre; }

int Paciente::getEdad() const { return edad; }

float Paciente::getPeso() const { return peso; }

float Paciente::getAltura() const { return altura; }

char Paciente::getSexo() const { return sexo; }

// Setters

void Paciente::setNombre(const string nuevoNombre) { nombre = nuevoNombre; }

void Paciente::setEdad(int nuevaEdad) { edad = nuevaEdad; }

void Paciente::setPeso(float nuevoPeso) { peso = nuevoPeso; }

void Paciente::setAltura(float nuevaAltura) { altura = nuevaAltura; }

void Paciente::setSexo(char nuevoSexo) { sexo = nuevoSexo; }

// metodos
void Paciente::ingresarDatos() {
  cout << "**INGRESE LOS DATOS DEL PACIENTE**" << endl;

  cout << "Ingrese el nombre del paciente: ";
  cin >> nombre;

  cout << "Ingrese la edad del paciente: ";
  cin >> edad;

  cout << "Ingrese el peso del paciente: ";
  cin >> peso;

  cout << "Ingrese la altura del paciente: ";
  cin >> altura;

  cout << "Ingrese el sexo del paciente: ";
  cin >> sexo;
}

void Paciente::mostrarDatos() {
  cout << "*LOS DATOS DEL PACIENTE SON: " << endl;

  cout << "Nombre: " << nombre << endl;
  cout << "Edad: " << edad << endl;
  cout << "Peso: " << peso << endl;
  cout << "Altura: " << altura << endl;
  cout << "Sexo: " << sexo << endl;
};

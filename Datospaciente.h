#ifndef DATOSPACIENTE_H
#define DATOSPACIENTE_H

#include "HistorialMedico.h"
#include "Paciente.h"
#include <iostream>
#include <string>

using namespace std;

class Datospaciente : public Paciente {
private:                      // atributos
  int ID;                     // numero de identificacion del paciente
  string direccion;           // direccion del paciente
  string nombreCompleto;      // nombre completo del paciente
  HistorialMedico historial1; // composicion

public:
  // constructor
  Datospaciente(string _nombre, int _edad, float _peso, int _altura, char _sexo,
                int _ID, string _direccion, string _nombreCompleto)
      : Paciente(_nombre, _edad, _peso, _altura, _sexo), ID(_ID),
        direccion(_direccion), nombreCompleto(_nombreCompleto) {}

  // Defino getters
  int getID() const;
  string getDireccion() const;
  string getNombreCompleto() const;

  // Defino los setters
  void setID(int nuevoID);
  void setDireccion(string nuevaDireccion);
  void setNombreCompleto(string nuevoNombreCompleto);

  // defino los métodos
  void mostrarDatos1();
  void agregarAlHistorial() { historial1.agregarPaciente(*this); }
  void mostrarHistorial() const { historial1.mostrarHistorial(); }
};

// Getters
int Datospaciente::getID() const { return ID; }
string Datospaciente::getDireccion() const { return direccion; }
string Datospaciente::getNombreCompleto() const { return nombreCompleto; }

// Setters
void Datospaciente::setID(int nuevoID) { ID = nuevoID; }
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
  cout << "ID: " << getID() << endl;
}

#endif
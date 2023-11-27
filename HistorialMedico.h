#ifndef HISTORIALMEDICO_H
#define HISTORIALMEDICO_H

#include "Paciente.h"
#include <iostream>
#include <string>
#include <vector> //para utlizar el contenedor vector

using namespace std;


//clase que registra y guarda el historial medico del paciente
class HistorialMedico {
private:
  vector<Paciente> pacientes; //contenedor para almacenar a los pacientes

public:
//agrega al paciente al historial medico
  void agregarPaciente(const Paciente &paciente);
  
//muestra los datos del historial medico completo del paciente
  void mostrarHistorial() const;
};
//agregar un paicente al historial medico
void HistorialMedico::agregarPaciente(const Paciente &paciente) {
  pacientes.push_back(paciente);
}
//muestra el historial medico completo
void HistorialMedico::mostrarHistorial() const {
  cout << "HISTORIAL MEDICO: ";
  //itera sobre la lista de pacientes y muestra los datos de cada uno 
  for (const Paciente &paciente : pacientes) {
    paciente.mostrarDatos(); //use el metodo  que muestra los adatos de la clase Paciente.h
    cout << "\n";
  }
}

#endif

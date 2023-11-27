#ifndef HISTORIALMEDICO_H
#define HISTORIALMEDICO_H

#include "Paciente.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HistorialMedico {
private:
  vector<Paciente> pacientes;

public:
  void agregarPaciente(const Paciente &paciente);
  void mostrarHistorial() const;
};

void HistorialMedico::agregarPaciente(const Paciente &paciente) {
  pacientes.push_back(paciente);
}

void HistorialMedico::mostrarHistorial() const {
  cout << "HISTORIAL MEDICO: ";
  for (const Paciente &paciente : pacientes) {
    paciente.mostrarDatos();
    cout << "\n";
  }
}

#endif
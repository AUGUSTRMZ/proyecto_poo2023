#include "Paciente.h"
#include <iostream>
#include <string>

class CalcularCalorias {
public:
  static float kcal(const Paciente &paciente);
};

float CalcularCalorias::kcal(const Paciente &paciente) {
  float factorSexo = (paciente.getSexo() == 'M') ? 5.0 : 1.8;
  int calorias;

  if (paciente.getSexo() == 'M') {
    calorias = 10 * paciente.getPeso() + 6.25 * paciente.getAltura() -
               5 * paciente.getEdad() + 5;
  } else {
    calorias = 10 * paciente.getPeso() + 6.25 * paciente.getAltura() -
               5 * paciente.getEdad() - 161;
  }

  return calorias * factorSexo;
}
// CalcularCalorias.h
#include "Paciente.h"
#include <iostream>
#include <string>
using namespace std;

class CalcularCalorias {
public: // defino la formula para calcular las kcal del paciente1
  static float kcal(const Paciente &paciente1) {
    float factorSexo = (paciente1.getSexo() == 'M') ? 5.0 : 1.8;
    float calorias;
    void mostrarCalorias();

    if (paciente1.getSexo() == 'M') {
      calorias = 10 * paciente1.getPeso() + 6.25 * paciente1.getAltura() -
                 5 * paciente1.getEdad() + 5;
    } else {
      calorias = 10 * paciente1.getPeso() + 6.25 * paciente1.getAltura() -
                 5 * paciente1.getEdad() - 161;
    }
    return calorias * factorSexo;
  };
};
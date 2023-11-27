#include "Paciente.h"
#include <iostream>
#include <string>

//defino la clase
class CalcularCalorias {
public:
  static float kcal(const Paciente &paciente);
};

float CalcularCalorias::kcal(const Paciente &paciente) {
  float factorSexo = (paciente.getSexo() == 'M') ? 5.0 : 1.8;
  int calorias;

  //establezco una condicional para que entrege un resultado diferente si es hombre o mujer
  if (paciente.getSexo() == 'M') {
    calorias = 10 * paciente.getPeso() + 6.25 * paciente.getAltura() -
               5 * paciente.getEdad() + 5;
  } else {
    calorias = 10 * paciente.getPeso() + 6.25 * paciente.getAltura() -
               5 * paciente.getEdad() - 161;
  }
//multiplica las calorias por el factor sexo
  return calorias * factorSexo;
}

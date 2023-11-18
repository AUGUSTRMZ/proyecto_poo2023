#include "CalcularCalorias.h"
#include "Datospaciente.h"
#include "Paciente.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  Datospaciente paciente1("Marco", 20, 75, 180, 'M', 8991, "123 Main St",
                          "Marco Solis");

  paciente1.mostrarDatos();  // muestra los datos de la clase paciente
  paciente1.mostrarDatos1(); // mostrar datos de la clase datospaciente

  // modifico al paciente en la clase de paciente
  paciente1.setNombre("Juliana");
  paciente1.setEdad(25);
  paciente1.setAltura(155);
  paciente1.setPeso(60);
  paciente1.setSexo('F');

  // modifico al paciente en la clase de datospaciente
  paciente1.setNumero(7555);
  paciente1.setDireccion("San jorge 101");
  paciente1.setNombreCompleto("Juliana Ortega");

  // mostrar los datos actualizados
  paciente1.mostrarDatos();
  paciente1.mostrarDatos1();

  // calcula y muestra las calorias
  float caloriasDiarias = CalcularCalorias::kcal(paciente1);
  cout << "Calorias diarias: " << caloriasDiarias << "kcal\n" << endl;

  return 0;
}
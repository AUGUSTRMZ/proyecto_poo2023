#include "CalcularCalorias.h"
#include "Datospaciente.h"
#include "Paciente.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  Datospaciente paciente1("Marco", 20, 75, 180, 'M', 8991, "123 Main St",
                          "Marco Solis");

  // Agregar al historial médico
  paciente1.agregarAlHistorial();

  // Mostrar datos del paciente
  cout << "Datos del paciente:\n";
  paciente1.mostrarDatos();

  // Mostrar datos específicos de Datospaciente
  cout << "\nDatos específicos de Datospaciente:\n";
  paciente1.mostrarDatos1();

  // Modificar datos del paciente
  paciente1.setNombre("Juliana");
  paciente1.setEdad(25);
  paciente1.setAltura(155);
  paciente1.setPeso(60);
  paciente1.setSexo('F');

  // Agregar al historial médico después de la modificación
  paciente1.agregarAlHistorial();

  // Mostrar historial médico actualizado
  cout << "\nHistorial médico actualizado:\n";
  paciente1.mostrarHistorial();

  // Modificar datos específicos de Datospaciente
  paciente1.setID(7555);
  paciente1.setDireccion("San Jorge 101");
  paciente1.setNombreCompleto("Juliana Ortega");

  // Calcular y mostrar las calorías diarias
  float caloriasDiarias = CalcularCalorias::kcal(paciente1);
  cout << "\nCalorías diarias: " << caloriasDiarias << " kcal\n";

  return 0;
}

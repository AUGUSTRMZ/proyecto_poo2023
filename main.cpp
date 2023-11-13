// main.cpp
#include "CalcularCalorias.h"
#include "Datospaciente.h"
#include "Paciente.h"

using namespace std;

int main() {
  Paciente paciente("Juan", 20, 70, 175, 'M');
  Datospaciente pacienteDatos(4555, "Andrea Jenkins", "alvarado 234");
  
  paciente.mostrarDatos();
  pacienteDatos.mostrarDatos1();

  // Modifico al paciente atraves de los setters
  paciente.setNombre("Andrea ");
  paciente.setEdad(45);
  paciente.setPeso(65);
  paciente.setAltura(165);
  paciente.setSexo('F');

  // Modifico al paciente 1 atraves de los setters
  pacienteDatos.setNombreCompleto("Andrea Jenkins ");
  pacienteDatos.setNumero(4555);
  pacienteDatos.setDireccion("mainSt 234");

  // Hago que se muestren los datos actualizados
  paciente.mostrarDatos();
  pacienteDatos.mostrarDatos1();

  float caloriasDiarias = CalcularCalorias::kcal(paciente);
  cout << "\nCalorias diarias necesarias: " << caloriasDiarias << "kcal \n";

  return 0;
}
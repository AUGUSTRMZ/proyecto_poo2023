# Sistema de Información de Pacientes

Este programa es un sistema de gestión de información de pacientes con la capacidad de calcular calorías diarias y llevar un historial médico.

## Clases

### 1. Paciente

La clase `Paciente` representa a un paciente con atributos como nombre, edad, peso, altura y sexo. Proporciona métodos para ingresar y mostrar datos.

#### Métodos

- `Paciente(nombre: string, edad: int, peso: float, altura: float, sexo: char)`: Constructor para inicializar un objeto `Paciente`.
- Métodos Getters y Setters para acceder y modificar los atributos del paciente.
- `ingresarDatos(): void`: Permite al usuario ingresar los datos del paciente.
- `mostrarDatos(): void`: Muestra los datos del paciente.

### 2. Datospaciente

La clase `Datospaciente` hereda de la clase `Paciente` y agrega atributos adicionales como número, dirección y nombre completo. También, ahora tiene una relación de composición con la clase `HistorialMedico`. Proporciona métodos para acceder y modificar estos nuevos atributos, así como un método adicional para mostrar datos y manipular el historial médico.

#### Métodos Adicionales

- `Datospaciente(nombre: string, edad: int, peso: float, altura: float, sexo: char, numero: int, direccion: string, nombreCompleto: string)`: Constructor para inicializar un objeto `Datospaciente`.
- Métodos Getters y Setters para acceder y modificar los nuevos atributos.
- `agregarAlHistorial(): void`: Agrega un registro al historial médico.
- `mostrarHistorial(): void`: Muestra el historial médico del paciente.
- `mostrarDatos1(): void`: Muestra datos adicionales del paciente.

### 3. CalcularCalorias

La clase `CalcularCalorias` proporciona un método estático para calcular las calorías diarias necesarias para un paciente.

#### Métodos

- `kcal(paciente: Paciente): float`: Calcula las calorías diarias necesarias para el paciente.

### 4. HistorialMedico

La clase `HistorialMedico` representa el historial médico de un paciente. Permite agregar registros y mostrar el historial.

#### Métodos

- `agregarPaciente(paciente: Datospaciente): void`: Agrega un registro al historial médico.
- `mostrarHistorial(): void`: Muestra el historial médico.

## Uso del Programa

El programa principal (`main.cpp`) demuestra se encarga de ejecutar el codigo de las clases. Se crean instancias de `Paciente` y `Datospaciente`, se modifican sus atributos, se guardan en el historial médico y se calculan las calorías diarias.

### Ejemplo de Uso

```cpp
// Crear un paciente
Datospaciente paciente1("Marco", 20, 75, 180, 'M', 8991, "123 Main St", "Marco Solis");

// Ingresar y mostrar datos del paciente
paciente1.ingresarDatos();
paciente1.mostrarDatos();
paciente1.mostrarDatos1();

// Agregar al historial médico
paciente1.agregarAlHistorial();
paciente1.mostrarHistorial();

// Modificar datos del paciente
paciente1.setNombre("Juliana");
paciente1.setEdad(25);
// ...

// Mostrar datos actualizados
paciente1.mostrarDatos();
paciente1.mostrarDatos1();
paciente1.mostrarHistorial();

// Calcular y mostrar las calorías diarias
float caloriasDiarias = CalcularCalorias::kcal(paciente1);
cout << "Calorias diarias: " << caloriasDiarias << "kcal\n" << endl;




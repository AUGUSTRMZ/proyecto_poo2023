# Sistema de Información de Pacientes

Este programa es un sistema simple para gestionar información de pacientes, calcular calorías diarias y mostrar datos relacionados.

## Clases

### 1. Paciente

La clase `Paciente` representa a un paciente con atributos como nombre, edad, peso, altura y sexo. Proporciona métodos para ingresar y mostrar datos.

#### Métodos

- `Paciente(nombre: string, edad: int, peso: float, altura: float, sexo: char)`: Constructor para inicializar un objeto `Paciente`.
- `getNombre(): string`: Devuelve el nombre del paciente.
- `getEdad(): int`: Devuelve la edad del paciente.
- `getPeso(): float`: Devuelve el peso del paciente.
- `getAltura(): float`: Devuelve la altura del paciente.
- `getSexo(): char`: Devuelve el sexo del paciente.
- `setNombre(nuevoNombre: string): void`: Establece un nuevo nombre para el paciente.
- `setEdad(nuevaEdad: int): void`: Establece una nueva edad para el paciente.
- `setPeso(nuevoPeso: float): void`: Establece un nuevo peso para el paciente.
- `setAltura(nuevaAltura: float): void`: Establece una nueva altura para el paciente.
- `setSexo(nuevoSexo: char): void`: Establece un nuevo sexo para el paciente.
- `ingresarDatos(): void`: Permite al usuario ingresar los datos del paciente.
- `mostrarDatos(): void`: Muestra los datos del paciente.

### 2. Datospaciente

La clase `Datospaciente` hereda de la clase `Paciente` y agrega atributos adicionales como número, dirección y nombre completo. Proporciona métodos para acceder y modificar estos nuevos atributos, así como un método adicional para mostrar datos.

#### Métodos Adicionales

- `Datospaciente(nombre: string, edad: int, peso: float, altura: float, sexo: char, numero: int, direccion: string, nombreCompleto: string)`: Constructor para inicializar un objeto `Datospaciente`.
- `getNumero(): int`: Devuelve el número asociado al paciente.
- `getDireccion(): string`: Devuelve la dirección del paciente.
- `getNombreCompleto(): string`: Devuelve el nombre completo del paciente.
- `setNumero(nuevoNumero: int): void`: Establece un nuevo número para el paciente.
- `setDireccion(nuevaDireccion: string): void`: Establece una nueva dirección para el paciente.
- `setNombreCompleto(nuevoNombreCompleto: string): void`: Establece un nuevo nombre completo para el paciente.
- `mostrarDatos1(): void`: Muestra datos adicionales del paciente.

### 3. CalcularCalorias

La clase `CalcularCalorias` proporciona un método estático para calcular las calorías diarias necesarias para un paciente.

#### Métodos

- `kcal(paciente: Paciente): float`: Calcula las calorías diarias necesarias para el paciente.

## Uso del Programa

El programa principal (`main.cpp`) demuestra la funcionalidad de las clases. Se crean instancias de `Paciente` y `Datospaciente`, se modifican sus atributos y se calculan las calorías diarias.

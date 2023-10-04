#include <iostream>
using namespace std;
int main() {
 const int numAlumnos = 5;
 const int numCalificaciones = 7;

 // Declarar la matriz para almacenar las calificaciones de los alumnos
 double calificaciones[numAlumnos][numCalificaciones];

 // Ingresar las calificaciones
 for (int i = 0; i < numAlumnos; i++) {
 cout << "Ingrese las calificaciones del alumno " << i + 1 << ":" << endl;
 for (int j = 0; j < numCalificaciones; j++) {
 cout << "Calificación " << j + 1 << ": ";
 cin >> calificaciones[i][j];
 }
 }

 // Calcular los promedios y mostrar la tabla de datos
 cout << "\nTabla de datos:\n";
 for (int i = 0; i < numAlumnos; i++) {
 double suma = 0;
 for (int j = 0; j < numCalificaciones; j++) {
 suma += calificaciones[i][j];
 }
 double promedio = suma / numCalificaciones;

 cout << "Alumno " << i + 1 << ": ";
 for (int j = 0; j < numCalificaciones; j++) {
 cout << calificaciones[i][j] << " ";
 }
 cout << "Promedio: " << promedio << " ";

 // Evaluar el mensaje correspondiente al promedio
 if (promedio == 100) {
 cout << "= Excelente";
 } else if (promedio >= 90) {
 cout << "= Muy bien";
 } else if (promedio >= 80) {
 cout << "= Bien";
 } else if (promedio >= 70) {
 cout << "= Hay que mejorar";
 } else {
 cout << "= Reprobado";
 }

 cout << endl;
 }

 return 0;
}

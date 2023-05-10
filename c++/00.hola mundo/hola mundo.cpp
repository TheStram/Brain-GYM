#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

const string COLOR_ROSA = "rosa";
const string COLOR_CELESTE = "celeste";
const string COLOR_PURPURA = "purpura";

void imprimir_error() {
    cout << "Ese color no esta disponible :(\n";
    cout << "Por favor ingresa un color valido (" << COLOR_ROSA << ", " << COLOR_CELESTE << " o " << COLOR_PURPURA << "): ";
}

void imprimir_salida() {
    cout << "Gracias por ejecutar tu hola mundo!\n";
    cout << "Presiona cualquier tecla para salir...";
}

void imprimir_mensaje_bienvenida() {
    cout << "Bienvenido a la ejecucion de tu hola mundo\n";
    sleep(0.5);
}

void elegir_color() {
    string color;
    cout << "Primero vamos a elegir el color de texto puedes escoger entre " << COLOR_ROSA << ", " << COLOR_CELESTE << " y " << COLOR_PURPURA << ": ";
    cin >> color;
    while (color != COLOR_ROSA && color != COLOR_CELESTE && color != COLOR_PURPURA) { 
        imprimir_error();
        cin >> color;
    }
    if (color == COLOR_ROSA) {
        system("color c");
    } else if (color == COLOR_CELESTE) {
        system("color 9");
    } else if (color == COLOR_PURPURA) {
        system("color D");
    }
    system("cls"); // En sistemas Windows 
	//system("clear");// En sistemas Unix y Linux
}

void pedir_nombre() {
    string nombre;
    cout << "Ahora solo dame tu nombre y ejecutare tu hola mundo: ";
    cin >> nombre;
    system("cls"); // En sistemas Windows 
	//system("clear");// En sistemas Unix y Linux
    cout << "Hola " << nombre << " bienvenido al mundo de la programacion de nuevo, es un gusto tenerte de vuelta :D\n";
    cout << "Este es tu hola mundo y como siempre no te conformas con algo simple :D sigue haci\n";
}

int main() {
    imprimir_mensaje_bienvenida();
    elegir_color();
    pedir_nombre();
    imprimir_salida();
    
    getchar();
}

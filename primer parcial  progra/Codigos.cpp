/*
#include <iostream>

int main() {
    int num, i=1;

std::cout << "ingrese un numero";
std::cin >> num;

std::cout << "tabla de multiplicar de" << num << ":" << std::endl;

while (i<=10) {
    std::cout << num << "x" << i << "=" << num*i << std::endl;
    i++;
    }

    return 0;
}
//Este fue mi codigo para las tablas de multiplicar para cualquier
//numero que se ingrese.
*/

/*
#include <iostream>
int main () {

    int num[] = {5, 8, 9};

    for (int i = 0; i < 3; i++) {
        std::cout << "Tabla de multiplicar de " << num[i] << ":" << std::endl;

        for (int j = 1; j <= 10; j++) {
            std::cout << num[i] << " x " << j << " = " << num[i]*j << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
// este fue mi codigo para generar las tablas del 5,8 y 9 usando for
 */

#include <iostream>
#include <fstream>

void manejoArchivo(std::string ubicacionArchivo) {
    std::fstream archivo("C:/examen.txt", std::ios::in | std::ios::out | std::ios::app);

    if (archivo.is_open()) {
        std::cout << "Archivo abierto correctamente." << std::endl;

        // Leer el contenido del archivo
        std::string contenidoArchivo;
        archivo.seekg(0, std::ios::beg);
        while (std::getline(archivo, contenidoArchivo)) {
            std::cout << contenidoArchivo << std::endl;
        }

        // Escribir en el archivo
        std::string textoNuevo;
        std::cout << "Escriba un nuevo texto para agregar al archivo: ";
        std::getline(std::cin, textoNuevo);
        archivo << textoNuevo << std::endl;

        archivo.close();
        std::cout << "Archivo cerrado correctamente." << std::endl;

        // Volver a abrir el archivo
        archivo.open("C:/examen.txt", std::ios::in);
        if (archivo.is_open()) {
            std::cout << "Archivo abierto nuevamente." << std::endl;

            // Leer el contenido del archivo nuevamente
            std::string contenidoArchivoNuevo;
            archivo.seekg(0, std::ios::beg);
            while (std::getline(archivo, contenidoArchivoNuevo)) {
                std::cout << contenidoArchivoNuevo << std::endl;
            }

            archivo.close();
            std::cout << "Archivo cerrado correctamente." << std::endl;
        } else {
            std::cout << "No se pudo abrir el archivo." << std::endl;
        }
    } else {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }
}

int main() {
    std::string ubicacionArchivo = "C:/examen.txt";
    manejoArchivo(ubicacionArchivo);

    return 0;
}

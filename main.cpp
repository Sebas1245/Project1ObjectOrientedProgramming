#include <iostream>
#include <string>
#include <fstream>
#include "functions.cpp"

using namespace std;

int main(){
    // pido los nombres de los archivos
    cout << "Teclee el nombre del archivo que se debe analizar con la extension .txt " << endl;
    string nombreArchEntrada;
    getline(cin, nombreArchEntrada);
    // valido que el archivo termine en txt
    validateFileEnding(nombreArchEntrada);
    cout << "Ahora teclee el nombre del archivo de salida con la extension .txt" << endl;
    string nombreArchSalida;
    getline(cin,nombreArchSalida);
    // valido que el archivo termine en txt
    validateFileEnding(nombreArchSalida);
    // abro los archivos con los nombres dados
    ifstream archEntrada;
    archEntrada.open(nombreArchEntrada);
    ofstream archSalida;
    archSalida.open(nombreArchSalida);
    // obtengo la linea que me indica el "codigo" a utilizar y la guardo en un arreglo
    string codigo;
    getline(archEntrada,codigo);
    char arrCodigo[14];
    for (int i = 0; i < 28; i+=2) {
        arrCodigo[i/2] = codigo[i];
    }
    string lineaOperacion, signo;
    int parte1, parte2, resultado, espacio1, espacio2;
    // inicia el ciclo para analizar cada línea del archivo
    while (getline(archEntrada,lineaOperacion)) {
        // llamo la funcion transformar para decodificar la linea 
        transformar(lineaOperacion,arrCodigo);
        //encontrar los espacios
        espacio1 = lineaOperacion.find(' ');
        espacio2 = lineaOperacion.find(lineaOperacion.substr((espacio1+2)));
        // encontrar primera parte y convertir a int
        parte1 = stringToInt(lineaOperacion.substr(0,espacio1));
        // encontrar signo en string
        signo = lineaOperacion.substr((espacio1+1),1);
        // encontrar segunda parte y convertir a int
        parte2 = stringToInt(lineaOperacion.substr(espacio2+1));
        // poner todo en var resultado donde se realice la operacion dependiendo del signo es que operación se realiza
        if (signo == "+") {
            resultado = parte1 + parte2;
        }
        else if (signo == "-") {
            resultado = parte1 - parte2;
        }
        else if (signo == "*") {
            resultado = parte1 * parte2;
        }
        else if (signo == "/") {
            resultado = parte1/parte2;
        }
        else {
            resultado = -1;
            cout << "Error operacion no reconocida" << endl;
        }
        // escribo el resultado de la operacion en el archivo de salida
        archSalida << lineaOperacion << " = " << resultado << endl;
    }
    // cierro los archivos que estoy utilizando
    archEntrada.close();
    archSalida.close();
    return 0;
}
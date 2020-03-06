#include <iostream>
#include <string>

using namespace std;
// transformar
// decodifica caracteres codificados en un arreglo para modificarlo en un string
// Recibe: string operacion (donde esta guardada lo operacion aritmetica codificada), char arr[] (donde esta el "codigo")
//Regresa: no regresa valores 
void transformar(string &operacion, char arr[]) {
    for (int i = 0; i < operacion.length(); i++){
        // hago una comparación entre el arreglo del codigo y el string que leí del archivo. Si el caracter que saco del
        // string es igual a lo que tengo en un cierto índice del arreglo, cambio el valor del caracter del string al 
        // valor del indice en el string
        if (operacion[i] == arr[0]) {
            operacion[i] = '0';
        }
        else if (operacion[i] == arr[1]) {
            operacion[i] = '1';
        }
        else if (operacion[i] == arr[2]){
            operacion[i] = '2';
        }
        else if (operacion[i] == arr[3]) {
            operacion[i] = '3';
        }
        else if (operacion[i] == arr[4]){
            operacion[i] = '4';
        } 
        else if (operacion[i] == arr[5]) {
            operacion[i] = '5';
        }
        else if (operacion[i] == arr[6]){
            operacion[i] = '6';
        }
        else if (operacion[i] == arr[7]) {
            operacion[i] = '7';
        }
        else if (operacion[i] == arr[8]){
            operacion[i] = '8';
        }
        else if (operacion[i] == arr[9]) {
            operacion[i] = '9';
        }
        else if (operacion[i] == arr[10]){
            operacion[i] = '+';
        }
        
        else if (operacion[i] == arr[11]) {
            operacion[i] = '-';
        }
        else if (operacion[i] == arr[12]){
            operacion[i] = '*';
        }
        
        else if (operacion[i] == arr[13]) {
            operacion[i] = '/';
        }
        else {
            operacion[i] = ' ';
        }
    }
}

// stringToInt
// Convierte un string que tiene un numero a entero
// Recibe: string str 
// Regresa: valor entero
int stringToInt(string str) {
    int number = 0, numASumar;
    char stringChar;
    for (int i = 0; i < str.length(); i++) {
        // guardo el caracter analizado y lo convierto a entero
        stringChar = str[i];
        numASumar = (int(stringChar)-48);
        // reviso, si tiene un numero al lado debo multiplicarlo por diez porque tendré que "recorrer el putno"
        if (i <= (str.length()-1)) {
            number *= 10;
        }
        // voy añadiendo el caracter perteneciente al string ya convertido
        number += numASumar;
    }
    return number;
}

// validateFileEnding
// Valida que el usuario introduzca un archivo .txt
// Recibe el string fileName (nombre del archivo)
// Regresa el string fileName como parámetro por referencia
void validateFileEnding(string &fileName){
    // encuentro la terminación del archivo después del punto
    string fileEnding = fileName.substr(fileName.length()-3,3);
    // mientras que el archivo no termine en .txt debo seguir pidiendolo 
    while (fileEnding != "txt") {
        cout << "Error, el archivo no termina en .txt" << endl;
        cout << "Intentalo nuevamente " << endl;
        getline(cin,fileName);
        fileEnding = fileName.substr(fileName.length()-3,3);
    }
}

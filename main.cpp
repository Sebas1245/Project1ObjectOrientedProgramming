#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// transformar
// decodifica caracteres codificados en un arreglo para modificarlo en un string
// Recibe: string operacion (donde esta guardada lo operacion aritmetica codificada), char arr[] (donde esta el "codigo")
//Regresa: no regresa valores 
void transformar(string operacion, char arr[]) {
    for (int i = 0; i < operacion.length(); i++){
        if (operacion[i] == arr[0]) {
            operacion[i] = 0;
        }
        else if (operacion[i] == arr[1]) {
            operacion[i] = 1;
        }
        else if (operacion[i] == arr[2]){
            operacion[i] = 2;
        }
        else if (operacion[i] == arr[3]) {
            operacion[i] = 3;
        }
        else if (operacion[i] == arr[4]){
            operacion[i] = 4;
        }
        
        else if (operacion[i] == arr[5]) {
            operacion[i] = 5;
        }
        else if (operacion[i] == arr[6]){
            operacion[i] = 6;
        }
        else if (operacion[i] == arr[7]) {
            operacion[i] = 7;
        }
        else if (operacion[i] == arr[8]){
            operacion[i] = 8;
        }
        else if (operacion[i] == arr[9]) {
            operacion[i] = 9;
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

int main(){
    cout << "Teclee el nombre del archivo que se debe analizar con la extension .txt " << endl;
    string nombreArchEntrada;
    getline(cin, nombreArchEntrada);
    cout << "Ahora teclee el nombre del archivo de salida con la extension .txt" << endl;
    string nombreArchSalida;
    getline(cin,nombreArchSalida);
    ifstream archEntrada;
    archEntrada.open(nombreArchEntrada);
    ofstream archSalida;
    archSalida.open(nombreArchSalida);
    char arrCodigo[14];
    for (int i = 0; i < 14; i++) {
        archEntrada >> arrCodigo[i];
    }
    
    archEntrada.close();
    archSalida.close();
return 0;
}
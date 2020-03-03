#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void transformar(string operacion, char arr[]) {
    for (int i = 0; i < operacion.length(); i++){
        if (operacion[i] == arr[0]) {

        }
        else if (operacion[i] == arr[1]) {

        }
        else if (operacion[i] == arr[2]){
        
        }
        else if (operacion[i] == arr[3]) {

        }
        else if (operacion[i] == arr[4]){
        
        }
        
        else if (operacion[i] == arr[5]) {

        }
        else if (operacion[i] == arr[6]){
        
        }
        else if (operacion[i] == arr[7]) {

        }
        else if (operacion[i] == arr[8]){
        
        }
        
        else if (operacion[i] == arr[9]) {

        }
        else if (operacion[i] == arr[10]){
        
        }
        
        else if (operacion[i] == arr[11]) {

        }
        else if (operacion[i] == arr[12]){
        
        }
        
        else if (operacion[i] == arr[13]) {

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
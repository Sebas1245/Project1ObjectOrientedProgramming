#include <iostream>
#include <string>
#include <fstream>

using namespace std;

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
   
    archEntrada.close();
    archSalida.close();
return 0;
}
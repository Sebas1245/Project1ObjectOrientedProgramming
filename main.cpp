#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    cout << "Teclee el nombre del archivo que se debe analizar con la extension .txt " << endl;
    string nombreArchEntrada;
    getline(cin, nombreArchEntrada);
    ifstream archEntrada;
    archEntrada.open(nombreArchEntrada);
    
return 0;
}
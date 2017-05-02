#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream archivo("datos.txt");
    
    string texto;
    
    cout << "Ingrese el texto: "<< endl;
    
    while (texto != "*")
    {
        getline(cin, texto);
        
        
        //Inoresion en la pantalla
        //cout << "Linea ingresada es: " << texto << endl;
        
        archivo << "Linea ingresada es: " << texto << endl;
    }
    
    archivo.close();
    
   
}

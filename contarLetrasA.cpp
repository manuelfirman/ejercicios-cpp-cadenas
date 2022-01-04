#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
Hacer un programa para ingresar por teclado una palabra y luego contar 
cuántas veces aparece el carácter “a” en la misma.
*/

int main()
{
    //Variables
    char cPalabra[15];
    int conA=0;
    //ID
    cout << "Ingrese una palabra: ";
    cin.getline(cPalabra, 15, '\n');
    //Conteo de A
    for(int x=0; x<15; x++){
        if(cPalabra[x]=='a'){
            conA++;
        }
    }
    //OUT
    cout << "La palabra contiene " << conA << " letras A" << endl;
    return 0;
}

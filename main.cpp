#include <cstdlib>
#include <iostream>
#include "pila.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    
    Pila <int> pippo(5);
    bool x;
    int i, add;
    
        x = pippo.PilaVuota();
        
        for(i=0;i<5;i++){

            cout << "Inserisci: ";
            cin >> add;
            pippo.inPila(add);
            }
            
      cout << "Stampa della pila: " << endl;
      pippo.stampaPila();

      cout << "testa della pila: " << pippo.leggiPila()<< endl; 

    system("PAUSE");
    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include "pila.cpp"

using namespace std;

Pila<int> Ordina(Pila<int> *L);

int main(int argc, char *argv[])
{
    
    Pila <int> pippo,y;
    bool x;
    int i, add;
    
        x = pippo.PilaVuota();
        
        for(i=0;i<5;i++){

            cout << "Inserisci: ";
            cin >> add;
            pippo.inPila(add);
            }
            
      y = Ordina(&pippo);
         
     
      cout << "Stampa della pila: " << endl;
      pippo.stampaPila();

      cout << "testa della pila: " << pippo.leggiPila()<< endl; 

      cout << "Stampa della seconda pila: " << endl;
      y.stampaPila();

      cout << "testa della seconda pila: " << y.leggiPila()<< endl; 

    
    system("PAUSE");
    return EXIT_SUCCESS;
}

//funzione ordinamento crescente (dal più piccolo al più grande)
Pila<int> Ordina(Pila<int> *L)
    {
       Pila<int> x;         
       int y,z;
       if(!L->PilaVuota())
             {
              y=L->leggiPila();
              z=L->leggiPila();
                if(y < z)
                {
                  x.inPila(y);
                 }
                 else
                 x.inPila(z);            
             }

             return x;
    } 

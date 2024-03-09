   #include <iostream>
   #include <assert.h>
   #include "pila.h"
    
  using namespace std;
    
  
  template <class tipoelem> 
    Pila<tipoelem>::Pila() {
    	maxlung = 20;
    	creaPila();
    };

	template <class tipoelem> 
    Pila<tipoelem>::Pila(int dim) {
    	maxlung = dim;
    	creaPila();
    };


	template <class tipoelem> 
    Pila<tipoelem>::~Pila() {
    	delete[] VET;
    };
    
    template <class tipoelem> 
    void Pila<tipoelem>::creaPila() {
    	testa = -1;
    	VET = new tipoelem[maxlung];  
    };
    
    template <class tipoelem> 
    bool Pila<tipoelem>::PilaVuota() {
    	 bool risp;
    	 
    	 if (testa == -1)
    	    risp = true;
    	 else 
 	  	 risp = false;
			
		return risp;	    
    };


    template <class tipoelem> 
    void Pila<tipoelem>::fuoriPila() {
    	 if (PilaVuota() == false) 
    	     testa--;
    };
    
    template <class tipoelem> 
    void Pila<tipoelem>::inPila(tipoelem p) {
    	 if (testa < maxlung - 1) {
		     testa++;
		     VET[testa] = p;
    	 }
    };
	
	
	template <class tipoelem> 
    tipoelem Pila<tipoelem>::leggiPila() {
        return (VET[testa]); 	 
	};

    template <class tipoelem> 
    void Pila<tipoelem>::stampaPila() {
       stampa();
       invertiPila();
    };
    
    template <class tipoelem>
    void Pila<tipoelem>::stampa()
    {
    	if(!PilaVuota()) {
    	 	tipoelem x = leggiPila();
    	 	cout << x << endl;
    	 	fuoriPila();
    	 	stampa();
    	 	inPila(x);
    	 }

    };   
    

    template <class tipoelem>
    void Pila<tipoelem>::invertiPila()
    {
        tipoelem Elemento;
        if (!PilaVuota())   {
              Elemento = leggiPila();
        
		      fuoriPila();
		 
	          invertiPila();
		      inPila(Elemento);
         }  
    };  
    
    
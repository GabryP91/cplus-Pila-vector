/*******************************************************************
 template per: Pila rappresentata con vettore
*******************************************************************/

#ifndef _PILAVT_
#define _PILAVT_
    
   
    template < class tipoelem >
    
    class Pila {
         public:
            Pila(int);
            Pila();
            ~Pila();
          
            void creaPila();
            bool PilaVuota();
            void fuoriPila();
            void inPila(tipoelem);
            tipoelem leggiPila();
            void stampaPila();

            
        private:
            tipoelem *VET;
            int testa, maxlung;
            void stampa();    
            void invertiPila();
    };
    
  
#endif /* _PILAVT_H_ */

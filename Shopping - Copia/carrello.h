#ifndef SHOPPING_CARRELLO_H
#define SHOPPING_CARRELLO_H
#include <string>
#include <vector>
#include "Oggetto.h"
using std::vector;
using namespace std;
class carrello{
public:
    carrello(vector<Oggetto*> &);
       void gestione( );
     void stampa(  );
    void rimuovi(  );
     int somma( );

private:

    vector<int> prezzi;
    vector<Oggetto *> carr;
    int i=0;
int s=0;

};


#endif //SHOPPING_CARRELLO_H


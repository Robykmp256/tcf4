#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "Catalogo.h"


Categorie::Categorie (){
    cat.push_back(new Maglie);
    cat.push_back(new Pantaloni);
    vector <string> a;
    for (int i=0; i<cat.size(); i++) {
        a = cat[i]->Elenco();
        prodotti.insert(prodotti.end(), a.begin(), a.end());
        a.clear();
    }

}

vector <string> Categorie::Elenco() const{
    cout<<"siamo ad elenco in cat"<<endl;//Ti stampa l'elenco delle maglie
    return prodotti;
}

bool Categorie::Selezione( int s) const{     //Dato il numero associato alla maglia che hai scelto ti stampa le caratteristic
    if (s <= 1) {

        return cat[0]->Selezione(s);   //qua è troppo specifico ma non so come farlo generico
    }
    if (s > 1 && s <= 2) {
        return cat[1]->Selezione(s - 2);
    }
    cout<<"il valore di s:"<<s<<endl;
    return true;
}
 Oggetto* Categorie::getprod(int s) const
 {
    return cat[s]->getprod(s);   //qua è troppo specifico ma non so come farlo generico
          }
string Categorie::Nome() const
{
    for (int i=0; i<cat.size();i++) {
        cout<< i-1 <<" - ";
        cat[i]->Nome();
        cout<<endl;
    }
}



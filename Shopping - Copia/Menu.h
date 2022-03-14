#ifndef MENU_H
#define MENU_H

#include <string>
#include "Catalogo.h"
#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "carrello.h"
#include "Oggetto.h"
using namespace std;


class Menu{

public:
    Menu();
   vector<Oggetto*> spesa();
    Oggetto* tutto() const;
    Oggetto* parte() const;

    int getsomma();

private:
    Catalogo *ma;
    Catalogo *pa;
    Catalogo *lista;

    int som;
    vector<Oggetto*> v3;
};



#endif
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "Oggetto.h"
#include "carrello.h"
carrello::carrello(vector<Oggetto*>& v4)
{
    //cout<<"siamo nel carrello"<<endl; stampe di controllo
    //cout<<"lunghezza carrello 2: "<<v4.size()<<endl;
    for(int j=0;j<v4.size();j++) {

        cout << v4[j] << endl;//è puntatore a ogg non ogg
    }
    for(int j=0;j<v4.size();j++)
        {
        carr.push_back(v4[j]);



    }
        //cin>>s; fino a qui arriva
}


void carrello::stampa(){//la funzione la chiama, ma è prima il problema

    for(int j=0;j<carr.size();j++)
    {
        string a;
        cout<<"prodotto n "<<j+1<<":"<<endl;
        carr[j]->stampaog();//questo impazzisce
        cout<<endl;
        int f;
        cin>>f;
        a=carr[j]->getprezzo();
        int b;
        b=stoi(a);
        prezzi.push_back(b);
    }
}
void carrello::rimuovi() {
    int a, b;
    cout << "1-conferma" << endl;
    cout << "2-elimina un elemento dal carrello" << endl;
    cin >> b;
    while (b == 2) {
        cout << "digita l'elemento che vuoi rimuovere dal carrello?" << endl;
        cin >> a;
        while (a > carr.size() + 1) {
            cout << "nessun elemento del carrello corrisponde a " << a << " , inserire un valore valido" << endl;
            cin >> a;
        }
        carr.erase(carr.begin() + (a - 1));
    }
    cout << "1-conferma ordine" << endl;
    cout << "2-elimina un altro elemento" << endl;
    cin>>b;
}
int carrello::somma(){
    for(int i=0;i<prezzi.size();i++)
    {
        s=s+prezzi[i];
    }

    return s;
}
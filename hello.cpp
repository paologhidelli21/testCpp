// hello.cpp file
#include <iostream>
#include <string>
#include "hello.h"
using namespace std;

int main() {
    helloWorld();
    Stazione elemento1;
    Stazione elemento2;
    Stazione elemento3;

    //elemento1.begin("Primo");
    //elemento2.begin("Secondo");
    //elemento3.begin("Terzo");

    Stazione elencoStazioni[3];
    elencoStazioni[0].begin("Primo");
    elencoStazioni[1].begin("Secondo");
    elencoStazioni[2].begin("Terzo");

    /*
    int length = sizeof(elencoStazioni) / sizeof(elencoStazioni[0]);
    for (int i=0; i < length; i++) {
        elencoStazioni[i].setId(i);
    }
    */
    int i = 0;
    for (Stazione el: elencoStazioni){
        elencoStazioni[i].setId(i);
        i++;
    }

    
    for ( Stazione el: elencoStazioni){
        cout << el.getNome() << ": " << hex << el.getId() << "\n";
    }

    //cout << elemento1.getNome() << ": " << hex << elemento1.getId() << "\n";
    //cout << elemento2.getNome() << ": " << hex << elemento2.getId() << "\n";
    //cout << elemento3.getNome() << ": " << hex << elemento3.getId() << "\n";


    return 0;
}
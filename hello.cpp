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

    Stazione elencoStazioni[0xC];
    elencoStazioni[0x0].begin("Primo");
    elencoStazioni[0x1].begin("Secondo");
    elencoStazioni[0x2].begin("Terzo");
    elencoStazioni[0x3].begin("Quar");
    elencoStazioni[0x4].begin("Quin");
    elencoStazioni[0x5].begin("Ses");
    elencoStazioni[0x6].begin("Sett");
    elencoStazioni[0x7].begin("Ott");
    elencoStazioni[0x8].begin("Non");
    elencoStazioni[0x9].begin("Dec");
    elencoStazioni[0xA].begin("Undi");
    elencoStazioni[0xB].begin("Dodic");



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
    
    int cmd;
    cout << "Inserisci comando: ";
    cin >> hex >> cmd;

    cout << elencoStazioni[cmd].getNome() << ": " << elencoStazioni[cmd].getId() << "\n";

    //cout << elemento1.getNome() << ": " << hex << elemento1.getId() << "\n";
    //cout << elemento2.getNome() << ": " << hex << elemento2.getId() << "\n";
    //cout << elemento3.getNome() << ": " << hex << elemento3.getId() << "\n";


    return 0;
}
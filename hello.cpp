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

    elemento1.begin("Primo");
    elemento2.begin("Secondo");
    elemento3.begin("Terzo");

    

    //cout << elemento1.getNome() << ": " << hex << elemento1.getId() << "\n";
    //cout << elemento2.getNome() << ": " << hex << elemento2.getId() << "\n";
    //cout << elemento3.getNome() << ": " << hex << elemento3.getId() << "\n";
    return 0;
}
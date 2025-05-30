#include <iostream>
#include <string>
using namespace std;

void helloWorld(){
    cout << "\nHello World 2 !\n\n";
}

class Stazione {
    public:
        string _nome;
        int _id;

        void begin(string nome, int id) {
            _nome = nome;
            _id = id;
        }
        void begin(string nome) {
            _nome = nome;
        }
        string getNome() {
            return _nome;
        }
        int getId(){
            return _id;
        }
        void setId(int id){
            _id = id;
        }
};

class Evo : public Stazione {
    public:
        string _surname;
        void begin(string surname, string nome, int id) {
        _nome = nome;
        _id = id;
        _surname = surname;
        }
        string getNome() {
            return _surname + _nome;
        }
};
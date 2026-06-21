#include <iostream>
#include <vector>
#include "letras.h"

using namespace std;

int main() {
    // Se utilizo IA en este codigo para entender porque era necesario referenciar c al vector original en letras
    vector<char> letras = {'Q','u','e',' ','d','e','j','e','n',' ','t','o','d','i','t','o','s',' ','l','o','s',' ','l','i','b','r','o','s',' ','a','b','i','e','r','t','o','s'};
    for (int i=0; i<letras.size(); i++) {
        cout << letras[i];
    }
    cout << endl;
    for (int i=0; i<letras.size(); i++) {
        cout << letras[letras.size()-i-1];
    }
    cout << endl;
    int totalVocales = contarVocales(letras);
    cout << "Total de vocales en la frase es de :" << totalVocales << "\n" << endl;
    cout << "Pasado a minusculas" << endl;
    for (char &c : letras) {
        c = tolower(c);
    }

    for (char c : letras) {
        cout << c;
    }
    cout << endl;
    letras.push_back(' ');letras.push_back('h');letras.push_back('a');letras.push_back(' ');letras.push_back('s');
    letras.push_back('i');letras.push_back('d');letras.push_back('o');letras.push_back(' ');letras.push_back('l');
    letras.push_back('a');letras.push_back(' ');letras.push_back('o');letras.push_back('r');letras.push_back('d');letras.push_back('e');
    letras.push_back('n');letras.push_back(' ');letras.push_back('q');letras.push_back('u');letras.push_back('e');letras.push_back(' ');
    letras.push_back('d');letras.push_back('i');letras.push_back('o');letras.push_back(' ');letras.push_back('e');
    letras.push_back('l');letras.push_back(' ');letras.push_back('g');letras.push_back('e');letras.push_back('n');
    letras.push_back('e');letras.push_back('r');letras.push_back('a');letras.push_back('l');
    cout << endl;
    for (char c : letras) {
        cout << c;
    }
    cout << endl;
    totalVocales = contarVocales(letras);
    cout << "Total de vocales extendido :" << totalVocales << endl;
    return 0;
}

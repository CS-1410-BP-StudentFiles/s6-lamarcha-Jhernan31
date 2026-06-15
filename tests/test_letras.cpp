#include <cassert>
#include <vector>
#include <iostream>
#include "letras.h"

int main() {
    {
        std::vector<char> letras = {'L','A','M','A','R','C','H','A'};
        assert(contarVocales(letras) == 3);
    }

    {
        std::vector<char> letras = {'a','E','i','O','u','X'};
        assert(contarVocales(letras) == 5);
    }

    {
        std::vector<char> letras = {'B','C','D','F'};
        assert(contarVocales(letras) == 0);
    }

    std::cout << "All tests passed!\n";
    return 0;
}

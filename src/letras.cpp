#include "letras.h"

int contarVocales(const std::vector<char>& letras) {
    int total = 0;

    for (size_t i = 0; i < letras.size(); i++) {
        char c = letras[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            total++;
            }
    }

    return total;
}

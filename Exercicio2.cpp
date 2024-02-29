#include <iostream>

int main() {
    // Cria a variável
    int ano;

    // Solicita o ano desejado pelo usuário
    std::cout << "Digite um ano: ";
    std::cin >> ano;

    // Confere se o ano é bissexto e retorna para o usuário a resposta
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        std::cout << ano << " é um ano bissexto." << std::endl;
    } else {
        std::cout << ano << " não é um ano bissexto." << std::endl;
    }

    return 0;
}

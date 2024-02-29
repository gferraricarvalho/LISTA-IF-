#include <iostream>

int main() {
    // Cria as variáveis
    float peso, altura;

    // Solicita o peso e altura do usuário
    std::cout << "Digite o peso em quilogramas: ";
    std::cin >> peso;

    std::cout << "Digite a altura em metros: ";
    std::cin >> altura;

    // Efetua o cálculo do IMC
    float imc = peso / (altura * altura);

    // Classifica o IMC do usuário de acordo com a Tabela e retorna a classificação ao usuário
    if (imc < 17) {
        std::cout << "Muito abaixo do peso" << std::endl;
    }
    else if (imc >= 17 && imc < 18.5) {
        std::cout << "Abaixo do peso" << std::endl;
    }
    else if (imc >= 18.5 && imc < 25) {
        std::cout << "Peso Normal" << std::endl;
    }
    else if (imc >= 25 && imc < 30) {
        std::cout << "Acima do Peso" << std::endl;
    }
    else if (imc >= 30 && imc < 35) {
        std::cout << "Obesidade" << std::endl;
    }
    else if (imc >= 35 && imc < 40) {
        std::cout << "Obesidade Severa" << std::endl;
    }
    else if (imc >= 40) {
        std::cout << "Obesidade Morbida" << std::endl;
    }

    return 0;
}

//C02EX18.CPPC02EX18.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
    double valor = 3.14159;

    println("Valor com 2 casas decimais ..: {:.2f}", valor);
    println("Valor com 2 casas decimais ..: {:1.2f}", valor);
    println("Valor com 2 casas decimais ..: {:2.2f}", valor);
    println("Valor com 2 casas decimais ..: {:3.2f}", valor);
    println("Valor com 2 casas decimais ..: {:4.2f}", valor);
    println("Valor com 2 casas decimais ..: {:5.2f}", valor);
    println("Valor com 2 casas decimais ..: {:6.2f}", valor);
    println("Valor com 2 casas decimais ..: {:7.2f}", valor);
    println("Valor com 2 casas decimais ..: {:8.2f}", valor);
    println("Valor com 2 casas decimais ..: {:9.2f}", valor);

    println("Valor em notacao cientifica..: {:e}", valor);

    std::println("");
    std::print("Tecle <Enter> para encerrar...");
    std::cin.get();
    return 0;
}

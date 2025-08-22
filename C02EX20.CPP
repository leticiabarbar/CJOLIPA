//C02EX20.CPP

#include <iostream>
#include <print>

using namespace std;

int main (void){
    println("Esquerda ..........: {:*<8}", 10);
    println("Direita  ..........: {:*>8}", 10);
    println("Centralizado ......: {:*^8}", 10);

    std::println("");
    std::print("Tecle <Enter> para encerrar...");
    std::cin.get();
    return 0;
}

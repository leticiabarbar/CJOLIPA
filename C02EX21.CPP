//C02EX21.CPP

#include <iostream>
#include <print>

using namespace std;

int main (void){
    println("Zeros a esquerda..: {:08}, {:08}", 10, -.2);
    println("Espacos em branco.: {:8d}", 10);
    println("Sem espacos.......: {:d}", 10);

    std::println("");
    std::print("Tecle <Enter> para encerrar...");
    std::cin.get();
    return 0;
}

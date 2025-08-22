//C02EX24.CPP

#include <iostream>
#include <print>

using namespace std;

int main (void)
{
    println("Real {1:8.2f} - Inteiro {0}", 1,1.5);

    std::println("");
    std::print("Tecle <Enter> para encerrar...");
    std::cin.get();
    return 0;
}

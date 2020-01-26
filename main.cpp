#include <iostream>

double double_amount(double amount) {
    return amount * 2;
}

int main() {
    std::cout << "Entrez un montant à doubler: ";
    double amount{};
    std::cin >> amount;

    std::cout << double_amount(amount) << std::endl;

    return 0;
}
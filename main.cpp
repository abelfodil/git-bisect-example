#include <iostream>

double double_amount(double amount) {
    return amount * 2;
}

double compute_taxes(double amount) {
    return 0.15 * amount;
}

int main() {
    std::cout << "Entrez un montant à doubler: ";
    double amount{};
    std::cin >> amount;

    const auto doubled_amount = double_amount(amount);
    std::cout << doubled_amount << std::endl;
    std::cout << compute_taxes(doubled_amount) << std::endl;

    return 0;
}
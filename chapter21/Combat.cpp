#include <iostream>

int main()
{
    // define character values
    int strength;
    double accuracy;
    int dexterity;

    // define constants
    const double maximum = 50;

    // get user input
    std::cout << "\nEnter strength (1-100): ";
    std::cin >> strength;

    std::cout << "\nEnter accuracy (1-50): ";
    std::cin >> accuracy;

    std::cout << "\nEnter dexterity (1-50): ";
    std::cin >> dexterity;

    // calculate character combat stats
    double attack = strength * (accuracy / maximum);
    double damage = strength * (dexterity / maximum);

    std::cout << "\nAttack rating: " << attack << "\n";
    std::cout << "Damage rating: " << damage << "\n";
}


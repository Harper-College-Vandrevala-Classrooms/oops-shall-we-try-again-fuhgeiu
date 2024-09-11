#include <iostream>

void input() {

    int input;

    while (input < 0 || input > 100) {

        std::cout << "enter a value\n";

        std::cin >> input;

        if (input < 0 || input > 100) std::cout << "value to big\n";
        std:: cout << "\n\n";
    }
}


int main () {

    input();
}
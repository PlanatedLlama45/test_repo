#include <iostream>
#include <Windows.h>

int main() {
    srand(time(NULL));
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Calculating your sussyness...\n";
    Sleep(3000);
    std::cout << "Yro'uertgk " << (rand() % 100) << " sus :flushed: :skull:" << std::endl;

    return 0;
}
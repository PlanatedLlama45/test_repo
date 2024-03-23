#include <iostream>
#include <Windows.h>

int getRngPercentage() {
    return rand() % 100;
}

int main() {
    srand(time(NULL));
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Calculating your sussyness...\n";
    Sleep(3000);
    std::cout << "Yro'uertgk " << getRngPercentage() << "% sus :flushed: :skull:" << std::endl;

    return 0;
}
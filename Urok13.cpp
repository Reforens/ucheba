﻿#include <iostream>
#include <windows.h> 


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int al[6] = { 5, 12, 9, 13, -15, 7 };
    float Sum = 0.0;


        // 1
    for (int i : al) {
        Sum += i;
    }
    std::cout << "Sum = " << Sum << std::endl;


        // 2
    float average = Sum / 6;
    std::cout << "Average value = " << average << std::endl;


        // 3
    std::cout << "Positive numbers - ";
    for (int i : al) {
        if (i > 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Negative numbers";
    for (int i : al) {
        if (i < 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;


        // 4
    std::cout << "Even numbers - ";
    for (int i : al) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Оdd numbers - ";
    for (int i : al) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
#include <iostream>
#include <stdio.h>

int main() {

    std::cout << "Hello World!" << "\n";
    printf("This is a review of C++ basics and small advanced topics\n before I begin data structures");

    // Types
    int integer = 5;
    float floatingPoint = 5.5;
    double doublePoint = 6.5;
    char character = 'c';
    bool boolean = 1;

    std::string stdString = "Standard String";
    char string[] = "Character Array";

    if (boolean) {
        printf("true");
    } else {
        printf("false");
    }
    
    int day = 1;

    switch (day) {
        case 1:
            printf("Monday");
            break;
        default:
            printf("diff day");
    }

    // ok i quit
    // skipping to structs and da interesting stuff LOL

    return 0;

}
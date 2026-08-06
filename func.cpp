#include <iostream>
#include "init.h" // class layout

// favColors:: to tell the compiler which class these belong to

unsigned int favColors::getBuffer() const {
    return buffer;
}

void favColors::setBuffer(int newBuffer) {
    buffer = newBuffer;
}

void favColors::pressEnterToContinue() {
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
}

void favColors::clearConsole() {
    std::cout << "\033[2J\033[1;1H" << std::flush;
}

void favColors::showFirstMenu() {
    std::cout << "What do you want to do today?\n";
    std::cout << "\t1. Add new favorite color\n";
    std::cout << "\t2. Remove one of favorite color\n";
    std::cout << "\t3. Show all favorite colors\n";
    std::cout << "\t4. Exit\n";
}

void favColors::showColors() {
    std::cout << "Colors:\n";
    std::cout << "\t1. Red\n\t2. Blue\n\t3. Green\n\t4. Purple\n\t5. Cyan\n\t6. White\n\t7. Black\n\t8. Orange\n\t9. Beige\n\t10. Pink\n\t11. Salad\n\t12. Gray\n\n\t0. Exit\n";
}

void favColors::addColor(int colorOption) {
    if (colorOption >= 1 && colorOption <= 12) {
        buffer |= (1 << (colorOption - 1));
        std::cout << "Color added successfully\n";
    }
    else {
        std::cout << "Invalid color option\n";
    }
}

void favColors::removeColor(int colorOption) {
    if (colorOption >= 1 && colorOption <= 12) {
        buffer &= ~(1 << (colorOption - 1));
        std::cout << "Color removed successfully\n";
    }
    else {
        std::cout << "Invalid color option\n";
    }
}

void favColors::showFavoriteColors() {
    if (buffer & (1 << 0)) std::cout << "\tRed\n";
    if (buffer & (1 << 1)) std::cout << "\tBlue\n";
    if (buffer & (1 << 2)) std::cout << "\tGreen\n";
    if (buffer & (1 << 3)) std::cout << "\tPurple\n";
    if (buffer & (1 << 4)) std::cout << "\tCyan\n";
    if (buffer & (1 << 5)) std::cout << "\tWhite\n";
    if (buffer & (1 << 6)) std::cout << "\tBlack\n";
    if (buffer & (1 << 7)) std::cout << "\tOrange\n";
    if (buffer & (1 << 8)) std::cout << "\tBeige\n";
    if (buffer & (1 << 9)) std::cout << "\tPink\n";
    if (buffer & (1 << 10)) std::cout << "\tSalad\n";
    if (buffer & (1 << 11)) std::cout << "\tGray\n";
}
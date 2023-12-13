#include <iostream>
#include <string>
#include <conio.h> // For _getch()

int main() {
    std::string password = "secret"; // Set your password here
    std::string input;
    char ch;

    std::cout << "Please enter the password: ";

    while (true) {
        ch = _getch(); // Get a character from the user without displaying it
        if (ch == '\r' || ch == '\n') { // Check if the user pressed Enter
            break; // Exit the loop when Enter is pressed
        } else if (ch == 8) { // Check if the user pressed Backspace (ASCII code 8)
            if (!input.empty()) {
                input.pop_back(); // Remove the last character from the input
                std::cout << "\b \b"; // Erase the character on the console
            }
        } else {
            input.push_back(ch); // Add the character to the input
            std::cout << '*'; // Display '*' on the console
        }
    }

    std::cout << std::endl; // Move to a new line

    if (input == password) {
        std::cout << "Login successful! You entered the correct password." << std::endl;
    } else {
        std::cout << "Login failed! Incorrect password." << std::endl;
    }

    return 0;
}

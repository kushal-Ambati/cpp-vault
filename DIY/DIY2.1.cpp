#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, s);

    int vowels = 0;
    int consonants = 0;

    for (char c : s) {
        if (std::isalpha(c)) { // Check if it is a letter
            char lower_c = std::tolower(c);
            if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    std::cout << "Vowels: " << vowels << "\n";
    std::cout << "Consonants: " << consonants << "\n";

    return 0;
}

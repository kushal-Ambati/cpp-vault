#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string word1, word2;
    std::cout << "Enter first word: ";
    std::cin >> word1;
    std::cout << "Enter second word: ";
    std::cin >> word2;

    // Save originals for output display
    std::string orig1 = word1;
    std::string orig2 = word2;

    // Convert both to lowercase to handle case insensitivity if needed
    for (char &c : word1) c = std::tolower(c);
    for (char &c : word2) c = std::tolower(c);

    // Sort the characters of both words
    std::sort(word1.begin(), word1.end());
    std::sort(word2.begin(), word2.end());

    // If sorted strings are equal, they are anagrams
    if (word1 == word2) {
        std::cout << "\"" << orig1 << "\" and \"" << orig2 << "\" are anagrams.\n";
    } else {
        std::cout << "\"" << orig1 << "\" and \"" << orig2 << "\" are NOT anagrams.\n";
    }

    return 0;
}

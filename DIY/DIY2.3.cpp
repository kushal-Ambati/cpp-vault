<<<<<<< HEAD
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, s);

    // 1. Manually calculate the length of the string without using s.length()
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    // 2. Reverse the string manually by swapping characters from ends to middle
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap elements using a temporary variable
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        // Move the pointers closer to the center
        start++;
        end--;
    }

    // 3. Print the result
    std::cout << "Reversed character order: " << s << "\n";

    return 0;
}
=======
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, s);

    // 1. Manually calculate the length of the string without using s.length()
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    // 2. Reverse the string manually by swapping characters from ends to middle
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap elements using a temporary variable
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        // Move the pointers closer to the center
        start++;
        end--;
    }

    // 3. Print the result
    std::cout << "Reversed character order: " << s << "\n";

    return 0;
}
>>>>>>> 3e944c1792d995d6aadcb134291dc6f7f9605a53

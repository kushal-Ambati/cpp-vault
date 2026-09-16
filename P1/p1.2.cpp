#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;

    cout << "Enter a word: ";
    cin >> s;

    cout << "Length: " << s.length() << endl;

    // Find length

    for (char &c : s)
    {
        // Convert to uppercase
        c = toupper(c);
    }

    cout << "Upper: " << s << endl;

    bool pal = true;

    for (size_t i = 0, j = s.size() - 1; i < j; ++i, --j)
    {
        if (s[i] != s[j])
        {
            pal = false;
            break;
        }
    }

    if (pal)
        cout << s << " is a palindrome" << endl;
    else
        cout << s << " is not palindrome" << endl;

    // Find a substring

    size_t pos = s.find("AN");

    if (pos != string::npos)
        cout << "'AN' found at index " << pos << endl;
    else
        cout << "'AN' not found" << endl;

    return 0;
}
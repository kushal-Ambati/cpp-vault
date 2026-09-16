<<<<<<< HEAD
#include <iostream>
using namespace std;

// Smaller of two integers
inline int minVal(int a, int b)
{
    return (a < b) ? a : b;
}

// Smallest of three integers
inline int minVal(int a, int b, int c)
{
    return minVal(minVal(a, b), c);
}

int main()
{
    cout << "Smaller of 10 and 20 = "
         << minVal(10, 20) << endl;

    cout << "Smallest of 10, 20 and 5 = "
         << minVal(10, 20, 5) << endl;

    return 0;
=======
#include <iostream>
using namespace std;

// Smaller of two integers
inline int minVal(int a, int b)
{
    return (a < b) ? a : b;
}

// Smallest of three integers
inline int minVal(int a, int b, int c)
{
    return minVal(minVal(a, b), c);
}

int main()
{
    cout << "Smaller of 10 and 20 = "
         << minVal(10, 20) << endl;

    cout << "Smallest of 10, 20 and 5 = "
         << minVal(10, 20, 5) << endl;

    return 0;
>>>>>>> 3e944c1792d995d6aadcb134291dc6f7f9605a53
}
<<<<<<< HEAD
#include <iostream>
using namespace std;

int power(int base, int exp = 2)
{
    int result = 1;

    for(int i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    cout << "power(5) = " << power(5) << endl;
    cout << "power(2, 10) = " << power(2, 10) << endl;

    return 0;
=======
#include <iostream>
using namespace std;

int power(int base, int exp = 2)
{
    int result = 1;

    for(int i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    cout << "power(5) = " << power(5) << endl;
    cout << "power(2, 10) = " << power(2, 10) << endl;

    return 0;
>>>>>>> 3e944c1792d995d6aadcb134291dc6f7f9605a53
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    cout << "Proszę podać wartość dla x: ";
    cin >> x;

    cout << endl << "f(x) = ";

    if (x>0)
    {
        cout << 2*sin(x);
    }
    else
    {
        cout << 6-x;
    }

    return 0;
}

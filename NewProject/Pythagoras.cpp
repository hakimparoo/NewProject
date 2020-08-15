#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a = 0, b = 0, c;

    while (a == 0 || b == 0)
    {
        cout << " Pythagoras" << endl;
        cout << " Do not enter a or b equal to 0 " << endl;
        cout << "Pless Enter (a) " << endl;
        cin >> a;
        cout << "pless Enter (b) " << endl;
        cin >> b;

    }
    c = sqrt((a * a) + (b * b));
    cout << "Hypotenuse:" << c << endl;
    return 0;
}

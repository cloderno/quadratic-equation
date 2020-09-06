#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, r1, r2;
    //ax^2+bx+c=0
    //r = -b+-sqrt(b2-4ac)/2a
    cout << "Welcome to the Quadratic Equation program" << endl;
    cout << "Enter a, b and c values in a right order!";
    cin >> a >> b >> c;

    r1 = (-b + (sqrt( pow(b, 2) - 4 * a * c))) / (2 * a);
    r2 = (-b - (sqrt( pow(b, 2) - 4 * a * c))) / (2 * a);
    cout << "R1: " << r1 << endl;
    cout << "R2: " << r2 << endl;
    system("Pause");
    return 0;
}

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c;
    float d,e;

    cout << "Nilai A: ";
    cin >> a;

    cout << "Nilai B: ";
    cin >> b;

    cout << "Nilai C: ";
    cin >> c;

    d = (-b+sqrt(b*b-4*a*c))/(2*a);
    e = (-b-sqrt (b*b-4*a*c))/(2*a);

    cout << "hasil "<<setprecision(0)<<d <<endl;
    cout << "hasil "<<setprecision(0)<<e<<endl;

    return 0;

}

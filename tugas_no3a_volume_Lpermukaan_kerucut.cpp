#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int r, t, s;
    float volume, luas_permukaan;

    cout << "berapa jari jari kerucutnya? ";
    cin >> r;

    cout << "berapa tinggi kerucutnya? ";
    cin >> t;



    s= sqrt((r*r)+(t*t));
    volume = 1.0/3.0 * 3.14 *(r*r) * t;
    luas_permukaan =(3.14 * r * s) + (3.14 * (r*r));

    cout << "volume kerucut: " <<setprecision(3)<< volume << endl;
    cout << "luas permukaan kerucut: " <<setprecision(3)<< luas_permukaan << endl;



return 0;

}

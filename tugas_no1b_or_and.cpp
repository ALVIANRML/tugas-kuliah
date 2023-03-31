#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i = 2;
    int k = 7;
    int l = 1;
    int c = 9;
    int u = 5;
    int s = 6;
    int hasil;

    hasil = l%3 > u && (c/u < s || 3*i-k > 0);

    cout << "Hasil dari l%3 > u and (c/u < s or 3*i-k > 0) adalah " << hasil;
    return 0;

}

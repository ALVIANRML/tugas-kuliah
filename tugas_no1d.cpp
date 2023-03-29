#include <iostream>
#include <math.h>

using namespace std;

int main()
{



    int i=2;
    int k=7;
    int l=1;
    int c=9;
    int u=5;
    int s=6;
    int hasil;


    hasil = i | k &  l ^ 3 << 2;
    cout << "hasil dari i or k and  l XOR 3 shl 2 dalam bentuk bitwise adalah " << hasil;


    return 0;
}

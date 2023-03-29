#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
/*a=sebelum dipangkatkan
  b=sesudah dipangkatkan*/

    int bulat, a, b, p;
    float desimal;
    string nama;
    char kelas;

    //string
    printf  ("Masukkan nama anda: ");
    scanf   ("%s", &nama);

    //bilangan bulat
    cout << "Berapa umur anda: ";
    cin  >> bulat;

    //karakter
    printf ("Anda kelas apa (A,B,C): ");
    scanf (" %c", &kelas);

    //desimal
    printf("Masukkan sebuah bilangan desimal: ");
    scanf  ("%f" , &desimal);

    ulang:
    //pangkat
    cout << "Masukkan bilangan yang ingin di pangkatkan: ";
    cin >> a;

    cout << "ingin di pangkatkan berapa: ";
    cin >> p;

    /*penhitungan pangkat
    ------------------------
    a=sebelum dipangkatkan
    b=sesudah dipangkatkan*/

    b = pow(a, p);
    //output pangkat
    cout << "Hasil " << a << " pangkat " << p << " adalah: " << b <<"\n";

    return 0;
}

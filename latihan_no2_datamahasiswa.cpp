#include <iostream>
#include <string>


using namespace std;

int main()
{


string  tempat_lahir,nama,jurusan,fakultas,lahir,ptn;
char darah,nim[9],semester;



cout<<"Nama    : ";
getline (cin, nama);

cout << "NIM: ";
cin >> nim;


cout << "Golongan darah: ";
cin>> darah;

cout << "Tempat Tanggal lahir : ";
getline(cin,tempat_lahir);

cout << "Perguruan Tinggi: ";
getline(cin,ptn);

cout << "Fakultas: ";
getline(cin, fakultas);

cout << "Jurusan: ";
getline (cin,jurusan);
cout << "Semester: ";
cin>>semester;

//tampilkan

cout << "Biodata Mahasiswa " << ptn << " jurusan " << jurusan << endl;
cout << "\n";

cout << "Nama                   : " << nama << endl;
cout << "NIM                    : " << nim << endl;
cout << "Golongan darah         : " << darah << endl;
cout << "Tempat Tanggal Lahir   : " << tempat_lahir << endl;
cout << "Perguruan tinggi       : " << ptn << endl;
cout << "Fakultas               : " << fakultas << endl;
cout << "Jurusan                : " << jurusan << endl;
cout << "Semester               : " << semester << endl;



cin.get();
return 0;
}

#include <iostream>
using namespace std;

class Mahasiswa
{
    public:
        string nama;
        int nim;
        float nilai;

        void PrintData()
        {
            cout << "Nama : " << nama << endl;
            cout << "NIM : " << nim << endl;
            cout << "Nilai : " << nilai << endl;
        }

};

int main()
{
    Mahasiswa mhs1;
    mhs1.nama = "Jhoneldy";
    mhs1.nim = 1000;
    mhs1.nilai = 90.5;
}
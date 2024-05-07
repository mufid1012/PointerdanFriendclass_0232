#include <iostream>
using namespace std;

class mahasiswa {
    public : 
    int nim;

    void showNim() {
        cout << "No Induk = " << nim << endl;
    }

};

int main() {

    mahasiswa mhs{ 1 };       
    mhs.showNim();         

    mahasiswa& refMhs = mhs;        //pointer references refmhs
    refMhs.nim = 2;                 //member access operator
    mhs.showNim();

}
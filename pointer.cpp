#include <iostream>
using namespace std;

class persegiPanjang
{

public :
    int panjang, lebar; 
    int luasPersegiPanjang(int b, int a)
    {
        return a * b;
    }

};

class segitiga {

public:
    int tinggi, alas;
    int luasSegitiga(int a, int t)
    {
        return 0.5 * a * t;
    }

};

int main () {
    
    persegiPanjang pp;
    segitiga sg;
    cout << "Masukan Panjang : ";
    cin >> pp.panjang;
    cout << "Masukan lebar : ";
    cin >> pp.lebar;
    cout << "Masukan Tinggi : ";
    cin >> sg.tinggi;
    cout << "Masukan alas : ";

}
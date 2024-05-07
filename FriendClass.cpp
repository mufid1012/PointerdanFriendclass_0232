#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang 
{
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

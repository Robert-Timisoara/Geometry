#include <iostream>
#include "f_define.h"

using namespace std;

int main()
{
    float lat = 0;

    cout << "Latura = ";
    cin >> lat;
    cout << endl;

    cout << "perimetru = " << perimetru(lat) << endl;
    cout << "arie = " << arie(lat) << endl;
    cout << "diagonala = " << diagonala(lat) << endl;


    return 0;
}

#include <iostream>
#include "f_define.h"

using namespace std;

const float g_pi = 3.14;

int main()
{

    float raza = 0;

    cout << "raza = ";
    cin >> raza;
    cout << endl;

    cout << "diametru = " << diametru(raza) << endl;
    cout << "lungime = " << lungime(raza, g_pi) << endl;
    cout << "arie = " << arie(raza, g_pi) << endl;

    return 0;
}

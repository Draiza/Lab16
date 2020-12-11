#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    wcout.imbue(locale(".1251"));
    wcin.imbue(locale(".866"));
    int n, i, f, x, y;

    //1
    cin >> n;
    f = 1;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        a[i] = f;
        cout << a[i] << endl;
        f = f + 2;
    }

    //2
    cin >> n >> x >> y;
    int* b = new int[n];
    b[0] = x;
    cout << b[0] << endl;
    for (i = 1; i < n; i++)
    {
        b[i] = b[i - 1] * y;
        cout << b[i] << endl;
    }

    //3
    cin >> n >> x >> y;
    int* c = new int[n];

}

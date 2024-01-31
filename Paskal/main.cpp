#include <iostream>

#define WIDTH 8 
//#define PASKAL
//#define CHANGE
//#define CHESS1
//#define CHESS2

using namespace std;

void main()
{
    setlocale(0, ""); 
#ifdef CHESS1
    int size;
    cout << "¬ведите размер доски: "; cin >> size;
    setlocale(0, "C");
    for (int i = 0; i < size + 2; i++)
    {
        for (int j = 0; j < size + 2; j++)
        {
            if (i == 0 && j == 0)
                cout << (char)218;
            else if (i == size + 1 && j == size + 1)
                cout << (char)217;
            else if (i == size + 1 && j == 0)
                cout << (char)192;
            else if (i == 0 && j == size + 1)
                cout << (char)191;
            else if (j == 0 or j == size + 1)
                cout << (char)179;
            else if (i == 0 or i == size + 1)
                cout << (char)196 << (char)196;
            else
                ((i % 2 == 0 && j % 2 == 0) or (i % 2 != 0 && j % 2 != 0)) ?
                cout << (char)219 << (char)219 :
                cout << "  ";
        }
        cout << endl;
    }
#endif

#ifdef CHESS2
    int size;
    cout << "¬ведите размер доски: "; cin >> size;
    setlocale(0, "C");
    for (int i = 0; i < size * size; i++)
    {
        for (int j = 0; j < size * size; j++)
            (i % (2 * size) < size && j % (2 * size) < size) ||
            (i % (2 * size) >= size && j % (2 * size) >= size) ?
            cout << "* " : cout << "  ";
        cout << endl;
    }
#endif
    setlocale(0, " ");
#ifdef PASKAL
    int h;
    cout << "¬ведите высоту треугольника: "; cin >> h;
    int nf = 1;
    for (int i = 0; i < h; i++)
    {
        cout.width(WIDTH / 2);
        cout << "";
    }
    cout << left;
    cout << 1 << endl;
    for (int n = 1; n <= h; n++)
    {
        nf *= n;
        for (int i = 0; i < h - n; i++)
        {
            cout.width(WIDTH / 2);
            cout << "";
        }
        int mf = 1;
        cout.width(WIDTH);
        cout << 1;
        for (int m = 1; m <= n; m++)
        {
            mf *= m;
            int mnf = 1;
            for (int mn = 1; mn <= n - m; mn++)
            {
                mnf *= mn;
            }
            cout.width(WIDTH);
            cout << nf / mf / mnf;
        }
        cout << endl;
    }
#endif // PASKAL

#ifdef CHANGE
    int a, b;
    cout << "¬ведите два числа: "; cin >> a >> b;
    cout << a << " " << b << endl;
    a ^= b;
    b ^= a;
    a ^= b;
    cout << a << " " << b;
#endif // CHANGE
}
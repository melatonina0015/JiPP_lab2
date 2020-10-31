#include <iostream>

using namespace std;

template <typename A>
void mySwap(A *a, A *b)
{
    A tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    cout << "Badanie dzialania funkcji mySwap na roznych typach danych\n";

    cout << "int\n";
    int a, b;
    cin >> a >> b;
    mySwap(&a, &b);
    cout << a << " " << b << endl;

    cout << "float\n";
    float c, d;
    cin >> c >> d;
    mySwap(&c, &d);
    cout << c << " " << d << endl;

    cout << "char\n";
    char e, f;
    cin >> e >> f;
    mySwap(&e, &f);
    cout << e << " " << f << endl;

    cout << "bool\n";
    int g = true, h = false;
    cout << g << " " << h << endl;
    mySwap(&g, &h);
    cout << g << " " << h << endl;

    system("pause");
    return 0;
}

#include <iostream>

using namespace std;

void mySwap(int &a, int &b)
{
    if(b < a){
        int tmp = a;
        a = b;
        b = tmp;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    mySwap(a, b);
    cout << a << " " << b << endl;

    system("pause");
    return 0;
}

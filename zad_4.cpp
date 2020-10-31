#include <iostream>

using namespace std;

void myFunction(double a, double b, double &sum, double &product)
{
    sum = a + b;
    product = a * b;
}

int main()
{
    double a, b, sum = 0, product = 0;
    cin >> a >> b;
    cout << sum << " " << product << endl;
    myFunction(a, b, sum, product);
    cout << sum << " " << product << endl;

    system("pause");
    return 0;
}

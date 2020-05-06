#include <iostream>

using namespace std;
int fact(int n);

int main(void)
{
    int factorial;

    factorial = fact(5);

    cout << factorial << endl;
}

int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

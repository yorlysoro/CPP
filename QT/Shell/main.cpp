#include <iostream>
#include <shell.h>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Mini Shell" << endl;
    Shell *terminal = new Shell();

   terminal->Entrada("");
    return 0;
}

#ifndef SHELL_H
#define SHELL_H
#include <iostream>
using namespace std;
class Shell
{
public:
    Shell();
    ~Shell();
   void Entrada(string comando);
   bool Comprueba(string comando);

};

#endif // SHELL_H

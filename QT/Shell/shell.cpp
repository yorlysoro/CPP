#include "shell.h"

Shell::Shell()
{

}
void Shell::Entrada(string comando)
{
    if(!Comprueba(comando))
        cout << "No es un comando" << endl;
    else
        system(comando.c_str());
}

bool Shell::Comprueba(string comando)
{
    if(comando.empty())
    {
        cout << "El comando esta vacio" << endl;
        return false;
      }
    else
        return true;
}

#include <curses.h>

using namespace std;

int main(int argc, char *argv[])
{
    char users_name[100];

    initscr();
    (void)echo();
    addstr("Cual es tu nombre");
    refresh();
    getnstr(users_name, sizeof(users_name)-1);
    printw("Obtenido %s!\n", users_name);
    refresh();

    endwin();
    return 0;
}

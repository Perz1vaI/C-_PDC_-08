#include <ncurses.h>
int main()
{
    int MaxY, MaxX;
    initscr();
    cbreak();
    noecho();
    nonl();
    getmaxyx(stdscr, MaxY, MaxX);
    WINDOW *ventana = newwin(MaxY, MaxX, 0, 0);
    WINDOW *_subventana1 = subwin(ventana, MaxY - 2, (MaxX / 4) - 2, 1, 1);
    WINDOW *_subventana2 = subwin(ventana, MaxY - 2, (MaxX / 4) - 2, 1, (MaxX / 4) + 1);
    WINDOW *_subventana3 = subwin(ventana, MaxY - 2, (MaxX / 4) - 2, 1, (2 * (MaxX / 4) + 1));
    WINDOW *_subventana4 = subwin(ventana, MaxY - 2, (MaxX / 4) - 2, 1, (3 * (MaxX / 4) + 1));
    box(_subventana1, ACS_VLINE, ACS_HLINE);
    box(_subventana2, ACS_VLINE, ACS_HLINE);
    box(_subventana3, ACS_VLINE, ACS_HLINE);
    box(_subventana4, ACS_VLINE, ACS_HLINE);
    box(ventana, ACS_VLINE, ACS_HLINE);
    touchwin(ventana);
    wrefresh(ventana);
    getchar();
    endwin();
    return 0;
}
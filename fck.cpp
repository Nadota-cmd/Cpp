#include <ncurses.h>
#include <vector>
#include <string>
using namespace std;

int main() {
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    bool ru = false;
    vector<string> lang = {"Russian(Русский)", "English", "Back"};
    vector<string> hell = {"Back"};
    vector<string> addcom = {"Start to write in the Bash", "Back"};
    vector<string> items = {"Add a command","Help", "Choose language(ru/eng)", "Exit"};
    if (ru != false) {
        items.clear();
        items.push_back("Добавить команду");
        items.push_back("Помощь");
        items.push_back("Выбрать язык(Русс/Англ)");
        items.push_back("Выйти");
    }

    int selected = 0;
    while (true) {
        clear();
        for (size_t i = 0; i < items.size(); ++i) {
            if (selected == i) attron(A_REVERSE);
            mvprintw(i + 5, 10, "%s", items[i].c_str());
            attroff(A_REVERSE);
 л       }
    int key = getch();
       if (key == KEY_UP && selected > 0)
           selected--;
       else if (key == KEY_DOWN && selected < items.size() - 1)
           selected++;
       else if (key == 10) break;
щ    }
    switch (selected) {
        case 0: {
            int selecte = 0;
            while (true) {
                clear();
                for (size_t h = 0; h < addcom.size(); ++h) {
                    if (selecte == h) attron(A_REVERSE);
                         mvprintw(h + 5, 10, "%s", addcom[h].c_str());
                         attroff(A_REVERSE);
                }
            int ke = getch();
                if (ke == KEY_UP && selecte > 0)
                    selecte--;
                else if (ke == KEY_DOWN && selecte < addcom.size() - 1)
                    selecte++;
                else if (ke == 10) break;
            }
        }
        case 1: {
            int select = 0;
            while (true) {
                clear();
                for (size_t w = 0; w < hell.size(); ++w) {
                    if (selected == w) attron(A_REVERSE);
                         mvprintw(w + 5, 10, "%s", hell[w].c_str());
                         attroff(A_REVERSE);
                }
            int k = getch();
                if (k == KEY_UP && select > 0)
                    select--;
                else if (k == KEY_DOWN && select < hell.size() - 1)
                    select++;
                else if (k == 10) break;
            }
        }
        case 2: {
            int selec = 0;
            while (true) {
                clear();
                for (size_t a = 0; a < lang.size(); ++a) {
                    if (selec == a) attron(A_REVERSE);
                         mvprintw(a + 5, 10, "%s", lang[a].c_str());
                         attroff(A_REVERSE);
                }
            int ky = getch();
                if (ky == KEY_UP && selec > 0)
                    selec--;
                else if (ky == KEY_DOWN && selec < lang.size() - 1)
                    selec++;
                else if (ky == 10) break;
            }
        }
        case 3: {

        }
    }

    endwin();
    return 0;
}
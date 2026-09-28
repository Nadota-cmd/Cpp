#include <ncurses.h>
#include <string>
#include <vector>
#include <filesystem>
#include <random>
#include <fstream>
#include <regex>
using namespace std;
void smeow() {
    string cold = " ⡔⠉⠑⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣰⠋⠉⠉⠓⡆\n ⣸⠁⠀⠀⠀⠙⢦⡀⢸⡉⠓⠲⣄⡀⢀⡞⠀⠀⠀⠀⣀⣽⡤⠀\n⠀⡇⠀⠀⠀⠀⠀⠀⠙⣦⠷⠄⠀⠀⠙⠞⠀⠀⠀⠀⠀⠒⠚⡏⠁\n⠀⡇⠀⠀⠀⠀⣀⣀⡚⠓⠒⠒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀\n⠀⡇⠀⠀⠀⡎⠀⠀⠈⡆⠀⠀⠀⠀⠘⢄⣀⣀⡀⠀⠀⠀⣸⠁⠀\n⠀⠈⣇⠀⠐⡶⠖⣲⣶⡆⠀⠀⠀⠀⣶⣶⡒⠲⡒⠀⢀⡼⠁⠀⠀\n ⠰⣖⠺⠧⢸⠁⠀⣿⣿⠇⠀⠀⠀⠀⣿⣿⠇⠀⡇⠀⠉⣩⠇⠀⠀\n⠀⠈⣳⠀⣨⢃⠀⠈⠉⠀⠒⠂⠀⠀⠈⠁⢀⠄⡡⠀⢼⡁⠀⠀⠀\n⠀⢰⣃⣈⣀⠁⠀⠀⠀⠦⠔⠓⠲⡲⠃⠀⠀⢈⣀⣀⣀⣹⡄⠀⠀\n⠀⠀⠀⠀⠀⠉⢳⠲⠤⢄⣀⣀⣀⣠⢶⠒⣏⠉⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠈⣳⠒⢲⠋⢱⠤⠧⠚⠋⠘⡆⠀⠀⠀⠀⠀⠀⠀\n ⠀⠀⠀⠀⠀⠀⠘⠓⡆⠈⠒⠁⠀⠀⠀⠀⠀⢹⡀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⣼⣁⣀⣀⣀⣀⣀⣀⣀⣀⣀⡇⠀⠀⠀⠀⠀⠀";
    if (!filesystem::exists("meow.txt")) {
     ofstream file("meow.txt", ios::app);
     file << cold << "\n";
     file.close();
    }
    vector<string> yourmotherisathingnow = {"₍^ >⩊< ^₎Ⳋ","（˶•̀ ᎑-˶）","(💢,,>﹏<,,) b-baka!","(╥﹏╥)","(⸝⸝๑﹏๑⸝⸝)","♡ฅ^>⩊<^ ฅ | ррр! :3","( > 〰 < )♡","(˶˃⤙˂˶)"};
    int rubl = 0;
    int tg = 5;
    int min = 0;
    bool hasn = false;
    int max = 7;
    regex meooow("m+e+o+w+~*", regex_constants::icase);
    while (true) {
        clear();
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(min, max);
        int ran = dist(gen);
        int left = rubl - tg;
        mvprintw(4, 2, "type meow/Meow/Meeeoow/meeow~ i hope you get it");
        mvprintw(6, 4, "u said meow [%d] and left [%d]", rubl, left);
        mvprintw(8, 4, "Type(⸝⸝๑﹏๑⸝⸝): ");
        refresh();
        char buf[1487];
        echo();
        curs_set(1);
        getstr(buf);
        string buff(buf);
        if (buff == "exit" || rubl >= tg)
            if (hasn == false) {
                mvprintw(10, 10, "ure not finally");
                hasn = true;
            } else if(hasn == true) {
                mvprintw(10, 10, "\033[32mure not finally\033[0m");
            }
            refresh();
            napms(1000);
            clear();
            refresh();
        if (regex_search(buff, meooow)) {
            buff = buff + " " + yourmotherisathingnow[ran];
            ofstream file("meow.txt", ios::app);
            file << "\n" << buff << "\n";
            file.close();
            rubl++;
        }
        if (tg <= rubl)
            break;

    } // while
} // void
void shelp() {
    int sel = 0;
    string b = "Back";
    while (true) {
        clear();
        start_color();
        init_pair(1, COLOR_YELLOW, COLOR_BLACK);
        attron(COLOR_PAIR(1) | A_BOLD);
        mvprintw(5, 6, "nb - open the bashrc.");
        mvprintw(7, 6, "sb - source bashrc.");
        mvprintw(9, 6, "np - autocomplete .cpp files, ");
        mvprintw(10, 6, "command write in the files");
        mvprintw(11, 6, "int main/iostream/return and other.");
        mvprintw(13, 6, "mcd - create file, and included in the catalog.");
        mvprintw(15, 6, "hello - just say hello");
        mvprintw(17, 6, "fck - open the script, and you can included meow room.");
        mvprintw(19, 6, "gp - his compiles C++ scrpit, you must to");
        mvprintw(20, 6, "write file .cpp and his binary, command g all the same but for C");
        attroff(COLOR_PAIR(1) | A_BOLD);
        attron(A_REVERSE);
        mvprintw(25, 40, "%s", b.c_str());
        attroff(A_REVERSE);
    int k = getch();
        if (k == 10) {
            break;
        }
    }
}
void smenu() {
    vector<string> suki = {"Help","meow~ room3","Exit"};
    int sel = 0;
    while (true) {
        clear();
        for (size_t i = 0; i < suki.size(); ++i) {
            if (i == sel) attron(A_REVERSE);
                mvprintw(i + 5, 10, "%s", suki[i].c_str());
            attroff(A_REVERSE);
        }
    int key = getch();
        if (key == KEY_UP && sel > 0)
            sel--;
        else if (key == KEY_DOWN && sel < suki.size() - 1)
            sel++;
        else if (key == 10) break;
    }
    switch (sel) {
        case 0: {
            shelp();
            break;
            smenu();
        }
        case 1: {
            smeow();
            break;
            smenu();
        }
    }
}
int main() {
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);

    smenu();
    endwin();
    return 0;
}
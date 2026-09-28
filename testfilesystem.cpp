#include <iostream>
#include <filesystem>
#include <vector>
#include <string>
using namespace std;
namespace fs = std::filesystem;

int main() {
    vector<fs::directory_entry> files;
    for (const auto& entr : fs::directory_iterator("."))
        files.push_back(entr);
    for (const auto& entr : files) {
        if (entr.is_directory())
            cout << "\033[1;34m" << entr.path().filename().string() << "\033[0m" << endl;
        else if (entr.is_regular_file()) {
            fs::perms p = entr.status().permissions();
            if ((p & fs::perms::owner_exec) != fs::perms::none || (p & fs::perms::group_exec) != fs::perms::none || (p & fs::perms::others_exec)  != fs::perms::none)
                cout << "\033[1;32m" << entr.path().filename().string() << "\033[0m" << endl;
            else {
                cout << "\033[1;35m" << entr.path().filename().string() << "\033[0m" << endl;
            }
        }
    }
    return 0;
}
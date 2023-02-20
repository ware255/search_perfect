#include "search.hpp"

search::search(int t) {
    p = t;
    /* 文字化け対策 */
    system("chcp 65001");
    system("cls");
    /* AA表示 */
    std::cout << "\n  __   ___    __    ___    ___  _  _          ___   ___   ___   ___   ___    ___  _____" << std::endl;
    std::cout << "/' _/ | __|  /  \\  | _ \\  / _/ | || |        | _,\\ | __| | _ \\ | __| | __|  / _/ |_   _|" << std::endl;
    std::cout << "`._`. | _|  | /\\ | | v / | \\__ | >< |  ____  | v_/ | _|  | v / | _|  | _|  | \\__   | |" << std::endl;
    std::cout << "|___/ |___| |_||_| |_|_\\  \\__/ |_||_| |____| |_|   |___| |_|_\\ |_|   |___|  \\__/   |_|\n" << std::endl;

}

/* アクセスできないディレクトリを判別 */
int search::prohibited_directory(std::string str) {
    if (str != K01 && str != K02 && str != K03 && str != K04 && str != K05 && str != K06 && str != K07 &&
        str != K08 && str != K09 && str != K10 && str != K11 && str != K12 && str != K13 && str != K14 &&
        str != K15 && str != K16 && str != K17 && str != K18 && str != K19 && str != K20 && str != K21 &&
        str != K22 && str != K23 && str != K24 && str != K25 && str != K26 && str != K27 && str != K28 &&
        str != K29 && str != K30 && str != K31 && str != K32 && str != K33 && str != K34 && str != K35 &&
        str != K36 && str != K37 && str != K38 && str != K39 && str != K40 && str != K41 && str != K42 &&
        str != K43 && str != K44 && str != K45 && str != K46 && str != K47 && str != K48 && str != K49 &&
        str != K50 && str != K51 && str != K52 && str != K53 && str != K54)
    {
        return 0;
    }
    return 1;
}

void search::start(std::wstring path) {
    for (const std::filesystem::directory_entry &i : std::filesystem::directory_iterator(path, std::filesystem::directory_options::follow_directory_symlink)) {
        if (i.is_directory() && prohibited_directory(i.path().filename().string()) != 1)
        {
            start(i.path().generic_wstring());
        }
        else {
            test = i.path().filename().string();
            if (test == file_name) {
                if (p != 1) p = 1;
                std::cout << i.path().string() << std::endl;
            }
        }
    }
}

bool search::main() {
    std::cout << "Enter the name of the file you wish to find." << std::endl;
    std::cin >> file_name;
    std::cout << "\nI'm looking for a file.\n" << std::endl;
    start(L"C:\\Users");
    start(L"C:\\Windows");
    if (p != 0) return true;
    return false;
}
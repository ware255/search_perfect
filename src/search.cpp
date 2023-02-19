#include "search.hpp"

search::search(int t) {
    p = t;
    system("chcp 65001");
    system("cls");
    std::cout << "\n  __   ___    __    ___    ___  _  _          ___   ___   ___   ___   ___    ___  _____" << std::endl;
    std::cout << "/' _/ | __|  /  \\  | _ \\  / _/ | || |        | _,\\ | __| | _ \\ | __| | __|  / _/ |_   _|" << std::endl;
    std::cout << "`._`. | _|  | /\\ | | v / | \\__ | >< |  ____  | v_/ | _|  | v / | _|  | _|  | \\__   | |" << std::endl;
    std::cout << "|___/ |___| |_||_| |_|_\\  \\__/ |_||_| |____| |_|   |___| |_|_\\ |_|   |___|  \\__/   |_|\n" << std::endl;

}

int search::prohibited_directory(std::string str) {
    if (str != K01 && str != K02 && str != K03 && str != K04 && str != K05 && str != K06 && str != K07 &&
        str != K08 && str != K09 && str != K10 && str != K11 && str != K12 && str != K13 && str != K14 &&
        str != K15 && str != K16 && str != K17 && str != K18 && str != K19 && str != K20 && str != K21 &&
        str != K22)
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
    if (p != 0) return true;
    return false;
}
#include "search.hpp"

int main() {
    search search(0);
    if (!search.main()) {
        std::cout << "File not found." << std::endl;
        std::cout << "\nPress Enter to exit." << std::endl;
        std::cin.get();
    }
    else {
        std::cout << "\nPress Enter to exit." << std::endl;
        std::cin.get();
    }
    std::cin.get();
    return 0;
}
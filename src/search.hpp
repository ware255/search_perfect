#include <iostream>
#include <string>
#include <filesystem>

#define K01 "Application Data"
#define K02 "All Users"
#define K03 "History"
#define K04 "Temporary Internet Files"
#define K05 "Start Menu"
#define K06 "Cookies"
#define K07 "Default"
#define K08 "Default User"
#define K09 "Public"
#define K10 "INetCache"
#define K11 "WinSAT"
#define K12 "My Music"
#define K13 "My Pictures"
#define K14 "My Videos"
#define K15 "Local Settings"
#define K16 "My Documents"
#define K17 "NetHood"
#define K18 "PrintHood"
#define K19 "Recent"
#define K20 "SendTo"
#define K21 "Templates"
#define K22 "スタート メニュー"

class search{
private:
    std::string file_name;
    std::string test;
    int p;
public:
    search(int);
    bool main();
    void start(std::wstring);
    int prohibited_directory(std::string);
};
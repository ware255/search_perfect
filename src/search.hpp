#include <iostream>
#include <string>
#include <filesystem>

/* アクセスできないディレクトリたち */
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
#define K23 "Start Menu"
#define K24 "Programs"
#define K25 "CSC"
#define K26 "LiveKernelReports"
#define K27 "SystemRestore"
#define K28 "ModemLogs"
#define K29 "Prefetch"
#define K30 "Autopilot"
#define K31 "VSCache"
#define K32 "audit"
#define K33 "cap"
#define K34 "LocalService"
#define K35 "NetworkService"
#define K36 "ServiceState"
#define K37 "dmp"
#define K38 "config"
#define K39 "Configuration"
#define K40 "DriverData"
#define K41 "DriverState"
#define K42 "ias"
#define K43 "RtBackup"
#define K44 "MsDtc"
#define K45 "networklist"
#define K46 "SleepStudy"
#define K47 "PRINTERS"
#define K48 "SERVERS"
#define K49 "sru"
#define K50 "Tasks"
#define K51 "MOF"
#define K52 "WDI"
#define K53 "SystemTemp"
#define K54 "Msdtc"

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
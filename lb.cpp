#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <conio.h>
#pragma comment(lib, "urlmon.lib")

//
// COMMANDS
//

void cls() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void help() {
    std::cout << "Welcome to LigmaBalls!" << "\n";
    std::cout << "Here are some commands you can use:" << "\n";
    std::cout << "fs" << "\n";
    std::cout << "Using fs will launch freakysay, so you can echo your words!" << "\n";
    std::cout << "clear" << "\n";
    std::cout << "Clear clears the terminal!" << "\n";
    std::cout << "freakybob" << "\n";
    std::cout << "WARNING: SPAMS CONSOLE" << "\n";
    std::cout << "This command prints a freakybob ASCII art thingymajig" << "\n";
    std::cout << "update" << "\n";
    std::cout << "Downloads the latest update." << "\n";
    std::cout << "greg" << "\n";
    std::cout << "Adds Greg Heffley to your desktop" << "\n";
    std::cout << "spkg" << "A package manager for LigmaBalls! NOT IMPLEMENTED YET, SPKG NEEDS TO BE REWRITTEN IN C++" << "\n";
    std::cout << "ping" << "Pings google.com and provides the ping time in ms. NOT IMPLEMENTED YET" << "\n";
    std::cout << "buttcalc" << "\n";
    std::cout << "literally just a calculator" << "\n";
    std::cout << "version" << "Shows the current version.\n";
    std::cout << "luni moon\n";
    std::cout << "Downloads luni moon's intro\n";
}

void freakybob() {
    std::cout << "This requires an additional download of 5.42 KB." << "\n";
    std::cout << "Are you fine with that? Close this if not. ";

    std::cin.ignore();
    std::cin.get();

    std::string url = "https://github.com/Freakybob-Team/lb/blob/main/freakybob.txt?raw=true";
    std::string filePath = "freakybob.txt";

    std::string command = "curl -L " + url + " -o " + filePath;
    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "File downloaded successfully" << "\n";

        std::ifstream fb(filePath);
        if (fb.is_open()) {
            std::cout << fb.rdbuf();
            fb.close();
        } else {
            std::cerr << "error" << "\n";
        }
    } else {
        std::cerr << "error" << "\n";
    }
}

void freakysay() {
    std::string isstop = "no";
    std::cout << "Welcome to freakysay, also known as FS." << "\n";

    while (isstop == "no") {
        std::string echo;
        std::cout << "freakysay < ";
        std::getline(std::cin, echo);
        std::cout << echo << "\n";
    }
}

void quarky() {
    std::cout << "YOU DUMMY PYTHON 3.8??? THE NEWEST VERSION IS 3.13" << "\n";
    std::cout << "AND A PIP VERSION FROM 2021?????" << "\n";
}

void thiscommanddoesnotexist() {
    std::cout << "Yes it does." << "\n";
}

void buttcalc() { // someone needs to fix this, its kinda buggy
    std::string num1, num2, sign;

    std::cout << "First number: ";
    std::cin >> num1;
    std::cout << "Second number: ";
    std::cin >> num2;
    std::cout << "Enter the operation thingy (ex: Addition): ";
    std::cin >> sign;

    int n1 = std::stoi(num1);
    int n2 = std::stoi(num2);

    if (sign == "Addition") {
        int sum = n1 + n2;
        std::cout << sum << "\n";
    }
    else if (sign == "Multiplication") {
        int product = n1 * n2;
        std::cout << product << "\n";
    }
    else if (sign == "Subtraction") {
        int difference = n1 - n2;
        std::cout << difference << "\n";
    }
    else if (sign == "Division") {
        if (n2 != 0) {
            double quotient = static_cast<double>(n1) / n2;
            std::cout << quotient << "\n";
        } else {
            std::cerr << "Error: Division by zero is not allowed!" << "\n";
        }
    }
}

void dungeon() {
    std::cout << "help freakybob has me in his dungeon send help NOW please" << "\n";
}

void version() {
    std::cout << "Current version: 0.0.2\n";
}

void update() {

    std::string url = "https://github.com/Nomaakip/lb-rewrite/releases/download/prerelease/lb.exe";
    std::string filePath = "freakybob.exe";

    std::string command = "curl -L " + url + " -o " + filePath;
    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "File downloaded successfully" << "\n";
    }

    else {
        std::cout << "error\n";
    }
}

void greg() {
    std::string url = "https://raw.githubusercontent.com/Nomaakip/lb-rewrite/refs/heads/main/pngegg%20(1).png";
    std::string filePath = "greg.png";

    std::string command = "curl -L " + url + " -o " + filePath;
    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "File downloaded successfully" << "\n";
    }

    else {
        std::cout << "error\n";
    }
}

void luni() {
    std::string url = "https://github.com/Nomaakip/lb-rewrite/raw/refs/heads/main/1102(1).mp4";
    std::string filePath = "luni-intro.mp4";

    std::string command = "curl -L " + url + " -o " + filePath;
    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "File downloaded successfully" << "\n";
    }

    else {
        std::cout << "error\n";
    }
}
void gay() {
    std::string url = "https://raw.githubusercontent.com/5quirre1/lb-rewritegay/refs/heads/main/fat.png";
    std::string filePath = "fat.png";
     std::string command = "curl -L " + url + " -o " + filePath;
    int result = system(command.c_str());
    if (result == 0) {
        std::cout << "File downloaded successfully. You now have a picture of a fatass squirrel :3" << "\n";
    }
    else {
        std::cout << "THE SQUIRREL WAS TOO FAT, THE FILE DID NOT DOWNLOAD :SOB:";
    }
}
//
// MAIN CODE
//

void code() {
    //cls();
    std::cout << "Welcome to LB, also known as LigmaBalls." << "\n";
    std::cout << "For help, type help below." << "\n";

    std::string command;
    std::cout << "lb < ";
    std::getline(std::cin, command);

    if (command == "fs") {
        freakysay();
    }

    if (command == "help") {
        help();
        code();
    }

    if (command == "clear") {
        cls();
        code();
    }

    if (command == "freakybob") {
        freakybob();
        code();
    }

    if (command == "update") {
        update();
        code();
    }

    if (command == "greg") {
        greg();
        code();
    }

    if (command == "quarky") {
        quarky();
        code();
    }

    if (command == "thiscommanddoesnotexist") {
        thiscommanddoesnotexist();
        code();
    }

    if (command == "buttcalc") {
        buttcalc();
        code();
    }

    if (command == "dungeon") {
        dungeon();
        code();
    }

    if (command == "version") {
        version();
        code();
    }

    if (command == "luni moon") {
        luni();
        code();
    }
    if (command == "gay") {
        gay();
        code();
    }
}

int main() {
    code();
    return 0;
}

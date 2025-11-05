

// Day 3: File Explorer - File Manipulation (Copy, Move, Delete, Create)
// Author: Priyanka Priyadarsani Panigrahy

// File: file_explorer_day3.cpp
// Objective: Add directory creation and navigation.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int choice;
    string dirname;

    while (true) {
        cout << "\n=== FILE EXPLORER (Day 3) ===\n";
        cout << "1. List files\n";
        cout << "2. Create directory\n";
        cout << "3. Remove directory\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) system("dir");
        else if (choice == 2) {
            cout << "Enter directory name: ";
            cin >> dirname;
            string command = "mkdir " + dirname;
            system(command.c_str());
            cout << "Directory created.\n";
        }
        else if (choice == 3) {
            cout << "Enter directory name: ";
            cin >> dirname;
            string command = "rmdir /S /Q " + dirname;
            system(command.c_str());
            cout << "Directory removed if existed.\n";
        }
        else if (choice == 4) break;
        else cout << "Invalid choice!\n";
    }
    return 0;
}

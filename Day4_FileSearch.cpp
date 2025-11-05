

// Day 4: File Explorer - File Search
// Author: Priyanka Priyadarsani Panigrahy

// File: file_explorer_day4.cpp
// Objective: Add file renaming and copying functions.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int choice;
    string oldName, newName;

    while (true) {
        cout << "\n=== FILE EXPLORER (Day 4) ===\n";
        cout << "1. List files\n";
        cout << "2. Rename file\n";
        cout << "3. Copy file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) system("dir");
        else if (choice == 2) {
            cout << "Enter current file name: ";
            cin >> oldName;
            cout << "Enter new file name: ";
            cin >> newName;
            string command = "rename " + oldName + " " + newName;
            system(command.c_str());
            cout << "File renamed if existed.\n";
        }
        else if (choice == 3) {
            cout << "Enter source file name: ";
            cin >> oldName;
            cout << "Enter destination file name: ";
            cin >> newName;
            string command = "copy " + oldName + " " + newName;
            system(command.c_str());
            cout << "File copied if existed.\n";
        }
        else if (choice == 4) break;
        else cout << "Invalid choice!\n";
    }
    return 0;
}


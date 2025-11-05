

// Day 2: File Explorer - Directory Navigation
// Author: Priyanka Priyadarsani Panigrahy

// File: file_explorer_day2.cpp
// Objective: Add file creation and deletion features.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int choice;
    string filename;

    while (true) {
        cout << "\n=== FILE EXPLORER (Day 2) ===\n";
        cout << "1. List files\n";
        cout << "2. Create a file\n";
        cout << "3. Delete a file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) system("dir");
        else if (choice == 2) {
            cout << "Enter file name: ";
            cin >> filename;
            string command = "type nul > " + filename;
            system(command.c_str());
            cout << "File created.\n";
        }
        else if (choice == 3) {
            cout << "Enter file name: ";
            cin >> filename;
            string command = "del " + filename;
            system(command.c_str());
            cout << "File deleted if it existed.\n";
        }
        else if (choice == 4) break;
        else cout << "Invalid choice!\n";
    }
    return 0;
}

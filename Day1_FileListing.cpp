
// Day 1: File Explorer - List Files in a Directory
// Author: Priyanka Priyadarsani Panigrahy


// File: file_explorer_day1.cpp
// Objective: Basic menu-driven console app that lists files in the current directory using system commands.

#include <iostream>
#include <cstdlib> // for system()

using namespace std;

int main() {
    int choice;
    while (true) {
        cout << "\n=== FILE EXPLORER (Day 1) ===\n";
        cout << "1. List files in current directory\n";
        cout << "2. Show current directory path\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            system("dir"); // Windows command to list files
        } else if (choice == 2) {
            system("cd");  // Show current directory
        } else if (choice == 3) {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}

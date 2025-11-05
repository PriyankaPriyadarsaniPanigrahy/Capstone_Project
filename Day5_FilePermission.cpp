

// Day 5: File Explorer - File Permission Management
// Author: Priyanka Priyadarsani Panigrahy

// File: file_explorer_day5.cpp
// Objective: Combine all previous functions and add file viewing.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int choice;
    string filename, dirname;

    while (true) {
        cout << "\n=== FILE EXPLORER (Day 5) ===\n";
        cout << "1. List files\n";
        cout << "2. Create file\n";
        cout << "3. Delete file\n";
        cout << "4. Create directory\n";
        cout << "5. Delete directory\n";
        cout << "6. Rename file\n";
        cout << "7. Copy file\n";
        cout << "8. View file content\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) system("dir");
        else if (choice == 2) {
            cout << "Enter file name: ";
            cin >> filename;
            string cmd = "type nul > " + filename;
            system(cmd.c_str());
        }
        else if (choice == 3) {
            cout << "Enter file name: ";
            cin >> filename;
            string cmd = "del " + filename;
            system(cmd.c_str());
        }
        else if (choice == 4) {
            cout << "Enter directory name: ";
            cin >> dirname;
            string cmd = "mkdir " + dirname;
            system(cmd.c_str());
        }
        else if (choice == 5) {
            cout << "Enter directory name: ";
            cin >> dirname;
            string cmd = "rmdir /S /Q " + dirname;
            system(cmd.c_str());
        }
        else if (choice == 6) {
            string oldn, newn;
            cout << "Enter old file name: ";
            cin >> oldn;
            cout << "Enter new file name: ";
            cin >> newn;
            string cmd = "rename " + oldn + " " + newn;
            system(cmd.c_str());
        }
        else if (choice == 7) {
            string src, dest;
            cout << "Enter source: ";
            cin >> src;
            cout << "Enter destination: ";
            cin >> dest;
            string cmd = "copy " + src + " " + dest;
            system(cmd.c_str());
        }
        else if (choice == 8) {
            cout << "Enter file name: ";
            cin >> filename;
            string cmd = "type " + filename;
            system(cmd.c_str());
        }
        else if (choice == 9) break;
        else cout << "Invalid choice!\n";
    }
    return 0;
}

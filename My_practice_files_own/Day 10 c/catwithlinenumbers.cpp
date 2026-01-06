/*
Purpose : Implement a custom cat command with -n option
          to display file contents along with line numbers.
Author  : Harshinie M
Date    : 06-01-2026
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    // Step 1: Validate command line arguments
    if (argc != 3)
    {
        cout << "Usage: mycat -n <filename>" << endl;
        return 1;
    }

    // Step 2: Check for -n option
    if (strcmp(argv[1], "-n") != 0)
    {
        cout << "Invalid option! Use -n" << endl;
        return 1;
    }

    // Step 3: Open file in read mode
    ifstream fin(argv[2]);

    if (!fin)
    {
        cout << "Error: Cannot open file!" << endl;
        return 1;
    }

    // Step 4: Print file contents with line numbers
    char ch;
    int lineNo = 1;

    cout << lineNo << " ";

    while (fin.get(ch))
    {
        cout << ch;

        if (ch == '\n')
        {
            lineNo++;
            cout << lineNo << " ";
        }
    }

    // Step 5: Close file
    fin.close();

    return 0;
}


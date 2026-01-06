/*
Purpose : Implement a custom cat command to display
          file contents on the screen.
Author  : Harshinie M
Date    : 06-01-2026
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    // Step 1: Check command line arguments
    if (argc != 2)
    {
        cout << "Usage: mycat <filename>" << endl;
        return 1;
    }

    // Step 2: Open file in read mode
    ifstream fin(argv[1]);

    // Step 3: Check if file opened successfully
    if (!fin)
    {
        cout << "Error: Cannot open file!" << endl;
        return 1;
    }

    // Step 4: Read and display file contents
    char ch;
    while (fin.get(ch))
    {
        cout << ch;
    }

    // Step 5: Close the file
    fin.close();

    return 0;
}


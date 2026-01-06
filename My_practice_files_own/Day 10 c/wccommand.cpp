/*
Purpose : Implement a custom wc command to count
          lines, words and characters in a file.
Author  : Harshinie M
Date    : 06-01-2026
*/

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main(int argc, char *argv[])
{
    // Step 1: Validate command line arguments
    if (argc != 2)
    {
        cout << "Usage: wc <filename>" << endl;
        return 1;
    }

    // Step 2: Open file in read mode
    ifstream fin(argv[1]);

    if (!fin)
    {
        cout << "Error: Cannot open file!" << endl;
        return 1;
    }

    // Step 3: Initialize counters
    int lines = 0, words = 0, chars = 0;
    char ch;
    bool inWord = false;

    // Step 4: Read file character by character
    while (fin.get(ch))
    {
        chars++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Count words
        if (isspace(ch))
        {
            inWord = false;
        }
        else if (!inWord)
        {
            words++;
            inWord = true;
        }
    }

    // Step 5: Print result
    cout << lines << "  " << words << "  " << chars << " " << argv[1] << endl;

    // Step 6: Close file
    fin.close();

    return 0;
}


// Assignment 4.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

int linesize = 60;
const string title = "Welcome to my Letter Counting Program ";

int main(int argc, char* argv[])
{
    //sample code given to help get started
    if (argc < 2)
    {
        cout << "Error with input agrs.." << endl;
        return 1;
    }
    //this is for debugging
    for (int i = 0; i < argc; i++)
    {
        cout << i << ":" << argv[i] << endl;
    }
    ifstream inFile;

    inFile.open(argv[1]);
    
    if (!inFile)
    {
        cout << "Error with file name.." << endl;
        return 1;
    }


    //title
    cout << setw(linesize) << setfill('*') << '*' << endl;
    cout << setw((linesize - title.length()) / 2) << '*' << setfill(' ') << title << setfill('*') << setw((linesize - title.length()) / 2) << '*' << endl;
    cout << setw(linesize) << setfill('*') << '*' << endl;

    //print name of fill
    cout << "Analyzing file..." << argv[1] << '.' << endl;

    //declare variables and set all to 0 so that they are initalized
    int As = 0;
    int Es = 0;
    int Is = 0;
    int Os = 0;
    int Us = 0;
    int vowelcount = 0;

    //extra int for github
    int Bs = 0;
    int Cs = 0;
    int Ds = 0;

    //getting a string ready to put through the file so program can read the file
    string usa;
    
    
    //while function so the program goes through the entire file
    while (!inFile.eof())
    {
        inFile >> usa;
        for (int i = 0; i < usa.size(); i++)
        {
            
            //going through every letter in the file
            char cha = usa[i];
            //change all characters to uppercase so it is easier to read
            cha = toupper(cha);

            if (cha == 'A')
            {
                //++ after the int is an easier way to say int = int + 1  because everytime the while loops it will add 1 to the int if the letter is found in the file
                As++;
                vowelcount++;

            }
            //doing else if so program goes through all possible variables
            else if (cha == 'E')
            {
                Es++;
                vowelcount++;
            }
            else if (cha == 'I')
            {
                Is++;
                vowelcount++;
            }
            else if (cha == 'O')
            {
                Os++;
                vowelcount++;
            }
            else if (cha == 'U')
            {
                Us++;
                vowelcount++;
            }
            //extra int for github
            else if (cha == 'B')
            {
                Bs++;
                
            }
            else if (cha == 'C')
            {
                Cs++;
                
            }
            else if (cha == 'D')
            {
                Ds++;
                
            }
        }
    }
    //print the count of all letters to screen
    cout << left << setw(linesize) << setfill('.') << "The number of A's: " << As << endl;
    cout << left << setw(linesize) << setfill('.') << "The number of E's: " << Es << endl;
    cout << left << setw(linesize) << setfill('.') << "The number of I's: " << Is << endl;
    cout << left << setw(linesize) << setfill('.') << "The number of O's: " << Os << endl;
    cout << left << setw(linesize) << setfill('.') << "The number of U's: " << Us << endl;
    cout << left << setw(linesize) << setfill('.') << "The vowels count is: " << vowelcount << endl;

    //extra outpout
    cout << left << setw(linesize) << setfill('.') << "The number of B's: " << Bs << endl;
    cout << left << setw(linesize) << setfill('.') << "The number of C's: " << Cs << endl;
    cout << left << setw(linesize) << setfill('.') << "The number of D's: " << Ds << endl;

    return 0;
}



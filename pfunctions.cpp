// File: pfunctions.cpp
#include <iostream>
#include <string> 
using namespace std;

#include "pheaders.h"

// DEFINE THE 2 FUNCTIONS PER THE pheaders.h FILE HERE
// Add Pre- and Post-Condition comments

bool isPalindrome(string s) {
    // This MUST be written as a RECURSIVE FUNCTION! (or you get no lab credit)
    //pre-conditions: recieves a clean string variable of only lowercase alphabet characters
    //post-conditions: returns true if entered string is palindrome false if not
    int size = s.size();
    if(size <=2) //base case if string has only one or two characters left
    {
        if(size == 2)
        {
            if(s[1] != s[0])
                return false;
        }
        return true; //if only 1 char left then is palindrome if 2 left then will return true if did not return false earlier
    }
    //recursive case (string s is a palindrome if first and last characters of s are the same and the rest of string is a palindrome)
    if(s[0] != s[size - 1])
        return false;
    s = s.substr(1, size - 2); //removes two outer chars
    if(isPalindrome(s))
        return true;
    return false; //if recursive check fails (not palindrome)
}

void cleanUp(string &s) { 
    
    //pre-conditions: recieves a string input of a single word called by reference
    //post-conditions: alters the string so it only contains lowercase alphabetical characters
    int size = s.size();
    string temp = "";
    
    for(int i = 0; i < size; i++)
    {
        if(s[i] == 'a')
            temp += 'a';
        else if(s[i] == 'A')
            temp += 'a';
        else if(s[i] == 'b')
            temp += 'b';
        else if(s[i] == 'B')
            temp += 'b';
        else if(s[i] == 'c')
            temp += 'c';
        else if(s[i] == 'C')
            temp += 'c';
        else if(s[i] == 'd')
            temp += 'd';
        else if(s[i] == 'D')
            temp += 'd';
        else if(s[i] == 'e')
            temp += 'e';
        else if(s[i] == 'E')
            temp += 'e';
        else if(s[i] == 'f')
            temp += 'f';
        else if(s[i] == 'F')
            temp += 'f';
        else if(s[i] == 'g')
            temp += 'g';
        else if(s[i] == 'G')
            temp += 'g';
        else if(s[i] == 'h')
            temp += 'h';
        else if(s[i] == 'H')
            temp += 'h';
        else if(s[i] == 'i')
            temp += 'i';
        else if(s[i] == 'I')
            temp += 'i';
        else if(s[i] == 'j')
            temp += 'j';
        else if(s[i] == 'J')
            temp += 'j';
        else if(s[i] == 'k')
            temp += 'k';
        else if(s[i] == 'K')
            temp += 'k';
        else if(s[i] == 'l')
            temp += 'l';
        else if(s[i] == 'L')
            temp += 'l';
        else if(s[i] == 'm')
            temp += 'm';
        else if(s[i] == 'M')
            temp += 'm';
        else if(s[i] == 'n')
            temp += 'n';
        else if(s[i] == 'N')
            temp += 'n';
        else if(s[i] == 'o')
            temp += 'o';
        else if(s[i] == 'O')
            temp += 'o';
        else if(s[i] == 'p')
            temp += 'p';
        else if(s[i] == 'P')
            temp += 'p';
        else if(s[i] == 'q')
            temp += 'q';
        else if(s[i] == 'Q')
            temp += 'q';
        else if(s[i] == 'r')
            temp += 'r';
        else if(s[i] == 'R')
            temp += 'r';
        else if(s[i] == 's')
            temp += 's';
        else if(s[i] == 'S')
            temp += 's';
        else if(s[i] == 't')
            temp += 't';
        else if(s[i] == 'T')
            temp += 't';
        else if(s[i] == 'u')
            temp += 'u';
        else if(s[i] == 'U')
            temp += 'u';
        else if(s[i] == 'v')
            temp += 'v';
        else if(s[i] == 'V')
            temp += 'v';
        else if(s[i] == 'w')
            temp += 'w';
        else if(s[i] == 'W')
            temp += 'w';
        else if(s[i] == 'x')
            temp += 'x';
        else if(s[i] == 'X')
            temp += 'x';
        else if(s[i] == 'y')
            temp += 'y';
        else if(s[i] == 'Y')
            temp += 'y';
        else if(s[i] == 'z')
            temp += 'z';
        else if(s[i] == 'Z')
            temp += 'z';
    }
    s = temp;
    return; 
}

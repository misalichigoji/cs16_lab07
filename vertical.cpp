/* Skeleton file for vertical.cpp
 * For use in CS16
 * (c) 2024 by Z.Matni
 */
// Do not add any other #include statement!
#include <iostream>
using namespace std;

// Declare printV() here
void printV(long int number);

int main() {
    long int user_num;
    // 1. Get user input
    // 2. Check input and pass it on to printV()
    cout << "Enter integer: ";
    cin >> user_num;
    
    if(user_num < 0) //if negative number entered
    {
        cerr << "Input must be a positive integer.";
        exit(1);
    }

    printV(user_num);
    return 0;
}

// Define printV() here
void printV(long int number)
{
    //pre-conditions: takes in a positive long integer number
    //post-conditions: prints out the entire number from the most significant to least significant digits each separated by a newline
    if(number < 10) //base case if number is 1 digit
    {
        cout << number;
        return;
    }
    else
    {
        //recursive case if number has more than 1 digit
        int temp(number), count(0);

        while(temp > 9) //loops until there is only 1 digit left
        {
            temp /= 10; //integer division effectively gets rid of least significant digit
            count++;
        }
        cout << temp << endl;
        for(int i = 0; i < count; i++) //loop brings temp which is the same digit as the most significant digit of number to be the same magnitude as the most significant digit of number
        {
            temp *= 10;
        }
        printV(number - temp);
    }
}


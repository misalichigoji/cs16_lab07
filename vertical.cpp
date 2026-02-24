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
    if(number < 10) //base case is 1 digit
    {
        cout << number << endl;
        return;
    }
    //recursive case
    int temp;

    temp = number % 10; //assigns temp to least significant digit
    number /= 10; //integer division effectively removes least significant digit
    
    printV(number);
    cout << temp << endl;
}

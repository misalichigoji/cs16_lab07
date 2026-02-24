/* Main function for selectionSort.cpp
 * For use in CS 16
 * (c) 2024 by Z.Matni
 */
#include <iostream> // for cout, cin, endl
#include <fstream>  // for ifstream
#include <string>   // for string
#include <cstdlib>  // for exit
using namespace std;
#include "sheaders.h"
#include "sfunctions.cpp"
int main() {
    // 1. Get filename from user and check it
    // 2. Get size of file to then create dynamic array
    //      Note: You HAVE to use the functions:
    //      getFileSize() and getArray() here
    // 3. Print original array (see PDF lab description for details)
    // 4. Ask user for ascending or descending sort
    // 5. Run selection sort on the array
    //      Note: You HAVE to use the function sort() here
    // 6. Print sorted array (see PDF lab description for details)
    string user_filename;
    ifstream filed;
    int size, choice;
    bool desc;
    int *darr = nullptr;
    cout << "Enter filename: ";
    cin >> user_filename;

    size = getFileSize(filed, user_filename);
    darr = new int[size];
    getArray(filed, user_filename, darr, size);

    cout << "Original array:" << endl;
    for(int i = 0; i > size - 1; i++)
    {
        cout << darr[i] << " ";
    }
    cout << darr[size - 1] << endl; //assures no extra space after last element in array
    
    cout << "Ascending (0) or Descending (1): ";
    cin >> choice;
    if(choice == 0)
        desc = false;
    else if(choice == 1)
        desc = true;

    cout << "Sorted array:" << endl;
    sort(desc, darr, size, 0);
    return 0;
}

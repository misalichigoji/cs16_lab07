// File: sfunctions.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

#include "sheaders.h"

// DEFINE ALL 5 FUNCTIONS PER THE sheaders.h FILE HERE
// Add Pre- and Post-Condition comments

void swap_values(int& v1, int& v2)
{
    //pre-conditions: takes in two integer variables passed by reference
    //post-conditions: swaps the values of the two integer variables
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
    return;
}

int find_index_of_swap(bool desc, int a[], int start_index, int number_used)
{
    //pre-conditions: recieves a boolean value corresoponding to if sorting will be done asceding or descending, an integer array, an integer corresponding to what index to start comparing, an integer indicating how much of the array needs to be observed
    //post-conditions: returns the index of the value in the array that needs to be swapped
    int greatest, index(start_index);

    greatest = a[start_index];
    if(desc)
    {
        for(int i = start_index + 1; i < number_used; i++)
        {
            if(greatest < a[i])
            {
                greatest = a[i];
                index = i;
            }
        }
    }
    else
    {
        for(int i = start_index + 1; i < number_used; i++)
        {
            if(greatest > a[i])
            {
                greatest = a[i];
                index = i;
            }
        }
    }
    return index;
}

void sort(bool desc, int a[], int number_used, int index)
{
    //pre-conditions: takes in a boolean value corresponding to if the array will be sorted in ascedning or descending order, an integer array, an integer corresponding to which index to start comparing, an integer indicating how much of the array needs to be observed
    //post_conditions: sorts a dynamic array in ascending or descending order
    int swappy;

    //base and recursive case (because they share the same first chunk of code, recursive splits off laterr)
    swappy = find_index_of_swap(desc, a, index + 1, number_used - 1);
    swap_values(a[index + 1], a[swappy]);

    //only recursive case
    if(number_used != 1)
    {
        number_used--;
        index++;
        sort(desc, a, number_used, index);
    }
}

int getFileSize(ifstream& inf, string fname)
{
    //pre-conditions: gets an ifstream object passed by reference and a string filename
    //post-conditions: returns the number of (integer) elements in the file
    inf.open(fname);
    int count(0), next;
    while(inf >> next)
        count++;
    inf.close();
    return count;
}

void getArray(ifstream& in, string fname, int arr[], int size)
{
    //pre-conditons: recieves an ifstream object passed by refrence, a string filename, a dynamic integer array and an integer of its size
    //post-conditions: transfers integer values read from the external file to inside the dynamic integer array
    in.open(fname);
    int index(0), next;

    while(in >> next)
    {
        arr[index] = next;
        index++;
    }

    in.close();
    return;
}

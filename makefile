all: vertical palindrome selectionSort

vertical: vertical.cpp 
	g++ vertical.cpp -o vertical -std=c++17 -Wall

palindrome: palindrome.cpp pheaders.h pfunctions.cpp
	g++ palindrome.cpp -o palindrome -std=c++17 -Wall

selectionSort: selectionSort.cpp sheaders.h sfunctions.cpp
	g++ selectionSort.cpp -o selectionSort -std=c++17 -Wall

clean:
	rm *.o vertical palindrome selectionSort

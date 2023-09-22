// extractAndAddNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>

using namespace std;


int main()
{
    double num[100];
    double sum = 0;
    string sentence;
    int initialPosition = 0;
    int endPosition = 0;
    int digitLength = 0;
    int charCounter = 0;
    int i = 0;

    cout << "Input a sentence..." << endl;
    getline(cin, sentence);

    cout << endl;

    int length = sentence.length();

    while (charCounter < length)
    {

        char ch = sentence[charCounter]; // reads each individual character

        if (isdigit(ch)) // if current character is a digit
        {

            initialPosition = charCounter;
            charCounter++;

            while (charCounter < length && (isdigit(sentence[charCounter]) || sentence[charCounter] == '.')) // reads each character, ending when it's no longer a number
            {
                charCounter++; // increments position until the end of the current number
            }

            endPosition = charCounter; // finds the position of the last digit in the integer
            digitLength = (endPosition - initialPosition); // calculates digit length

            string numbers = sentence.substr(initialPosition, digitLength); // returns the integers as a string
            num[i] = stod(numbers); // turns the above string into an integer data type
            sum += num[i]; // adds all of the integers together
            i++;

            initialPosition = 0;
            endPosition = 0;

        }

        else
        {
            charCounter++; // increments the character count
        }
    
    }

    cout << fixed << setprecision(1);
  
    cout << "The sum is: " << sum;
    cout << endl << endl;
    system("PAUSE");

}


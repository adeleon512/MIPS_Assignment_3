/*
 * MIPS_Assigment_3.cpp
 *
 *  Created on: Oct 13, 2014
 *      Author: Adam C. De Leon
 *      Description: This program creates a static array with initialized
 *      values. The program then asks the user to enter 1 to find the minimum
 *      value in the array or 2 for the maximum value in the array. If the
 *      user does not enter either 1 or 2 then the program prompts the user
 *      to enter 1 or 2 again. Once the user enters a valid input the program
 *      executes the command and then terminates.
 */
#include <iostream>

using namespace std;

int main() {
    int Array[10] = {9, 8, 22, 48, 31, 21, 28, 29, 88, 12}; //initialization
    int input;                    //variable for user input
    int min;                    //variable for minimum value stored in array
    int max;                    //variable for maximum value stored in array
    int min_index;
    int max_index;

    do {
        cout << "Please enter either 1 for min or 2 for max." << endl;
        cin >> input;
    } while (input != 1 && input != 2);

    //command for valid input.
    if (input == 1) {
        min_index = 0;
        min = Array[0];
        for (int i = 1; i <= 9; i++) {
            if (Array[i] < min) {
                min = Array[i];
                min_index = i;
            }
        }
        cout << "the minimum value is: " << min << endl;
        cout << "the index is: " << min_index;
    } else if (input == 2) {
        max_index = 0;
        max = Array[0];
        for (int i = 1; i <= 9; i++) {
            if (Array[i] > max) {
                max = Array[i];
            }
        }
        cout << "the max is: " << max;
    }

    return 0;
}





/************************************
 * Title: Roman_to_Arabic Main Function
 * Author: Mark Piccirilli
 * Date: 10/28/15
 * Description: This is the main function the takes user input and then 
 * runs the roman to arabic function.
 * ****************************************/

#include "Roman_to_Arabic.hpp"

int main() {

	string roman_numeral; //string for user input

	//collect user input
	cout << "Enter a Roman Numeral: ";
	cin >> roman_numeral;

	//run roman_to_Arabic fuction
	int arabic = Roman_to_Arabic(roman_numeral);

	if(arabic == -1)
		return -1;

	cout << "Arabic value: ";
	cout << arabic << endl;

	return 0;
}//end main


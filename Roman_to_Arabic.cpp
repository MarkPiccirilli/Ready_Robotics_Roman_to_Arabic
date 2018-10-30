/*************************
 * Title: Roman Numerals to Arabic Numerals
 * Author: Mark Piccirilli
 * Date: 10/20/2018
 * Description: This program is part of the Ready Robotics Questionniar.  It 
 * takes a Roman Numeral as input and converts it to an Arabic numeral. This
 * file contains the function implamentation.
 * ***********************************/

#include "Roman_to_Arabic.hpp"

int Roman_to_Arabic(string roman_numeral) {

	bool error = false;


	//check that the input is a roman numeral
	for(int i=0; i<roman_numeral.length(); i++) {
		//check that all characters in input belong in a roman numeral
		if(roman_numeral.at(i) != 'I' &&
		   roman_numeral.at(i) != 'V' &&
		   roman_numeral.at(i) != 'X' &&
		   roman_numeral.at(i) != 'L' &&
		   roman_numeral.at(i) != 'C' &&
		   roman_numeral.at(i) != 'D' &&
		   roman_numeral.at(i) != 'M') {
			cout << "error at location ";
			cout << i;
			cout << " in input string, invalid character" << endl;
			error = true;
		}
		//V, L and D cannot be repeated
		//if you have a one character string you are ok
		if(roman_numeral.length() != 1) {
			//start of string
			if(i == 0) {
				//check V
				if(roman_numeral.at(i) == 'V' && 
				   roman_numeral.at(i+1) == 'V') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, cannot repeat V, L, or D" << endl;
					error = true;
				}
				//check L
				if(roman_numeral.at(i) == 'L' && 
				   roman_numeral.at(i+1) == 'L') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, cannot repeat V, L, or D" << endl;
					error = true;
				}
				//check D
				if(roman_numeral.at(i) == 'D' && 
				   roman_numeral.at(i+1) == 'D') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, cannot repeat V, L, or D" << endl;
					error = true;
				}
			}//ends if(i=0)
			//end of string
			else if (i == roman_numeral.length() - 1) {
				//check V
				if(roman_numeral.at(i) == 'V' && 
				   roman_numeral.at(i-1) == 'V') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, cannot repeat V, L, or D" << endl;
					error = true;
				}
				//check L
				if(roman_numeral.at(i) == 'L' && 
				   roman_numeral.at(i-1) == 'L') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, cannot repeat V, L, or D" << endl;
					error = true;
				}
				//check D
				if(roman_numeral.at(i) == 'D' && 
				   roman_numeral.at(i-1) == 'D') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, cannot repeat V, L, or D" << endl;
					error = true;
				}

			}//end else if
			//middle of string
			else {
				//check V
				if(roman_numeral.at(i) == 'V' && 
				   (roman_numeral.at(i+1) == 'V' ||
				   roman_numeral.at(i-1) == 'V')) {
					cout << "error at location ";
					cout << i;
					cout << " in input string, cannot repeat V, L, or D" << endl;
					error = true;
				}
				//check L
				if(roman_numeral.at(i) == 'L' && 
				   (roman_numeral.at(i+1) == 'L' ||
				   roman_numeral.at(i-1) == 'L')) {
					cout << "error at location ";
					cout << i;
					cout << " in input string, cannot repeat V, L, or D" << endl;
					error = true;
				}
				//check D
				if(roman_numeral.at(i) == 'D' && 
				   (roman_numeral.at(i+1) == 'D' ||
				   roman_numeral.at(i-1) == 'D')) {
					cout << "error at location ";
					cout << i;
					cout << " in input string, cannot repeat V, L, or D" << endl;
					error = true;
				}
			} //end else
		} //end if(roman_numeral.length() != 1)

		//Test for illigal subraction combonations
		//if not at the end of the string
		if(i < roman_numeral.length() - 1) {
			//check character I
			if(roman_numeral.at(i) == 'I') {
				if(roman_numeral.at(i+1) == 'L' ||
				   roman_numeral.at(i+1) == 'C' ||
				   roman_numeral.at(i+1) == 'D' ||
				   roman_numeral.at(i+1) == 'M') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, illegal subtraction combanation" << endl;
					error = true;
				}
				else if(roman_numeral.at(i+1) == 'I' && roman_numeral.length() > i + 2) {
					if(roman_numeral.at(i+2) != 'I') {
						cout << "error at location ";
						cout << i + 2;
						cout << " in input string, illegal value after subtraction" << endl;
						error = true;
					}
				}
			}
			//check character V
			if(roman_numeral.at(i) == 'V') {
				if(roman_numeral.at(i+1) == 'X' ||
				   roman_numeral.at(i+1) == 'L' ||
				   roman_numeral.at(i+1) == 'C' ||
				   roman_numeral.at(i+1) == 'D' ||
				   roman_numeral.at(i+1) == 'M') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, illegal subtraction combanation" << endl;
					error = true;
				}
			}	
			//check character X
			if(roman_numeral.at(i) == 'X') {
				if(roman_numeral.at(i+1) == 'D' ||
				   roman_numeral.at(i+1) == 'M') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, illegal subtraction combanation" << endl;
					error = true;
				}
				else if(roman_numeral.length() > i + 2) {
					if(roman_numeral.at(i+2) != 'V' &&
					   roman_numeral.at(i+2) != 'I' &&
					   roman_numeral.at(i+2) != 'X') {
						cout << "error at location ";
						cout << i + 2;
						cout << " in input string, illegal value after subtraction" << endl;
						error = true;
					}
				}
			}
			//check character L
			if(roman_numeral.at(i) == 'L') {
				if(roman_numeral.at(i+1) == 'C' ||
				   roman_numeral.at(i+1) == 'D' ||
				   roman_numeral.at(i+1) == 'M') {
					cout << "error at location ";
					cout << i;
					cout << " in input string, illegal subtraction combanation" << endl;
					error = true;
				}
			}
			//check character D
			if(roman_numeral.at(i) == 'D') {
				if(roman_numeral.at(i+1) == 'M') { 
					cout << "error at location ";
					cout << i;
					cout << " in input string, illegal subtraction combanation" << endl;
					error = true;
				}
			}
			//charcter C can be followed by any leagle character, but the character after next must not be C 
			//unless the next character is C
			if(roman_numeral.at(i) == 'C') {
				if(roman_numeral.length() > i + 2) {
					if(roman_numeral.at(i+2) == 'C') {
						if(roman_numeral.at(i+1) == 'D' || roman_numeral.at(i+1) == 'M') {
							cout << "error at location ";
							cout << i + 2;
							cout << " in input string, illegal value after subtraction" << endl;
							error = true;
						}
					}
				}
			}
			//character M can be followed by any other legal character
		} //end if(i < string.length() - 1) { 	
	}//end for loop

	//if there were error(s) then exit
	if(error == true) {
		return -1;
	}

	//calculate the arabic value
	int arabic = 0; //integer value for the arabic number

	for(int i=0; i<roman_numeral.length(); i++) {
		char current = roman_numeral.at(i); //select the current character for the iteration
		//if last character in string simply add
		if(i == roman_numeral.length() - 1) {
			if(current == 'I') {
				arabic = arabic + 1;
			}
			else if(current == 'V') {
				arabic = arabic + 5;
			}
			else if(current == 'X') {
				arabic = arabic + 10;
			}
			else if(current == 'L') {
				arabic = arabic + 50;
			}
			else if(current == 'C') {
				arabic = arabic + 100;
			}
			else if(current == 'D') {
				arabic = arabic + 500;
			}
			else if(current == 'M') {
				arabic = arabic + 1000;
			}
		}//end if(i==0 || i=roman_numeral.length())

		//if not last character adjust arabic appropriately
		else {
			if(current == 'I') {
				//if I, then look forward to see if subtraction must occur
				if(roman_numeral.at(i+1) == 'V' || roman_numeral.at(i+1) == 'X') {
					arabic = arabic - 1;
				}
				else {
					arabic = arabic + 1;
				}
			}
			else if(current == 'V') {
				//V cannot be subtracted from its next value
				arabic = arabic + 5;
			}
			else if(current == 'X') {
				//if X, then look forward to see if subtraction must occur
				if(roman_numeral.at(i+1) == 'L' || roman_numeral.at(i+1) == 'C') {
					arabic = arabic - 10;
				}
				else {
					arabic = arabic + 10;
				}

			}
			else if(current == 'L') {
				//L cannot be subtracted from its next value
				arabic = arabic + 50;
			}
			else if(current == 'C') {
				//if C, then look forward to see if subtraction must occur
				if(roman_numeral.at(i+1) == 'D' || roman_numeral.at(i+1) == 'M') {
					arabic = arabic - 100;
				}
				else {
					arabic = arabic + 100;
				}
			}
			else if(current == 'D') {
				//D cannot be subtracted from its next value
				arabic = arabic + 500;
			}
			else if(current == 'M') {
				//M cannot be subtracted from its next value
				arabic = arabic + 1000;
			}
		}//end else 
	}//end for loop calculation

	return arabic;
}//end function

#include "Homwork2.h"
#include <iostream>
using namespace std;

Homwork2::Homwork2()
{}

Homwork2::~Homwork2()
{}


int main() {
	char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','z' };
	int counter[26];
	
	for (int c = 0; c < 26;c++) {			//the counter goes through the for loop and sets the counters to 0	
		counter[c] = 0;
	}
	
	cout << "Letter Counter:\n";
	char letter;
	cin >> letter;	

	while (isalpha(letter)) {
		letter = tolower(letter);			//tolower to read the Upercase letter the same as the lowercase letter

		for (int c = 0;c < 26;c++) {
			if (letter == letters[c]) {		//goes through the letters array to get the characters
				counter[c]++;
			}
		}
		cin >> letter;
	}

	for (int c = 0;c < 26;c++) {			//if the letter counter does not equal 0, it will output the counter
		if (counter[c] != 0) {
			cout << letters[c] << "=" << counter[c] << endl;
		}
	}
 	return 0;
}
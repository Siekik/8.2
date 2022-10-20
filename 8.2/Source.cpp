#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {
	string str;

	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "q") {
			break;
		}
		cout << "Vowel count: " << countVowel(str) << endl;
	}
}
int countVowel(string str) {
	int letter;
	int vowels = 0;

	for (int letter = 0; letter < str.size(); ++letter) {
		switch (str[letter]) {
		default: {
			break;
		}
		case('a'): {
			vowels++;
			break;
		}
		case('A'): {
			vowels++;
			break;
		}
		case('e'): {
			vowels++;
			break;
		}
		case('E'): {
			vowels++;
			break;
		}
		case('I'): {
			vowels++;
			break;
		}
		case('i'): {
			vowels++;
			break;
		}
		case('o'): {
			vowels++;
			break;
		}
		case('O'): {
			vowels++;
			break;
		}
		case('u'): {
			vowels++;
			break;
		}
		case('U'): {
			vowels++;
			break;
		}
		}
	}
	int total = vowels;
	return total;
}

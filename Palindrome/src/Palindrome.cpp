//============================================================================
// Name        : Palindrome.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string sWord;

int Palindrome(string sWord){
	int k = 0;
	bool palindrom;
	for(int i=sWord.size()-1; i>0; i--){
		if(sWord[i] == sWord[k]){
			palindrom = true;
		}
		else{
			palindrom = false;
			break;
		}
		//cout << i << endl;
		k++;
	}

return palindrom;

}

int main() {
		cout << "Palindrome: Bitte Wort eingeben" << endl;
		cin >> sWord;
		while(cin.fail())
		{
			cout << "Falscheingabe: Bitte ein Wort eingeben" << endl;
			cin.clear();
			cin.ignore(1000,'\n');
			cin >> sWord;
		}

		bool test = Palindrome(sWord);

		if (test==1){
			cout << "Es ist ein Palindrom" << endl;
		}
		else
		{
			cout << "Es ist KEIN Palindrom" << endl;
		}

		return 0;

}


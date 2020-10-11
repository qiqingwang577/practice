//============================================================================
// Name        : Buchstaben_und_Woerter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string sWord;
string Tauschen(string sWord){
	int n=sWord.size();
	int index=n-1;
	for (int i=1;i<index-1;i=i+2)
	{
		char ch=sWord[i];
		sWord[i]=sWord[i+1];
		sWord[i+1]=ch;
	}
return sWord;
}

string Vokaleentfernung(string sWord){
	string sWordOhneVokale="";
	for (unsigned int i =0;i<sWord.size();i++)
	{
		char ch=sWord[i];
		if (ch!='a' && ch!='e'&& ch!='i'&& ch!='o'&& ch!='u')
		{
			sWordOhneVokale+=ch;
		}

	}
    return sWordOhneVokale;
}

int main() {

		cout << "Buchstaben und Woerter: Bitte ein Wort eingeben" << endl;
		cin >> sWord;
		while(cin.fail())
			{
				cout << "Falscheingabe: Bitte ein Wort eingeben" << endl;
				cin.clear();
				cin.ignore(1000,'\n');
				cin>>sWord;
			}
		string sWordNachtauschen=Tauschen(sWord);
		string sWordOhnevokale=Vokaleentfernung(sWord);
		cout << "Buchstaben und Woerter: Worter nach Umtauschen" << endl;
		cout << sWordNachtauschen << endl;
		cout << "Buchstaben und Woerter: Worter ohne Vokale" << endl;
		cout << sWordOhnevokale << endl;

		return 0;
}

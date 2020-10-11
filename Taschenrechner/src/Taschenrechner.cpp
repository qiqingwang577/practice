//============================================================================
// Name        : Taschenrechner.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
  float fNumber1;
  float fNumber2;
  float fResult;
  char chOperator;

  // Eingabe von erste Zahl
  cout << "Taschenrechner: Bitte erste Zahl eingeben:" << endl;
  cin >> fNumber1;

  while(cin.fail()){                          //Gehe in Schleife solange Failbit gesetzt
	cout << "Falscheingabe: Bitte erste Zahl eingeben:" << endl;
	cin.clear();                              //Setze Failbit zurück
	cin.ignore(1000,'\n');                    //Verwerfe bisherige Eingabe bis zu einem Zeilenumbruch
	cin >> fNumber1;                          //Versuche Zuweisung erneut
  }

  cout << "Taschenrechner: Bitte Operator eingeben:" << endl;
  cin >> chOperator;

  while(chOperator!= '-' && chOperator!= '+' && chOperator!= '*' && chOperator !='/'){
	cout << "Falscheingabe: Bitte Operator eingeben:" << endl;
	cin.clear();
	cin.ignore(1000,'\n');
	cin >> chOperator;
  }

  // Eingabe von zweite Zahl
  cout << "Taschenrechner: Bitte zweite Zahl eingeben:" << endl;
  cin >> fNumber2;

  while(cin.fail()){
	cout << "Falscheingabe: Bitte zweite Zahl eingeben:" << endl;
	cin.clear();
	cin.ignore(1000,'\n');
	cin >> fNumber2;
  }

  switch(chOperator){
	case '+':
		fResult = fNumber1 + fNumber2;
		break;
	case '-':
		fResult = fNumber1 - fNumber2;
		break;
	case '*':
		fResult = fNumber1 * fNumber2;
		break;
	default:
		fResult = fNumber1 / fNumber2;
		//break; Falls es noch weitere Cases nach dem Default gibt, muss hier Break hinzufuegen.
  }

  cout << fResult << endl;
  return 0;
}

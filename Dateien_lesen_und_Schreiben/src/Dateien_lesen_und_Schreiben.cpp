//============================================================================
// Name        : Dateien_lesen_und_Schreiben.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>                  //fuer getline() Funktion auch Datentyp
#include <iostream>
#include <fstream>
using namespace std;

int read_file(string Dateiname){
	ifstream file;                 //ifstream fuer Lesen
	string Ausgabe;
	file.open(Dateiname);          //Oeffnen einer Datei
	while(!file.eof()){            //Gibt an, ob das Ende der Datei erreicht wurde
		getline(file,Ausgabe);     //gesamte Zeile aus dem Filestream zu kopieren
		cout << Ausgabe << endl;   //zeilenweise ausdrucken
	}
	file.close();
	return 0;
}

int write_file(string Dateiname){
	ofstream file;
	string Eingabe;
	file.open(Dateiname); //Neuer Text wird am Ende der bestehenden Datei angehaengt
	cout << "Bitte Inhalten eingeben, oder/und mit dem Wort exit zum Enden eingeben:" << endl;
	getline(cin,Eingabe);          //Ziel fuer keinen Leerzeile zwischen Text und Eingabe

	/*normalerweise:
	 getline();
	 file << Eingabe << endl;  sollen im Paar auftreten.
	 Aber hier soll das Eingeben in while-Schleife mit Schluesswort "exit" beendet.
	 Damit wird das Wort "exit" nicht im Text gespeichert.
	*/
	while(Eingabe != "exit"){
		file << Eingabe << endl;   //Eingabe speichern
		getline(cin,Eingabe);
	    if(Eingabe == "exit"){
			file.close();
		}
	}

return 0;
}

int main(){
	read_file("Testdatei.txt");
	write_file("Testdatei.txt");
	read_file("Testdatei.txt");
	return 0;
}

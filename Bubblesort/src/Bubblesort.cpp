//============================================================================
// Name        : Bubblesort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


void Bubblesort(int iarray[], int laenge){
	for(int i=0; i<laenge-1; i++){
		for(int j=i+1; j<laenge; j++){
			if (iarray[i]>iarray[j]){
				int temp=iarray[i];
				iarray[i]=iarray[j];
	            iarray[j]=temp;
			}
		}
	}
}

int main(){
	srand(time(nullptr));
	int iArray[32];
	for (int i=0;i<32;i++){
		iArray[i] = rand()%101+0;
	}

	cout<<"Array vor Bubblesort:"<<endl;
	for(int i=0;i<32;i++){
		cout<<iArray[i]<<",";
	}

	Bubblesort(iArray,32);
	cout<<endl;

	cout<<"Array nach Bubblesort:"<<endl;
	for(int i=0;i<32;i++){
		cout<<iArray[i]<<",";
	}
    return 0;
}

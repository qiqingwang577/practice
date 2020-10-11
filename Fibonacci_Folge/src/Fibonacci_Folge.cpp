//============================================================================
// Name        : Fibonacci_Folge.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int n;
int fibonacci(int n){
	//fuer Fibonacci Folge ist die erste Glied NULL
	if(n == 0){
		return 0;
	}
	else if (n <= 2){
		return 1;

	}
	else{
		return fibonacci(n-2) + fibonacci(n-1);
	}
}

int main(){
	cout << "Die ersten 15 Glieder der Fibonacci-Folge ist:" << endl;
	for(int i = 0; i < 15; i++){
		cout << fibonacci(i) << " ";
	}
	return 0;
}

#include <iostream>

using namespace std;

int  main(){
	double kontostand;
	int bzuma;
	cin >> bzuma >> kontostand;
	if (bzuma % 5 == 0 && kontostand >= 5.5 && bzuma <= (kontostand - 0.5)){
		kontostand -= (bzuma + 0.5);
	}
	cout << kontostand;
}
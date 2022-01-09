#include <iostream>
using namespace std;

int main(){
	int len;
	int num1[len];
	int num2[len];
	cin >> len;
	for (int i = 0; i < len; i++){
		cin >> num1[i] >> num2[i]
	}

	for (int i = 0; i < len; i++){
		cout << (num1[i] + num2[i]) << endl;
	}

}
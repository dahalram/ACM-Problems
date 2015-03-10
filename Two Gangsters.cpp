/*
The answer basically lies in sybtracting one from each person's total available shots and then printing it in the opposite order
*/

#include <iostream>

using namespace std;

int main(){
	int a, b;

	//Take two integers from the input
	cin >> a >> b;

	//Print the number that each player misses
	cout << b-1 << " ";
	cout << a-1;
	return 0;
}

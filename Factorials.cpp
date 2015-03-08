//Problem number 1083

#include <iostream>
#include <string>

using namespace std;

long factorial(long n, long k);

int main(){
	int n;
	string countK;
	cin >> n;
	cin >> countK;

	int len = countK.length();
	cout << len;
	cout << n* factorial(n, len);

}

long factorial(long n, long k){
	int a = n - k;
	if (a <= 0){
		return 1;
	}
	return a* factorial(a,k);
}

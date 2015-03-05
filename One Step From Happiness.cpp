#include <iostream>

using namespace std;

bool checker(int n);

int main(){
	int n;
	cin >> n;

	if (checker(n+1) || checker(n-1)){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}

bool checker(int n){
	int a, b = 0;
	
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < 6; i++){
		a = n % 10;
		n = n /10;
		b++;
		if (b <= 3){
			sum1 = sum1+ a;

		}
		else{
			sum2 = sum2 + a;
		}
	}

	return sum1 == sum2;
}

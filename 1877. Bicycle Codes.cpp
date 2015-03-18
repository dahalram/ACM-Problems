#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	char a[5], b[5];

	cin >> a >> b;

	int r, s;

	r = atoi(a);
	s = atoi(b);

	if ((r%2 == 0) || (s%2 == 1)){
		cout <<"yes";
	}
	else{
		cout << "no";
	}

	return 0;


}

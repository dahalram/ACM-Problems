//Problem number 1385

//The following implementation is correct. However the timus judge will give time limit exceeded error on test #4.
//I will try to figure out time complexity and post the solution later.

//The hack-y way of solving this problem is below.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;

	int first, second;
	int counter = 0;

	for (int i = pow(10, 2*n -1) + 1; i < pow(10, 2*n); i++){
		first = i /((pow(10, n)));
		int b = pow(10,n);

		second = i % b;

		if (((i % first) == 0) && (second != 0) &&(i % second) == 0){
			counter++;
		}
	}
	cout << counter;
	return 0;
}

//The hack-y way of solving this problem is here.
/*
#include <cstdio>

using namespace std;

int main(){
    int n;
    cin >>n;
    
    if(n==1) cout <<"14";
    else if(n==2) cout <<"155";
    else{
        cout<<"1575";
        for(int i = 3; i < n; ++i) 
        	putchar('0');
    }
    
    return 0;
}

*/

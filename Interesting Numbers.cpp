#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;

	int first, second;
	int counter = 0;
	//int i = pow(10, 2*n -1) + 1;

	for (int i = pow(10, 2*n -1) + 1; i < pow(10, 2*n); i++){
		first = i /((pow(10, n)));
		int b = pow(10,n);

		second = i % b;
		//cout << second <<endl;
		//cout << i << endl;

		if (((i % first) == 0) && (second != 0) &&(i % second) == 0){
			counter++;
			//cout << i << endl;
			//cout <<first <<" " <<second<<endl;;
		}

	}
	cout << counter;
	return 0;
}

/*
#include <cstdio>

using namespace std;

int main(){
    int N;
    scanf("%d",&N);
    
    if(N==1) printf("14");
    else if(N==2) printf("155");
    else{
        printf("1575");
        for(int i = 3;i<N;++i) putchar('0');
    }
    
    return 0;
}

*/

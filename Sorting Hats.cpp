//Not the best solution, but this works. 
//I will update with the best optimized solution later.

//Problem number 1446.

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	string a, b;
	int j = 0, k = 0, l = 0, m =0 ;

	string Slytherin[1024];
	string Hufflepuff[1024];
	string Gryffindor[1024];
	string Ravenclaw[1024];

	for (int i = 0; i < n; i++){
		getline(cin, a);
		cin >> b;
		cin.ignore();
		if(b == "Slytherin"){
			Slytherin[j] = a;
			//cout << Slytherin[j];
			j++;
		}
		else if(b == "Hufflepuff"){
			Hufflepuff[k] = a;
			k++;
		}
		else if(b == "Gryffindor"){
			Gryffindor[l] = a;
			l++;
		}
		else {
			Ravenclaw[m] = a;
			m++;
		}
	}
	int x = 0;
	cout <<"Slytherin:\n";
	while (x < j){
		cout << Slytherin[x]<<endl;
		x++;
	}

	int y = 0;
	cout <<"\nHufflepuff:\n";
	while (y < k){
		cout << Hufflepuff[y]<<endl;
		y++;
	}

	int z = 0;
	cout <<"\nGryffindor:\n";
	while (z < l){
		cout << Gryffindor[z]<<endl;
		z++;
	}

	int r = 0;
	cout <<"\nRavenclaw:\n";
	while (r < m){
		cout << Ravenclaw[r]<<endl;
		r++;
	}
	return 0;
}

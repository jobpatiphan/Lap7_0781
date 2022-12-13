#include<iostream>

using namespace std;

int main(){
	
	int i = 0,j = 0, P[5000], k, result =0;
	cout << "Please input k: ";
	cin >> k;
	if(k > 0){
	while(i < 5000){
		P[i] = 2*i+1;
		i++;
	}
	while(j < 5000){
		if(P[j]%k == 0){
		result -= P[j];}
		else{result += P[j];}
		j++;
	}
	cout <<"Result = " <<result;
	}
	else{cout << "Invalid input!!!";}
	return 0;
}

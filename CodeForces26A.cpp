#include<iostream>
using namespace std;

bool isPrime(int n){
	
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
	
}


int main(){
	
	int n;
	cin>>n;
	int count=0;
	
	for(int i=6;i<=n;i++){
		int current_count=0;
		for(int j=2;j<=i/2;j++){
			if(isPrime(j) && i%j==0){
				current_count++;
			}
		}
		if(current_count==2){
			count++;
		}
		
	}
	
	cout<<count;
	
	
}

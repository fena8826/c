#include<iostream>
using namespace std;
 int main(){
 	int rows=5;
 	for (int i=1; i<=rows; i++){
 		for (int j=1;j<=rows-i; j++){
 			cout<<" ";
 			
		 }
	for(int k=i; k>=1;K--){
		cout<<k;
	}
	for(int l=2; l<=i; l++){
		cout<<l;
	}
	cout<<endl;
	 }
	 
	 return 0;
 }
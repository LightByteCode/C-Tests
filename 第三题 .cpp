#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	if(a<2){
		cout<<"��������";
	}
	else{
	
		for(int i=2;i<=a;i++){
			if(a%i==0){
				cout<<"��������";
				return 0;
			}
			else{
				cout<<"������";
				return 0;
			}		
		}
	}
	return 0;
}

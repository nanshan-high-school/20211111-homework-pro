#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long minus=1, devide=2, inputN, inputStep;
	cin >> inputN >> inputStep;

	long long movewho;
	for(long long t=1; t<=inputN; t++){
		if((inputStep-minus)%devide==0){
			movewho=t;
			break;
		}
		minus*=2;
		devide*=2;
	}


	inputStep-=minus;
	inputStep/=devide;
	inputStep%=3;
	if(movewho%2!=inputN%2){
		switch(inputStep){
			case 0:
				printf("move %lld from 1 to 2", movewho);
				break;
			case 1:
				printf("move %lld from 2 to 3", movewho);
				break;
			case 2:
				printf("move %lld from 3 to 1", movewho);
				break;
		}
	}else{
		switch(inputStep){
			case 0:
				printf("move %lld from 1 to 3", movewho);
				break;
			case 1:
				printf("move %lld from 3 to 2", movewho);
				break;
			case 2:
				printf("move %lld from 2 to 1", movewho);
				break;
		}
	}




	return 0;
}
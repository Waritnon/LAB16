#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << &a << " " << &b << " " << &c << " " << &d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int temp;
	int A = rand() % 4 +1;
	if(A = 3){
		temp = *d;
		*d = *c;
		*c = temp;
	}
	if(A = 1){
		temp = *a;
		*a = *c;
		*c = temp;
	}
	if(A = 2){
		temp = *b;
		*b = *c;
		*c = temp;
	}

	return;
}

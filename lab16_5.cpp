#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *w, int *x, int *y, int *z){
	int p[] = {*w,*x,*y,*z};
	for(int i=0; i < 4; i++){
		swap(p[i], p[rand()%4]);
	}
	*w = p[0], *x = p[1], *y = p[2], *z = p[3];
}
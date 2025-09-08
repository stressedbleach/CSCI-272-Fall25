#include <iostream>
using namespace std;

void chngeValue(int *ptr){
	*ptr = 50;
}

int main(){
	int num = 10;
	cout << "before" << num << endl;
	chngeValue(&num);
	
	cout << "after of num (&num)" << &num << endl;
	
	return 0;	
	}
#include <iostream>
using namespace std;

int main(){
	int scores[5] = {90, 85, 70, 95, 99};
	int sum = 0;
	
	for (int i = 0; i < 5; i++){
		sum += scores[i];
	}
	cout << "average = " << sum / 5 << endl ;
	
	return 0;
	
}
#include <iostream>
using namespace std;


//function to calculate avg

double average(int arr[], int size){
	int sum = 0;
		
	for (int i = 0; i < size; i++){
		sum += arr[i];
	}
	return (double)sum/size; // return avg
	
		
}
int main(){
	int scores[5] = {5,10,15,20};


	cout << "average = " << average(scores,4) << endl ;
	
	return 0;
	
}
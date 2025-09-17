#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main(){
    vector<int> numbers = {10,20,30,40,50};

    cout << "first element: " << numbers.front() << endl;
    cout << "last element: " << numbers.back() << endl;
    cout << "second element: " << numbers[1] << endl;
    cout << "third element: " << numbers.at(2) << endl;

    numbers[1] = 35;
    numbers.at(2) = 36;
    numbers.front() = 5;
    numbers.back() = 5;
    numbers.push_back(272);
    //the back will be 5, but then we pushback another number so the back will be 272 now
    

    cout << "\t===After mods===\n" << endl;

    cout << "first element: " << numbers.front() << endl;
    cout << "last element: " << numbers.back() << endl;
    cout << "second element: " << numbers[1] << endl;
    cout << "third element: " << numbers.at(2) << endl;



}
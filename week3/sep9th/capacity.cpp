#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main(){
    vector <int> numbers;
    numbers.reserve(3);

    cout << "reserved: " << endl << "size: " << numbers.size() << "capacity: " << numbers.capacity() << endl;
    cout << "first element: " << numbers.front() << endl;
    cout << "last element: " << numbers.back() << endl;


    numbers.push_back(10);    
    cout << "aftter adding 10: " << endl << "size: " << numbers.size() << "capacity: " << numbers.capacity() << endl;
    cout << "first element: " << numbers.front() << endl;
    cout << "last element: " << numbers.back() << endl;


    numbers.push_back(20);
    cout << "aftter adding 20: " << endl << "size: " << numbers.size() << "capacity: " << numbers.capacity() << endl;
    cout << "first element: " << numbers.front() << endl;
    cout << "last element: " << numbers.back() << endl;


    numbers.push_back(40);
    cout << "aftter adding 40: " << endl << "size: " << numbers.size() << "capacity: " << numbers.capacity() << endl;


    cout << "first element: " << numbers.front() << endl;
    cout << "last element: " << numbers.back() << endl;


    return 0;

}
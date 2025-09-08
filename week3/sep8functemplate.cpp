#include <iostream>
using namespace std;

/* example 1
template <typename T>
T maxnum(T a, T b) {
return (a > b) ? a : b;
}
int main() {
    // Example 1: Using max() with integers
    int intMax = maxnum(5,10);
    double doubleMax = maxnum(2.5,11.6);

    cout << "Integer max:" << intMax << endl;
    cout << "Double max:" << doubleMax << endl;

    return 0;
}*/


// example 2
template <typename T>
T addNum(T a, T b){
    return a+b;
}

int main(){
    int intSum = addNum(20,30);
    double doubleSum = addNum(11.11, 22.22);

    cout << "Integer sum: " << intSum << endl;
    cout << "Double sum: " << doubleSum << endl;

    return 0;
}
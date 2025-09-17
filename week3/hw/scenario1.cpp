#include <iostream>
#include <vector>
using namespace std;


int main(){
//vector is menu; add stuff using push_back

    vector<string> menu = {};

    menu.push_back("sushi");
    menu.push_back("takoyaki");
    menu.push_back("ramen");
    menu.push_back("handroll");
    menu.push_back("dango");

    // new dish at second position
    menu.insert(menu.begin() + 1, "udon");

    // erasing the fourth dish
    menu.erase(menu.begin() + 3);

// range based loops; https://www.geeksforgeeks.org/cpp/range-based-loop-c/
    for (string dish : menu ) {
        cout << dish << " ";
    }

    return 0;

}
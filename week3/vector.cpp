#include <iostream>
#include <vector>
using namespace std;


int main(){
    //declare a vector named myVector that holds integers | renamed myVector to prices
    // initialize the vector with elements 1,2,3,4,5

    vector<int> prices = {1,2,3,4,5};
    // we are going to add values to the end of prices, push_back command does not remove from the front?
    prices.push_back(10.99);
    prices.push_back(5.20);
    prices.push_back(11.22);

    //vector doesnt have a direct funtion to add to the front
    // but you can use insert and call the front function to insert it to the front.
    prices.insert(prices.begin(), 20);

    // accessing and modifying

    double total = prices[0] + prices[1] + prices[2];

    cout << "Total is: $" << total << endl;
    cout << "First item: " << prices.front() << endl;
    cout << "Last item: " << prices.back() << endl;
    cout << "Total size of my vector: " << prices.size() << endl;


    return 0;

}
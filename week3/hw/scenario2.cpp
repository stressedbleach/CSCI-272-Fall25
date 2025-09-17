#include <iostream>
#include <vector>
using namespace std;

// writing a loop to go through studentID, add the average 
double getAverage(const vector<int>& sids){
    int sum = 0;

    //we start the loop at 0 and go through vector to add each element to sum
    for (int i=0; i<sids.size();i++){ 
        sum+=sids[i];

}
    //we are dividing sum with the the size of the vector to get average
    return(double)sum/sids.size();
}

int getHighest(const vector<int>& sids){
    // first we gotta assume first element is highest, we need a starting point, then loop through the code to compare to the first element, until we find a greater value
    int maxSID = sids[0];

    //loop through vector
    for(int i=1;i<sids.size();i++){
        //if we find a bigger number, upate the max
        if(sids[i]>maxSID) maxSID=sids[i];
    }
    //return the biggest number found
    return maxSID;
}

int main(){


    vector<int> studentIDs = {343542, 444333, 546754, 454775, 923458, 595467, 734246, 853467, 634245, 964356};

    cout << getAverage(studentIDs) << endl;
    cout << getHighest(studentIDs) << endl;


    return 0;

}
#include "LF.h"




LineFollowing::LineFollowing(int numsens, const vector<int> &pins): numOfSens(numsens),numpin(pins){
        cout << "initialize with sensor values " <<numOfSens<< endl;
    }
        
void LineFollowing::readsensor(){
            cout << "read the sensor"<< endl;
            for (int num:numpin){
            cout << "read the pin "<<num<< endl; 
            }
        }
  

#include <iostream>
using namespace std;


int SensCal(int sensor[5]){
    int sum = 0;
    for (int i=0;i<5;i++){
        sum+=sensor[i];
    }
    cout << "sensor reading is " <<sum<< endl;
    return sum;
    }

int SensAvg(int sum){
    int average = 0;
    average = sum/5;

    if (average>30){
        cout << "out of threshold" << endl;
    }
    else{
        cout << "in threshold" << endl;
    }
    return average;

}




int main(){

    int sensor_1[5] = {23,45,65,22,1};
    //SensCal(sensor_1);
    SensAvg(SensCal(sensor_1));
    

}
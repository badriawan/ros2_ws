#include "LF.h"




int main(){
    vector<int> pin = {5,4,6};
    LineFollowing robot_1(3,pin);
    robot_1.readsensor();

    return 0;
}
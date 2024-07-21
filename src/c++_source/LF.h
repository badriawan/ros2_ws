#ifndef LINEFOLLOWING_H
#define LINEFOLLOWING_H

#include <iostream>
#include <vector>
using namespace std;

class LineFollowing{
    public:
        LineFollowing(int numsens, const vector<int> &pins);
        void readsensor();
    private:
        int numOfSens;
        vector<int> numpin;
          
};

#endif
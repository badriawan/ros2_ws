#include <iostream>
using namespace std;


class Robot{
    public:
    Robot(int values){
        cout << "initialize with sensor values " <<values<< endl;
    }
        template <typename T,typename U> //template berguna untuk menggunakan tipe data yang berbeda dalam variable yang sama , berguna tidak perlu buat banyak method dengan tipedata yang beda beda
        void processdata(T data1,U data2){
            cout << "process the sensor data in .." << data1<<data2<< endl;
        }
};

int main(){
    Robot robot_1(50);
    robot_1.processdata(30,"woi");

    return 0;
}
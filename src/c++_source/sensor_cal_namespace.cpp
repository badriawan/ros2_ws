#include <iostream>
using namespace std;



namespace Digital{
    namespace D1{
        void sensorcalibrate(){
            cout << "calibrate the sensor d1 now..." << endl;
        }

        void sensorread(){
            cout << "read the sensor d1 now..." << endl;
        }

        void sensorprocess(){
            cout << "process the sensor d1 now..." << endl;
        }
        }
        namespace D2{
        void sensorcalibrate(){
            cout << "calibrate the sensor d2 now..." << endl;
        }

        void sensorread(){
            cout << "read the sensor d2 now..." << endl;
        }

        void sensorprocess(){
            cout << "process the sensor d2 now..." << endl;
        }
    }}


namespace Analog::A1{
        void sensorcalibrate(){
            cout << "calibrate the sensor A1 now..." << endl;
        }

        void sensorread(){
            cout << "read the sensor A1 now..." << endl;
        }

        void sensorprocess(){
            cout << "process the sensor A1 now..." << endl;
        }
        }
namespace Analog::A2{
        void sensorcalibrate(){
            cout << "calibrate the sensor A2 now..." << endl;
        }

        void sensorread(){
            cout << "read the sensor A2 now..." << endl;
        }

        void sensorprocess(){
            cout << "process the sensor A2 now..." << endl;
        }
    }


int main(){
    //use 2 sensor digital
    //use 2 sensor analog

    Digital::D1::sensorcalibrate();
    Digital::D2::sensorcalibrate();
    Analog::A1::sensorcalibrate();
    Analog::A2::sensorcalibrate();

    return 0;
}
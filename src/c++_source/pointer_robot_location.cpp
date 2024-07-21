#include <iostream>
#include <vector>

using namespace std;

void Processdata(int numsens, const vector<int> *input) {
  cout << "processing location" << endl;
  cout << "read the data" << endl;
  for (int data : *input) {
    cout << data << endl;
  }
}

int main() {
  vector<int> inputdata = {20, 34, 67};
  vector<int>* inputdatap = &inputdata; // variable pointer harus pakai
                                        // reference untuk memasukkan datanya
  //*p = variabel pointer = nilai variabel (dapat diolah)
  // p = pointer = alamat memori (tidak dapat diolah nilainya)

  vector<int>* inputdatap = new vector<int>{20, 34, 67};
  //auto inputdata = make_unique<vector<int>>(initializer_list<int>(20,34,67));
  Processdata(3, inputdatap);

  //delete inputdatap;

  return 0;
}
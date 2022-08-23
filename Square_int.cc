#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  string line;
  int num =0;
  while (getline(cin, line)) {
    stringstream sInt(line);
    sInt >> num;
    cout << num*num << endl;
  }
}

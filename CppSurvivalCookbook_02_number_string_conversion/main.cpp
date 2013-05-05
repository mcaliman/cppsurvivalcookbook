#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int stringToNumber(const string &stringValue) {  
  int number = -1; 
  istringstream itmp(stringValue);  
  itmp >> number;
  return number;
}

string numberTostring(const int &number) {
  ostringstream otmp;
  otmp << number;
  return otmp.str();  
}

int main() {
    int intNumber = 2;
    string stringNumber = "4";
    
    int result1 = stringToNumber(stringNumber); 
    string result2 = numberTostring(intNumber);
    cout << result1 << endl;
    cout << result2 << endl;
    return 0;
}
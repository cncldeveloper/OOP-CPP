#include <iostream>

using namespace std;

class MyClass { 
public: 
    void myMethod() {
      cout << "Inside Method";
    }
};

int main() {
  MyClass myObj;
  myObj.myMethod();
  return 0;
}

#include <iostream> 
using namespace std; 
  
class X { 
private: 
  static const int a = 76; 
public: 
  static int getA() { return a; } 
}; 
  
int main() { 
  cout <<X::getA()<<endl; 
  return 0; 
} 

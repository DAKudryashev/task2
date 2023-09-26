#include <iostream>
#include <string>
class FooString{
  char* buf;
public:
  FooString(char* tbuf){
    
  };
  ~FooString(){
    delete[] buf;
  };
  void show(){};
  int lenght(){};
}

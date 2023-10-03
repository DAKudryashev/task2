#include <iostream>
#include <cstring>

using namespace std;

class FooString{
  char* buf;
public:
  FooString(char* tbuf){
    buf=new char[strlen(tbuf) + 1];
    strcpy(buf, tbuf);
  };
  ~FooString(){
    delete[] buf;
  };
  void show(){
    cout << buf << "\n";
  };
  int lenght(){
    return strlen(buf);
  };
};

int main(){
  FooString a ("testing");
  int len=a.lenght();
  cout << len << "\n";
  a.show();
  return 0;
}

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;


int a(){
int x=40000;
  cout.width(15);
  cout<<left<<x<<endl;
  return 0;
}

int b(){
  char x[100];
  for(int i=0;i<100;i++){
    char y=cin.get();
    if(y!='\n'){
      x[i]=y;
    }else{
      break;
    }
  }
  return 0;
}


int c(){
  int n=200;
  cout<<"n="<<showpos<<n;
  return 0;
}

int d(){
int x=100;
  stringstream stringForm;
  stringForm<<hex<<x;
  string result=stringForm.str();
  cout<<"x="<<result<<endl;
  return 0;
}

int e(){
  char Array[10];
  for(int i=0;i<10;i++){
    if(Array[i]!='p'){
      cout<<Array[i];
    }else break;
  }
  return 0;
}

int f(){
  cout<<"1.234 : "<<endl;
  cout<<setw(10)<<setfill('0')<<1.234;
  return 0;
}

int main(){
a();
  cout<<endl;
b();
  cout<<endl;
c();
  cout<<endl;
d();
  cout<<endl;
e();
  cout<<endl;
f();
}
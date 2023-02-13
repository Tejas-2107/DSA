#include <bits/stdc++.h>
 
using namespace std;
  
 class rect{
 public:
 int x,y;
 rect(int a, int b){
 
x=a;
y=b;

 }

int getarea(){

  return x*y;
}

 };
int main()
{
  rect rect(12,12);
  cout<< rect.getarea() <<endl;
    
}
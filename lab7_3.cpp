#include<iostream>

using namespace std;
int adiff(int a,int b)
{
  int c = a%360;
  int d = b%360;
  int rs;
  if(a > b)
  {
    rs = (a-b)%360;
  }
  else
  {
    rs = (b-a)%360;
  }
  if(rs > 180)
  {rs = 360-rs; }
  return rs;


}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}

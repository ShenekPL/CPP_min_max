#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
    float a[2][3];
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
	{
	 cout<<"podaj a"<<"["<<i<<"]["<<j<<"]=";
	 cin>> a[i][j];
	}
  }
 for(int i1=0;i1<2;i1++)
   {
     for(int j1=0;j1<3;j1++)
     {
     cout<<a[i1][j1]<<" ";
     }
       cout<<"\n";
   }
   cout<<a[0][0]<<"*x+"<<a[0][1]<<"*y="<<a[0][2]<<"\n";
   float x,y,w,wx,wy;
      w=a[0][0]*a[1][1]-a[1][0]*a[0][1];
      wx=a[0][2]*a[1][1]-a[1][2]*a[0][1];
      wy=a[0][0]*a[1][2]-a[1][0]*a[0][2];
      x=wx/w;
      y=wy/w;
      cout<<"x="<<x<<"\n";
      cout<<"y="<<y<<"\n";
system("PAUSE");
return EXIT_SUCCESS;
}

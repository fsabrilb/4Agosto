#include<iostream>

using namespace std;

int main(void)
{
  int i;
  int k;
  int N = 0;
  for(i=500; i<=1400; i++)
    {
      for(N=0, k=1; k<=i; k++)
	{
	  if(i%k==0)
	    N+=1;
	  else
	    N+=0;
	}
      if(N==2)
	cout << i <<endl;
    }
}


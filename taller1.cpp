#include<iostream>

using namespace std;

double SumaArmonica(double N)
{
  double i;
  double S=0;
  for(i=1; i<=N; i++)
    {
      S+=1/i;
    }
  return S;
}

int main(void)
{
  int N;
  for(N=1; N<=100; N++)
    {
      cout << N <<" "<< SumaArmonica(N) <<endl;
    }
  return 0;
}

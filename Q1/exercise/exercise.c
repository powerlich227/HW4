#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 100000
double gettheta()
{
  double u= (double) rand()/(double) RAND_MAX;
  double theta = acos(1-2*u)/2;
  return theta;
}

int main()
{
  int i;
  for(i=0;i<N;i++)
    {
      printf("%f\n",gettheta());
    }
  return 0;
}

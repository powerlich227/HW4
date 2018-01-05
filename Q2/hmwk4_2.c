#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define rand_num 100000000

//t=1.2/3e8=4e-9s
//Setting the unit of time is nanosecond(ns)
//tinitial=4ns,rmax=0.9m
//f(t)=0.25*cos(42degree)*t
//f(r)=(4/(1.8)^2)*r^2

FILE *ostream1;
FILE *ostream2;

main()
{
	int i,j,l,m,n1,n2;
        double t,r,x1,x2;
	int ti[10]={0};
	int ri[9]={0};
	double ta[10]={0},ra[9]={0};

	ostream1 = fopen("hmwk4_problem2a.dat","w");
	ostream2 = fopen("hmwk4_problem2b.dat","w");

	for(i=0;i<=rand_num;i++)
	{
		x1=(double)rand()/(double)RAND_MAX;
		t=3.28*sqrt(x1+1.488);
		n1=(int)t;
		if(n1>=0 && n1<=10)
		{	
			ta[n1]++;
		}
	}
	for(j=0;j<=rand_num;j++)	
	{
		x2=(double)rand()/(double)RAND_MAX;
		r=1.35*cbrt(x2);
		n2=(int)(r/0.1);
		if(n2>=0 && n2<=9)
		{	
			ra[n2]++;
		}
		//
	}
	for(l=0;l<=10;l++)
	{
		ti[l+1]=ti[l]+1;
		ta[l]=0.9*0.2*ta[l];
		//if(l>=4)
		//{
			//ta[l+1]=ta[l+1]+ta[l];
		//}		
		fprintf(ostream1,"%d %f\n",ti[l],ta[l]);
	}
	for(m=0;m<=9;m++)
	{
		ri[m+1]=ri[m]+1;
		ra[m]=0.9*0.2*ra[m];
		fprintf(ostream2,"%d %f\n",ri[m],ra[m]);
	}
	fclose(ostream1);
	fclose(ostream2);
}

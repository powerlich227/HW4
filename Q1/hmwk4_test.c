#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define rand_num 100000000
#define PI 3.141592653

FILE *ostream1;
FILE *ostream2;

main()
{
	int a,b,c,d,i,j,k,l,m,n;
        double x1,x2,y,z,r1,r2,r3,r4;
	double step1=PI*5/180,step2=PI*20/180;
	int ia[18]={0},ib[18]={0};
	double xa[18],xb[18],ya[18],za[18];

	ostream1 = fopen("hmwk4_problem1a.dat","w");
	ostream2 = fopen("hmwk4_problem1b.dat","w");

	for(i=0;i<=rand_num;i++)
	{
		r1=(double)rand()/(double)RAND_MAX;
		x1=0.5*acos(1-2*r1);
		j=(int)(x1/step1);
		if(j>=0 && j<=18)
			xa[j]++;
	}
	for(k=0;k<=rand_num;k++)
	{
		r2=(double)rand()/(double)RAND_MAX;
		y=0.5*acos(1-2*r2);
		l=(int)(y/step1);
		if(l>=0 && l<=18)
			ya[l]++;
	}
	for(a=0;a<=rand_num;a++)
	{
		r3=(double)rand()/(double)RAND_MAX;
		z=0.5*acos(1-2*r3);
		b=(int)(z/step1);
		if(b>=0 && b<=18)
			za[b]++;
	}
	for(c=0;c<=rand_num;c++)
	{
		r4=(double)rand()/(double)RAND_MAX;
		x2=2*PI*r4;
		d=(int)(x2/step2);
		if(d>=0 && d<=18)
			xb[d]++;
	}
		//90% diffuse refelection

	for(m=0;m<=18;m++)
	{
		ia[m+1]=ia[m]+5;
		ib[m+1]=ib[m]+20;
		xa[m]=0.9*xa[m];
		ya[m]=0.9*ya[m];
		za[m]=0.9*za[m];
		xb[m]=0.9*xb[m];
		if(m==0)
		{
			xa[m]=xa[m]+0.1*rand_num;
		}
		if(m==6)
		{
			ya[m]=ya[m]+0.1*rand_num;
		}
		if(m==12)
		{
			za[m]=za[m]+0.1*rand_num;
		}
		if(m==9)
		{
			xb[m]=xb[m]+0.1*rand_num;
		}//10% specular reflection

		fprintf(ostream1,"%d %f %f %f\n",ia[m],xa[m],ya[m],za[m]);
		fprintf(ostream2,"%d %f\n",ib[m],xb[m]);
	}
	fclose(ostream1);
	fclose(ostream2);
}

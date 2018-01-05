#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define rand_num 100000000
#define PI 3.141592653

main()
{
	int i,j1,j2,l,m,x_initial,p_initial;
        double x1,p1,r;
	double step=PI/180;
	int x[90]={0},p[360]={0};
	double xi[90],pi[360];

	printf("Pls input 2 incident angle\n");
	scanf("%d %d",&x_initial,&p_initial);

	for(i=0;i<=rand_num;i++)
	{
		r=(double)rand()/(double)RAND_MAX;
		x1=0.5*acos(1-2*r);
		j1=(int)(x1/step);
		if(j1>=0 && j1<=90)
			xi[j1]++;
		p1=2*PI*r;
		j2=(int)(p1/step);
		if(j2>=0 && j2<=360)
			pi[j2]++;
		//diffuse refelection
	}
printf("%d %d\n",x_initial,p_initial);
	for(l=0;l<=90;l++)
	{	
		x[l+1]=x[l]+1;
		xi[l]=0.9*xi[l];

		if(l==x_initial)
		{
			xi[l]=xi[l]+0.1*rand_num;//10% specular reflection
		}
		printf("%d %f\n",x[l],xi[l]);
	}
	for(m=0;m<=360;m++)
	{
		p[m+1]=p[m]+1;
		pi[m]=0.9*pi[m];

		if(m==p_initial)
		{
			pi[m]=pi[m]+0.1*rand_num;//10% specular reflection
		}
		printf("%d %f\n",p[m],pi[m]);
	}
}

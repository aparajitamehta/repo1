#include<stdio.h>
struct complex{
	double re;
	double im;
};
typedef struct complex complex;
void add(complex*a,complex*b,complex*c)
{
	a->re=b->re+c->re;
	a->im=b->im+c->im;
}
void sub(complex*a,complex*b,complex*c)
{
	a->re=b->re-c->re;
	a->im=b->im-c->im;
}
void mul(complex*a,complex*b,complex*c)
{
	a->re=b->re*c->re-b->im*c->im;
	a->im=b->im*c->re+b->re*c->im;
}
void div(complex*a,complex*b,complex*c)
{
	double t=c->re*c->re+c->im*c->im;
	a->re=b->re*c->re/t+b->im*c->im/t;
	a->im=b->im*c->re/t-b->re*c->im/t;
}
int main(void)
{
	complex a,b,c;
	char d;
	scanf("%lf+i%lf%c%lf+i%lf",&b.re,&b.im,&d,&c.re,&c.im);
	switch(d)
	{
	case '+':add(&a,&b,&c);
		 break;
	case '-':sub(&a,&b,&c);
		 break;
	case '*':mul(&a,&b,&c);
		 break;
	case '/':div(&a,&b,&c);
		 break;
	}
	printf("%.2lf+i%.2lf\n",a.re,a.im);
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <time.h>

clock_t start, stop;
double duration;
#define MaxN 100
//#define N 100

double NormPoly(int N,double a[],double x)
{
    int i;
    double sum=a[0];
    for(i=1;i<N;i++)
    {
        sum += (a[i]*pow(x,i));
    }
    return sum;
}

double QinPoly(int N,double a[],double x)
{
    int i;
    double sum = a[N];
    for (i=N; i>0; i--)
    {
        sum = a[i-1] + sum*x;
    }
    return sum;
}

int main()
{
    int i;
    int sum;
    double x;
    //int N;//����ʽ����
    /*��¼����ʱ��*/
    double  a[MaxN+1]={1};
    scanf("%3f",&x);//����x��ֵ
    //����ϵ��
    for ( i=1; i<MaxN+1; i++)
    {
        a[i] = 1/i;
    }
    printf("��ͨ�㷨");
    start = clock();
    /*��ͨ�㷨*/
    for (i=1;i<1000;i++)
        sum = NormPoly(MaxN, a ,x);

    stop = clock();
    duration = ((double)(stop-start))/CLK_TCK;
    printf("ticks is %6.2e\n",(double)(stop-start));
    printf("take %6.2e\n",duration);

    printf("�ؾ����㷨");
    start = clock();
    for (i=1;i<1000;i++)
        QinPoly(MaxN,a,x);
    stop = clock();
    duration = ((double)(stop-start))/CLK_TCK;
    printf("ticks is %6.2e\n",(double)(stop-start));
    printf("take %6.2e\n",duration);
}

#include <stdio.h>
#include <stdlib.h>

int MaxSubseqSum4(int A[] ,int N);
int main()
{
    int A[10]={-10,1,2,3,4,-5,-23,3,7,-21};
    int N=10;//定义数组个数
    int i;//定义循环变量
    int MaxSum;//left,right;//定义最大和，左边的数，和右边的数
    //输入数组
 /*   printf("please input array");
    scanf("%d",&N);
    printf("please input array num");
    for (i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }

  /*      for (i=0; i<N; i++)
    {
        printf(" %d",A[i]);
    }*/

    //在线处理法
    MaxSum = MaxSubseqSum4(A ,N);
  //  printf("最大子列和为%d",MaxSum);
    return 1;
}

int MaxSubseqSum4(int A[] ,int N)
{
    int ThisSum=0,MaxSum=0;
    int a[100]={};
    int i;
    int num=0,n=0;
    for(i=0 ; i<N ;i++ )
    {
        ThisSum += A[i];
        if (ThisSum > MaxSum)
        {
            MaxSum = ThisSum;
            a[num++] = A[i];
            n++;
           // num++;//错误

        }
        else if (ThisSum <= 0)
        {
            ThisSum = 0;
            //a[0] = A[i];//错误
            num = 0;
        }

    }
    if (MaxSum <=0 )
    {
        MaxSum = 0;
            for (i=0; i<N; i++)
        {
            printf("%d ",A[i]);
        }
    }
    printf("%d %d %d",MaxSum,a[0],a[n-1]);
 //   printf("子列长度%d",n);
/*
      for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    */
 //   printf("\n left is %d ,right is %d",a[0],a[n-1]);
    //printf("最大子列和为%d",MaxSum);
    return MaxSum;
}

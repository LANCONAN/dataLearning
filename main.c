#include <stdio.h>
#include <stdlib.h>

int MaxSubseqSum4(int A[] ,int N);
int main()
{
    int A[10]={-10,1,2,3,4,-5,-23,3,7,-21};
    int N=10;//�����������
    int i;//����ѭ������
    int MaxSum;//left,right;//�������ͣ���ߵ��������ұߵ���
    //��������
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

    //���ߴ���
    MaxSum = MaxSubseqSum4(A ,N);
  //  printf("������к�Ϊ%d",MaxSum);
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
           // num++;//����

        }
        else if (ThisSum <= 0)
        {
            ThisSum = 0;
            //a[0] = A[i];//����
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
 //   printf("���г���%d",n);
/*
      for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    */
 //   printf("\n left is %d ,right is %d",a[0],a[n-1]);
    //printf("������к�Ϊ%d",MaxSum);
    return MaxSum;
}

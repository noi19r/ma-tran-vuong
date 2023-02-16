#include <stdio.h>

#include<math.h>

int main()
{
		int n;
	 printf("Nhap n 2 <=n<=10 : ");
	 scanf("%d",&n);
    int i, j, k = 1, cot1 = 0, cot2 = n - 1, hang1 = 0, hang2 = n - 1;
    
   
    int a[10][10];
    while (k <= n * n)
    {
        for (i = cot1; i <= cot2; i++)
        {
            a[hang1][i] = k++;
        }
        for (i = hang1 + 1; i <= hang2; i++)
        {
            a[i][cot2] = k++;
        }
        for (i = cot2 - 1; i >= cot1; i--)
        {
            a[hang2][i] = k++;
        }
        for (i = hang2 - 1; i >= hang1 + 1; i--)
        {
            a[i][cot1] = k++;
        }
        cot1++;
        cot2--;
        hang1++;
        hang2--;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


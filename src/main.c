#include <stdio.h>
void insertion(int n,int a[]) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while(j>=0 &&a[j]>temp )
        {
            a[j+1]=a[j];
            j--;

        }
        a[j + 1] = temp;
    }
}


int main(void)
{
    int n;
 
    scanf("%d",&n);
    int a[n];
    
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    insertion(n,a);
    
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

#include<stdio.h>
int get_smaller_ind(int ar[], int st_ind, int end_ind)
{ int sm_ind;
    int i,sm_index =st_ind, sm_ele=ar[st_ind];
        for(i=st_ind; i<=end_ind; i++)
        {
            if(ar[i]<sm_ele)
            {
                sm_ele=ar[i];
                sm_ind=i;
            }
        }
        
        return sm_ind;
}
void main()
{
    int a[10], piv_ind=0, temp,sm_ind;
    int i;
    printf("\n Enter 10 elements");
        for(i=0; i<=9;i++)
        {
         scanf("%d",&a[i]);
        }
        
        for(piv_ind=0;piv_ind<=8;piv_ind++)
        {
            sm_ind=get_smaller_ind(a,piv_ind,9);
            temp=a[sm_ind];
            a[sm_ind]=a[piv_ind];
            a[piv_ind]=temp;
        }
        
        
    printf("\n Sorted elements :");
        for(i=0; i<=9; i++)
        {
            printf("%d \n",a[i]);
        }
    
}

#include <stdio.h>

int bubble_sort(int a[],int range) {
     int temp,i,j;
    for (i=0;i<range;i++){
        for (j=0;j<range-1;j++){
            if(a[j]>a[j+1]){
                // swap
                temp = a[j+1];
              a[j+1] = a[j];
               a[j] = temp;
            }
        }
    } }


/*void display_array ( int a[], int range){
        int i;
    for (i=0;i<range;i++){
    printf("%d \n" , a[i]);
    }
    }*/

void binary_search(int a[],int range)
    {
        int search,r,l=0,m=0;
         r=range-1;

    printf("Enter the number to search - \n");
    scanf("%d", &search);


while (l<=r)
{
    m = (r+l)/2;

    if (a[m] == search)
    {
         int found=1;
        if(found==1){
        printf("Number found at %dth position \n",m+1);
        }
        break;
    }
    else if (a[m]>search)
    {
        r=m-1;
    }
    else if (a[m]<search)
    {
        l=m+1;
    }
}
if (l>r)
{
    printf("Number is not Found");
}
    }
void main()
{
    int a[100];
    int i,range,r,m=0,l=0;
printf("Enter range of number to be entered - ");
    scanf("%d",&range);
    for (i=0;i<range;i++)
    {
        printf("Enter %dth number ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Sorting......... \n");
    bubble_sort(a,range);
    binary_search(a,range);

}


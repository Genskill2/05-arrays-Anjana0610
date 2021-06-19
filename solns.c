/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[],int n)
{
    int i;
    int max=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
 return max;
}
int min(int arr[],int n)
{
    int i;
    int min=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
 return min;
}
float average(int arr[],int n)
{
    int i;
    int s=0;  //sum
    float avg=0;  //average

    for(i=0;i<n;i++)
    {
        s = s + arr[i];
    }

    avg = (float)s/(float)n;

    return avg;
}

int mode(int arr[],int n)
{
    int maxcount=0,maxvalue=0,c;
    int i,j;

    for(i=0;i<n;i++)
    {
        c=0;

        for(j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                c++;
            }
        }

        if(c>maxcount)
        {
            maxcount = c;
            maxvalue = arr[i];
        }
    }

    return maxvalue;
}
int factors(int num,int ret[])
{
    int k=0;

    while(num % 2 == 0)
    { 
        ret[k] = 2;
        k++;
        num = num/2;
    } 
for(int m=3;m<=num;m+=2)
    {
        while(num % j == 0)
        {
            ret[k] = j;
            k++;
            num = num/j;
        }
    }
 return k;
}

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main()
{
    int n=4;
    int i,j;
    int sum;
    bool visited[n][n];
    int arr[n][n];
    int flag,flag1,flag2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            visited[i][j]=false;
        }
    }
    for(j=0;j<n;j++)
        {
            if(arr[0][j]==1)
                {
                    sum=1;
                    visited[0][j]=true;
                    break;
                }

            }

        for(i=1;i<n;i++)
        {
            int j=0;
            while(j<n)
            {
                if(arr[i][j]==1  && visited[i-1][j]==false)
                {

                    flag=1;
                    visited[i][j]=true;
                    break;
                }
                else{
                    flag=0;
                    j++;
                }

            }

            if(flag==1)
            {
                sum=0;

            }
            else
            {
            int j1=0;
            while(j1<n)
            {
                if(arr[i][j1]==2  && visited[i-1][j1]==false)
                {
                    flag1=1;
                    visited[i][j1]=true;
                    break;
                }
                else{
                    flag1=0;
                    j1++;
                }

            }

            }
            if(flag1==1)
            {
                sum=0;


            }
            else if(flag1!=0 && flag2!=0)
            {
                sum=0;

            }

        }
    printf("\n");
    for(i=0;i<n;i++,printf("\n"))
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",visited[i][j]);
        }
    }
    int sum1=0;
    for(i=0;i<n;i++,printf("\n"))
    {
        for(j=0;j<n;j++)
        {
            if(visited[i][j]==true)
                sum1+=arr[i][j];
        }
    }
    printf("%d",sum1);






    return 0;
}

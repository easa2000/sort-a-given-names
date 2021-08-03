//write a program to sort a names

#include<stdio.h>
#include<string.h>
void main()
{
    char names[10][20], temp[10][20];
    int i,j,n;

    printf("\n Enter the number of students: ");
    scanf("%d",&n);
    printf("\n Enter the number of the %d studemts. ",n);
    for(i=0;i<=n;i++)
    {
        gets(names[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(strcmp(names[j],names[j+1]) > 0)
            {
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);

            }
        }
    }

    printf("\n Names of the students are ");
    for(i=0;i<=n;i++)
    {
        puts(names[i]);
    }
}

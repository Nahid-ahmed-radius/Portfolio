#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],fs[50]="",t[6],r[5];
    int i,j,p=0,q=0;
    printf("enter the value\n");
    scanf("%s",a);
    strcat(fs,"011110_");
    if(strlen(a)<5)
    {
        strcat(fs,a);
    }
    else
    {
        for(i=0;strlen(a)-4;i++){
            for(j=i;j<5;j++)
            {
                t[p++]=a[j];
            }
        t[p]='\0';
        if (strcmp(t,"11111")==0)
        {
            strcat(fs,"111110");
            i=j-1;
        }
        else{
            r[0]=a[i];
            r[1]='\0';
            strcat(fs,r);
        }
        p=0;
        }
        for(q=i;1<strlen(a);q++)
        {
            t[p++]=a[q];
        }
        t[p]='\0';
        strcat(fs,t);
    }
    strcat(fs,"_01111110");
    printf("after stuffing: %s",fs);
}
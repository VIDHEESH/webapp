#include<stdio.h>
int main(void)
{
    int d,m,y,i,sum,j,loop=0,loop1=0,d1,s,s2,temp,i1=0;
    int ab,ab1=0,ab2=0;
    int k[100],h[100];
    scanf("%d:%d:%d",&y,&m,&d);
    int l1[100]={31,28,31,30,31,30,31,30,31,31,30,31,31,29,31};
    int l2[100]={31,29,31,30,31,30,31,30,31,31,30,31,31,28,31};
    int l3[500],l4[500];
    for(i=0;i<15;i++)
    {
        ab=0;
        for(j=1;j<l1[i]+1;j++,loop++)
        {
            l3[loop]=j;
            ab=ab+1;
        }
        ab1=ab1+ab;
    }
    for(i=0;i<15;i++)
    {
        ab=0;
        for(j=1;j<l2[i]+1;j++,loop1++)
        {
            l4[loop1]=j;
            ab=ab+1;
        }
        ab2=ab2+ab;
    }
    if((y%400!=0)||((y%4==0)&&(y%100!=0)))
    {
        s2=0;
        s=0;
        d1=0;
        sum=0;
        for(i=0;i<m+1;i++)
        {
            sum=sum+l1[i];
        }
        sum=sum+d;
        if(d%2==0)
        {
            for(i=sum-1,j=0;i<457;i++,j++)
            {
                temp=l3[i];
                k[j]=temp;
            }
            for(i=0;i<(457-(sum-1));i=i+2)
            {
                if(k[i]%2==0)
                {
                    s=s+1;
                }
                else
                {
                    break;
                }
            }
            s2=s2+s;
        }
        else
        {
            for(i=sum-1,j=0;i<457;i++,j++)
            {
                temp=l3[i];
                h[j]=temp;
            }
            for(i=0;i<(457-(sum-1));i=i+2)
            {
                if(h[i]%2!=0)
                {
                    d1=d1+1;
                }
                else
                {
                    break;
                }
            }
            s2=s2+d1;
        }
    }
    else if(y%400==0)
    {
        s2=0;
        s=0;
        d1=0;
        sum=0;
        for(i=0;i<m+1;i++)
        {
            sum=sum+l2[i];
        }
        sum=sum+d;
        if(d%2==0)
        {
            for(i=sum-1,j=0;i<458;i++,j++)
            {
                temp=l4[i];
                k[j]=temp;
            }
            for(i=0;i<(458-(sum-1));i=i+2)
            {
                if(k[i]%2==0)
                {
                    s=s+1;
                }
                else
                {
                    break;
                }
            }
            s2=s2+s;
        }
        else 
        {
            for(i=sum-1,j=0;i<458;i++,j++)
            {
                temp=l4[i];
                h[j]=temp;
            }
            for(i=0;i<(458-(sum-1));i=i+2)
            {
                if(h[i]%2!=0)
                {
                    d1=d1+1;
                }
                else
                {
                    break;
                }
            }
            s2=s2+d1;
        }
    }
    printf("%d",s2);
}

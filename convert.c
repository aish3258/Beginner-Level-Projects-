#include<stdio.h>
#include<string.h>

int value(char x)
{
    if(x== 'I')
        return 1;
    else if(x == 'V')
        return 5;
    else if(x=='X')
        return 10;
    else if(x=='L')
        return 50;
    else if(x=='C')
        return 100;
    else if(x=='D')
        return 500;
    else if(x=='M')
        return 1000;
    else
        return 0;
}

int main()
{
    char curr,next;
    char roman[20];
    int ans=0,i=0;

    printf("Enter the roman number (In Captital Letters) : ");
    scanf("%s",roman);
    
    while(i<strlen(roman))
    {
        curr=roman[i];
        next=roman[i+1];

        if(i==strlen(roman))
            ans=value(curr);
        else
        {
            if(value(curr) < value(next))
                ans -= value(curr);
            else
                ans += value(curr);
        }
        i++;
    }
    printf("Integer values is %d",ans);
    return 0;
}


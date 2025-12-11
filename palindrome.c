#include<stdio.h>

    int main(){

        char a[20];
        printf("enter a string:\n");
        scanf("%s",a);

        int i=0,len;
        while (a[i]!='\0')
        {
            i++;
        }
        
        len=i;
        int count=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==a[len-i-1])
            count++;
        }
        if(len==count)
        printf("palindrome");
        else
        printf("is not palindrome");

        return 0;
    }
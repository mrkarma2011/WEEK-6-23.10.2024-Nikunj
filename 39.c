#include<stdio.h>
#include<string.h>
int main(){
    char a[1000]={'\0'};
    printf("Input a string: ");
    fgets(a,sizeof(a), stdin);
    a[strcspn(a,"\n")]='\0';

    int alpha[26]={0};
    for(int i=0; a[i]!='\0'; i++)
    {if (a[i] >= 'a' && a[i] <= 'z')
    alpha[a[i]-'a']++;
    }

for(int j=0; j<26;j++)
printf("%d " ,alpha[j]);
    printf("\n");

    int isSuper=1;
    for(int i=0; i<26 ; i++ )
    {
        if(alpha[i]!=i+1 && alpha[i]!=0)
        {isSuper=0;
        break;}
    }

    if(!isSuper)
    printf("No");
    else
    printf("Yes");
}
#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100],result[100]={'\0'};
    printf("Enter the first string: ");
    fgets(a,sizeof(a), stdin);
    printf("Enter the second string: ");
    fgets(b,sizeof(b), stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    int count=0;
    for(int i=0; a[i]!='\0'; i++)
       { int isPresent=0;
        for (int j = 0; b[j]!='\0'; j++)
            if(a[i]==b[j])
            {
                isPresent=1;
                break;
            }
        if(!isPresent)
        result[count++]= a[i];      
       }
       result[count]='\0';
    printf("Modified string: %s", result);
}
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char a[100]={'\0'}, b[100]={'\0'};
printf("input a string: ");
fgets(a, sizeof(a), stdin);

int i,j,bCount=0;

for (i = 0; i < strlen(a); i++) 
{
        int isDistinct = 1;
        for (j = 0; j < i; j++) {
            if(tolower(a[i]) == tolower(a[j]) && a[i]!=' ') {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            b[bCount++] = a[i];
        }
}
printf("%s", b);
return 0;
}
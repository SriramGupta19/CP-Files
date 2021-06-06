#include <stdio.h>

int main()
{
    char s1[100],s2[100],s3[100];
    int i,j,l1,l2;
    scanf("%s",s1);
    scanf("%s",s2);
    j=0;
    i=0;
    while(s1[i]!='\0'){
        s3[j]=s1[i];
        i++;
        j++;
    }
    i=0;
    while(s2[i]!='\0'){
        s3[j]=s2[i];
        i++;
        j++;
    }
    s3[j]='\0';
    printf("%s",s3);
    return 0;
}

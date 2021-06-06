
#include <stdio.h>
#include <string.h>

int main()
{
    int i,c=0;
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    if(strlen(s1)!=strlen(s2)){
        printf("Strings Not equal");
    }
    else if (strlen(s1)==strlen(s2)){
        for(i=0;s1[i]!=0||s2[i]!=0;i++){
            if(s1[i]==s2[i]){
                c+=1;
                continue;
            }
            else{
                printf("%d",s1[i]-s2[i]);
                break;
            }
        }
    }
    if(c==strlen(s1)&&c==strlen(s2)){
        printf("Strings are equal");
    }

}

#include<stdio.h>
#include<string.h>

void sorted_string(char sr[] , int l)
{
    int i=0,j;
    char temp;
    while(sr[i]!='\0')
    {
        for(j=i+1;j<l;j++){
            if(sr[j]>sr[i]){
                temp = sr[i];
                sr[i] = sr[j];
                sr[j] = temp;
            }
        }
        i++;
    }

}
void print(char sr[], int l)
{
    for(int i=0;i<l;i++){
        printf("%c",sr[i]);
    }
}
int main()
{
    char sr[100],temp;
    scanf("%s",sr);
    int l;
    l=strlen(sr);
    sorted_string(sr,l);
    print(sr,l);
}

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char user[101];
    scanf("%100s",user);
    int l=strlen(user),dist=0;
    
    bool seen[26]={false};
    for (int i = 0; user[i] != '\0'; i++)
    {
        int c = user[i] - 'a';        
        if (!seen[c])
        {
            seen[c]=true;
            dist++;
        }
    }
    
    if(dist%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}
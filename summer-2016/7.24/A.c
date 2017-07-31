#include<stdio.h>
#include<string.h>
int main(void)
{ 
    //Bulbasaur
    char s[10001];
    int a[52]={0},min;
    int b[]={27,20,11,18,17,1,0};
    gets(s);
    int l=strlen(s),i;
    for(i=0;i<l;i++)
    {
        if (s[i]>='A' && s[i]<='Z')   
        {  
            a[s[i]-'A'+26]++;  
        }  
        if (s[i]>='a' && s[i]<='z')  
        {  
            a[s[i]-'a']++;  
        }  
    }
    a[20]/=2;  
    a[0]/=2;  
    min=a[b[0]];  
    for (i=0;i<7;i++)  
    {  
        if (a[b[i]]<min)  
        {  
            min=a[b[i]];  
        }  
    }  
    printf("%d\n",min);  
    return 0;
}

//效率比较低，test13超时


//但是同样的思路，python却没有超时
/*
a=raw_input()
l=[0,0,0,0,0,0,0]
for i in range(len(a)):
    if a[i]=='B':
        l[0]+=1
    if a[i]=='u':
        l[1]+=1
    if a[i]=='l':
        l[2]+=1
    if a[i]=='b':
        l[3]+=1
    if a[i]=='a':
        l[4]+=1
    if a[i]=='s':
        l[5]+=1
    if a[i]=='r':
        l[6]+=1
l[1]=l[1]/2
l[4]=l[4]/2
print min(l)
*/


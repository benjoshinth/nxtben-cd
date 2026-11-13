#include<iostream>
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
int r;
std::cout<<"\n Type a character:";
ch=getchar();
r=isalnum(ch);
std::cout<<"\n The return value of isalnum(ch) is: "<<r;
return 0;
}

#include<stdio.h>
int main(){
    long nc;
    nc=0;
   long sx;
long bl;
 bl=0;
 long tb;
 tb=0;
 long nl;
 nl=0;

    while((sx=getchar())!=EOF){
        ++nc;
    
        if(sx==' '){
            ++bl;
        }
        if(sx=='\t'){
        ++tb;
        }
        if(sx=='\n'){
++nl;
        }
    }
            printf("\nCHARACTERS--%ld\nBLANKS--%ld\nTABS--%ld\nNEWLINES--%ld",nc,bl,tb,nl);

}
#include<stdio.h>
int main(){
long nc;
long sp;
//int c;
sp=0;


nc =0;
while(getchar()!=EOF){

++nc;

if(nc==' '){
++sp;
//printf("SPACE");
}

}
printf("\n%ld characters with %ld spaces!",nc,sp);
}

#include<iostream>
#include<iomanip>
void call(int a){
int ad=0;
int ch;
ch=0;
if(a==1){
while(ch=(getchar()!=EOF)){
++ad;


}

}
std::cout<<ad<<"\ncharacters\n";
}


int main()
{
int c;

main:
std::cout<<"CHARACTER COUNTER-->1||EXIT-2-";
std::cin>>c;
//call(c);//
if(c==1){
call(c);
}else if(c==2){
return 0;
}else if(c!=1&&c!=2){
std::cout<<"INVALID CHOICE\n";
goto main;
}
return 0;
}

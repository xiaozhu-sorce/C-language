#include<stdio.h>
enum sex {Girl,Boy,Invalid};
void girl(void)
 { puts("女生");}
void boy(void)
 { puts("男生");}
enum sex select(void){
    int tmp;
    do
    {
        printf("0···女  1···男  2···结束："); scanf("%d",&tmp);

    } while (tmp<Girl||tmp>Invalid);
    return tmp;
}
int main (void){
    enum sex selected;
    do
    {
     switch (selected=select())
     {
     case Girl:
         girl();
         break;
     
     case Boy:boy();
         break;
     }
    } while (selected!=Invalid);
    return 0;

}
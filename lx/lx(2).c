#include<stdio.h>
int main (){
    int x,y,z;
    for ( x = 0; x < 10; x++)
    {
        for ( y = 0; y < 10; y++)
        {
            for ( z = 0; z < 10; z++)
            {
                if ((100*x+10*y+z+100*z+10*y+x)==1231)
                {
                    printf("%d %d %d\n",x,y,z);
                }
                
            }
            
        }
        
    }
    return 0;
}
#include <stdio.h> 
int main()
{  
    int count; 
    printf("Odd num between 1 to 10");  
    for(count = 1; count <= 10; count++) 
    {  
  
        if(count%2!=0) 
        { 
        
            printf("%d ", count);  
        }  
    }  
   
    return 0;  
} 

#include <unistd.h>

void    ft_maff_alpha(char c)
{   
    int count;            
    
    while(c <= 'z')    
    {        
        if(count % 2 == 0)
        {   
           c -= 32;  
           write(1, &c, 1); 
           c += 32;                                 
       } 
       else{            
           write(1, &c, 1);
       }       
       c++; 
       count++;                
    }
    write(1, "\n", 1);
}

int main()
{
    ft_maff_alpha('a');
    return 0;
}
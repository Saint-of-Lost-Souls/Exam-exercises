#include <unistd.h>

void    ft_maff_revalpha(char c)
{   
    int count;

    count = 1;   
    while(c >= 'a')    
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
       c--; 
       count++;                
    }
    write(1, "\n", 1);
}

int main()
{
    ft_maff_revalpha('z');
    return 0;
}
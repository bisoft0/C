#include <stdio.h>

main()
{
    int puan;
    
    printf("Lütfen puanınızı girin===>");
    scanf("%d",&puan);
    
    if(puan < 25)
    {
        printf("Derece 0 \n");
    }
    else
    {
        if(puan < 45)
        {
            printf("Derece 1 \n");  
        }
        else
        {
            if(puan < 55)
            {
                printf("Derece 2 \n");
            }
            else
            {
                if(puan < 70)
                {
                    printf("Derece 3 \n");
                }
                else
                {
                    if(puan < 85) 
                    {
                        printf("Derece 4 \n");
                    }
                    else
                    {
                        printf("Derece 5 \n");
                    }
                }
            }
        }
        getchar();
    }
    
 
 
 
 
    
}

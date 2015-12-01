#include <stdio.h>

int main()
{
        int i;
    
        int all[10];
        int i90_100=0;
        int i60_89=0;
        int i0_59=0;


    
    printf("please input students score:\n");
    
           for (i=0; i<10; i++)
            {
            
                    scanf("%d",&all[i]);
            
                }
    
    
    
        for (i=0; i<10; i++)
            {
            
            
            
                    if ( all[i]<=100 && all[i]>=90)
                        {
                                i90_100++;
                            }
                    else if (all[i]<=89 && all[i]>=60)
                        {
                                i60_89++;
                    
                            }
                    else if (all[i]<=59 && all[i]>=0)
                        {
                                i0_59++;
                    
                            }
            }

            int a90_100[10];
            int a60_89[10];
            int a0_59[10];
    
    
            int j90_100 =0;
            for (i=0; i<10; i++) {
                
                            if (all[i]<=100&&all[i]>=90) {
                    
                                    a90_100[j90_100]=all[i];
                    
                                    j90_100 ++;
                                }
                        }
            
            
                    int j60_89 =0;
                    for (i=0; i<10; i++) {
                
                            if (all[i]<=89&&all[i]>=60) {
                    
                                    a60_89[j60_89]=all[i];
                    
                                    j60_89 ++;
                                }
                        }
                    int j0_59 =0;
                    for (i=0; i<10; i++) {
                        
                            if (all[i]<=59&&all[i]>=0) {
                                
                                    a0_59[j0_59]=all[i];
                                
                                    j0_59 ++;
                                }
                        }
            
                
                
                
                
                
                
                
                    printf("a90_100:\n");
                
                for(i=0;i<i90_100;i++)
                    {
                            printf("%d\n",a90_100[i]);
                        }
                    printf("a60_89:\n");
                for(i=0;i<i60_89;i++)
                    {
                            printf("%d\n",a60_89[i]);
                        }
                    printf("a60_89:\n");
                for(i=0;i<i0_59;i++)
                    {
                            printf("%d\n",a0_59[i]);
                    }
            
                
                
    }
    
    
    

    
    

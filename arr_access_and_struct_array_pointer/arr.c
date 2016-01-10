#include <stdio.h>                                                              
                                                                                 
int main(void)                                                                   
{                                                                                
                                                                                 
    //Var declaration for lab2                                                   
    typedef struct _HAL_NAND_AUBuf_t {                                          
        void* auBuf[4*4];                                                        
    } HAL_NAND_auBuf_t;                                                          
    HAL_NAND_auBuf_t  elauBuf_t;                                                 
    HAL_NAND_auBuf_t* pauBuf = &elauBuf_t;                                       
                                                                                
                                                                                
    printf("=================== Lab 1 ===================\n");                  
    printf("This lab:\n");                                                      
    printf("Although two dimision array is stored in one line in memory, but\n");
    printf("still have to call the second row element by two indexes.\n");      
                                                                                
    int arr[2][3] = {{1,2,3},{4,5,6}};                                          
    printf("From following output, we know arr[4] is an incorrect call\n");     
    printf("a[4] != a[1][1]\n");                                                
    printf("arr[4] = %d\n", arr[4]);                                            
    printf("From following output, we can call real 4th element of this 2 dimenion array\n");
    printf("arr[1][1] = %d\n", arr[1][1]);                                      
                                                                                
    printf("From the following output, we know we can call the second row\n");  
    printf("element with one index by pointer\n");                               
    int* parr = NULL;                                                            
    parr = &arr[0][0];                                                           
    printf("arr[4] = %d\n", *(parr+4));                                          
                                                                                 
                                                                                 
    printf("=================== Lab 2 ===================\n");                   
    printf("This lab is to show how to call one element in an array within struct\n");
    printf("For example: pauBuf->auBuf[0]\n");                                   
    char   letter = 'd';                                                         
    char* pletter = &letter;                                                     
    pauBuf->auBuf[0] = (void*)pletter;                                           
    printf("The first  char stored is %c\n", *(char*)pauBuf->auBuf[0]);          
                                                                                 
    letter = 'f';                                                                
    pauBuf->auBuf[1] = (void*)pletter;                                          
    printf("letter = %c\n", *pletter);                                           
    printf("The second char stored is %c\n", *(char*)pauBuf->auBuf[1]);         
                                                                                
    return 0;                                                                   
}                                                                               

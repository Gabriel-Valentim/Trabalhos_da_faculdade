# include <stdio.h>

 main (){

    int y , *p , x ;
    y = 3; // coloca um valor para y
    p = &y ; // passa para p o valo de y, assim p passa a valer 3
    x = *p ; // x recebe o valor do endereço de p
    x = 7;
    (*p)++;
    printf("%i", x);
 }


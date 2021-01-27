# include <stdio.h>

 main (){

    int y , *p , x ;
    y = 3; // coloca um valor para y
    p = &y ; // passa para p o valo de y, assim p passa a valer 3
    x = *p ; // x recebe o valor que se encontra no endereço de p passando a valer 3
    x = 7; // x recebe 7 e passsa a valer esse valor
    (*p)++; // é somado 1 ao numero que se encontra em p, sendo agora 4
    x--; // é subtraido 1 do numero q se encontra em x, sendo agora 6
    (*p ) = (*p ) + x ; // p recebe ele mesmo mais o valor de x, a soma deles da 10
    printf ("y = %i\n", y ) ; // ao fim é mostrado o valor de y sendo 10

}


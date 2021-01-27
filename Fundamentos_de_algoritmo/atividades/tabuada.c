//tabuada

int main(){

    int num, num2, tab;

    tab = 0;

    printf("Qual numero voce quer saber a tabuada ?\n");
    scanf("%i", &num);

    while(tab < 10){
        tab++;
        num2 =  num * tab;
        printf("%i vezes %i e = %i\n", num, tab, num2);
        num2 = 0;
    }



}

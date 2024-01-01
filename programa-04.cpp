#include <iostream>
#include <cstdlib>
main()
{
    //definição de variaveis
    float n1, n2, n3, media;

    //entrada de dados
    printf("Digite o varlor de n1, n2 e n3:");
    scanf ("%f%f%f", &n1,&n2, &n3);

    //operação
    media=(n1+n2+n3)/3;

    //saida de dados
    printf("O valor de n1 eh:");
    printf("%f", n1);
    printf(" O valor de n2 eh:");
    printf("%f", n2);
    printf(" O valor de n3 eh:");
    printf("%f", n3);
    printf(" O valor da media eh:");
    printf("%f", media);

    system("PAUSE");
    }
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    printf("C�digo feito por Gabriel Bardini Silmann de Godoy\nDigite a coordenada do alvo acertado (x,y):\n");
    int x,y;
    char* resultado;
    scanf("%d %d", &x, &y);
    if (x>10 || x<-10 || y>10 || y<-10)
    {
        resultado="Voc� errou o alvo";
        printf("%s.", resultado);
    }
    else if ((x>5 && x<11 || x<-5 && x>-11) || (y>5 && y<11 || y<-5 && y>-11))
    {
        resultado="Voc� fez 1 ponto";
        printf("%s.", resultado);
    }
    else if ((x>1 && x<6 || x<-1 && x>-6) || (y>1 && y<6 || y<-1 && y>-6))
    {
        resultado="Voc� fez 5 pontos";
        printf("%s.", resultado);
    }
    else
    {
        resultado="Voc� fez 10 pontos";
        printf("%s.", resultado);
    }
    return 0;
}

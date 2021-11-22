#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int Berga;
    int Berga_1=1;
    int Berga_2=1;
    int Berga_3=1;
    int i;

    printf("Pressione qualquer tecla para iniciar a serie de Bergamaschi\n");
    system("pause");

    for(i=0; i<20; i++){
        printf("%d\n", Berga);
        Berga = Berga_1 + Berga_2 + Berga_3;
        Berga_1 = Berga_2;
        Berga_2 = Berga_3;
        Berga_3 = Berga;
    }
return 0;
}

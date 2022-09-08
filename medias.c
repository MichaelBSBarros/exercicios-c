int main (void){

    float nota1;
    float nota2;
    float nota3;
    float notas[3];
    float media;
    char tipomedia[10];

    for (int i = 0; i <= 2; i=i+1 ){
        printf("\n");
        printf("Informe a %da nota: ",i+1);
        scanf("%f", &notas[i]);
    }

    printf("\n");
    printf("DIGITE QUAL O TIPO DE MEDIA: ");

    printf("\n 1 - ARITMETICA ");
    printf("\n 2 - PONDERADA ");
    printf("\n");
    scanf("%f", &media);

    if(media == 1){
        media = (notas[0]+notas[1]+notas[2])/3;
         strcpy(tipomedia, "ARITMETICA");
    } else if (media == 2){
        media = ((notas[0]*1)+(notas[1]*2)+(notas[2]*3))/(1+2+3);
        strcpy(tipomedia, "PONDERADA");
    }
    printf("\n");
    printf("MEDIA %s", tipomedia);
    printf(" = %.1f", media);
    printf("\n");
}

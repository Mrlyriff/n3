#include <stdio.h>
#include <locale.h>

 int main(){
      setlocale(LC_ALL, "Portuguese");
 
    // !showMemory(start=65520)
    float notas[5][3];
    char nomes[5][50];
    float media[5];
    int linha, coluna;
    float soma = 0;
    int i;
    int contadora_notas = 0;
    
    
    for (i=0; i<5; i++){
         soma = 0;
         printf("Digite seu nome: \n");
         gets(nomes[i]);
         for (contadora_notas = 0; contadora_notas < 3; contadora_notas++){
              printf("Digite sua nota: \n");
              scanf("%f", &notas[i][contadora_notas]);
              soma += notas[i] [contadora_notas];
       
        }
        soma = soma / 3;
        printf("A media do aluno %s é: %.2f", nomes[i], soma);
        
        
        return 0;
        
        
  }            
 }

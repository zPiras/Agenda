#include <math.h>
#include <stdio.h>
#include <string.h>

#define VET_Person 10

typedef struct Pessoa {
    int codigo[50];
    char nome[50];
    char data[8];
    char fone[19];
    char email[50];
    char obseracao[100];
} Pessoa;

void menu(){
    printf("--------------------------------");
    printf("\n------------AGENDA------------");
    printf("--------------------------------");
    printf("\n01- Cadatrar contato");
    printf("\n02- Listar contato");
    printf("\n03- Buscar contato");
    printf("\n03- Sair\n");
    
}

int cad(Pessoa pessoa[VET_Person], int count) {
    int numero;

    printf("Quantos contatos voce deseja adicionar?");
    scanf("%d", &numero);
    for (int i = 0; i < numero;i++){
        printf("Informe o codigo: ");
        scanf("%d", &pessoa[i].codigo);
        printf("Informe o nome do contato: ");
        scanf("%s", &pessoa[i].nome);
        printf("Informe email:  ");
        scanf("%s", &pessoa[i].email);
        printf("Informe a data de nascimento:  ");
        scanf("%s", &pessoa[i].data);
        printf("Infome o telefone:  ");
        scanf("%s", &pessoa[i].fone);
        printf("Obervacao:  ");
        scanf("%s", &pessoa[i].obseracao);
    }

}

int lista(Pessoa pessoa[VET_Person],int count){
    if (count==0){
        printf("Nao a contatos!");
        }else {
            for (int i = 0; i < count; i++)
            {
                printf("\n%d", pessoa[i].codigo);
                printf("\n%s", pessoa[i].nome);
                printf("\n%s", pessoa[i].email);
                printf("\n%s", pessoa[i].data);
                printf("\n%s", pessoa[i].fone);
                printf("\n%s", pessoa[i].obseracao);

            }
            
        }
    
   
}


void buscar() {
    int buscar;
    int encontrou;
    int pessoa;

    printf("\nInforme o codico da pessoa que deseja pesquisar: ");
    scanf("%d", &buscar);

    for(int cont = 0; cont < 10; cont++) {

        if(buscar == pessoa[cont].codico){

            printf("\nNome: %s", &pessoa[cont].nome);
            printf("\nTelefone: %s", &pessoa[cont].fone);
            printf("\nEmail: %s", &pessoa[cont].email);
            printf("Idade: %s", &pessoa[cont].data);
            printf("Observacao: %s", &pessoa[cont].observacao);
            encontrou = 1;
            break;
        }
    }

     if (!encontrou){
         printf("Contato nao cadastrado");
     }
}

int main (){

int count=0;

int op; 
  Pessoa pessoa[VET_Person];
while (op!=0){

    menu();

    scanf("%d", &op);

    switch (op){
        case 1: 
         count += cad(pessoa, count);
          case 2:
          lista(pessoa, count);
           case 3:
            buscar();

        
                case 4:
                 printf("\n\tSaindo...");
                  



    }

} while(op != 4);


}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

struct Pessoa{
    char* nome;
    int idade;
    char telefone[30];
    char* email;
    char* obervacao;
}pessoa[MAX];

void exibirMenu(){
    printf("\n\tSelecione umas das opcoes a seguir:\n");
    printf("\n01 - Cadastrar contato\n"
           "\n02 - Listar contatos\n"
           "\n03 - Pesquisar contato\n"
           "\n04 - Alterar contato\n"
           "\n05 - Sair\n\n");
}

void exibirContato(int indice){
    printf("\n\tNome: %s\n", pessoa[indice].nome);
    printf("\nIdade: %d\n", pessoa[indice].idade);
    printf("\nTelefone: %s\n", pessoa[indice].telefone);
    printf("\nEmail: %s\n", pessoa[indice].email);
    printf("\nObservacao: %s\n", pessoa[indice].obervacao);
}

char* alocarMemoria(int tamanho){
    char* info = NULL;
    info = (char*) malloc(sizeof(tamanho) * sizeof(char));

    if(info == NULL){
        printf("ERRO: impossivel alocar a quantidade de memoria requisitada!");
        exit(1);
    }
    return info;
}

void cadastrarContato(int registro){
    char dados[MAX];
    printf("\n\t\tNome: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    pessoa[registro].nome = alocarMemoria(strlen(dados));
    strcpy(pessoa[registro].nome, dados);

    printf("\t\tIdade: ");
    scanf("%d", &pessoa[registro].idade);
    setbuf(stdin, NULL);

    printf("\t\tTelefone: ");
    scanf("%[^\n]s", pessoa[registro].telefone);
    setbuf(stdin, NULL);

    printf("\t\tEmail: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    pessoa[registro].email = alocarMemoria(strlen(dados));
    strcpy(pessoa[registro].email, dados);

    printf("\t\tObservacao: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    pessoa[registro].obervacao = alocarMemoria(strlen(dados));
    strcpy(pessoa[registro].obervacao, dados);

}

void listarContatos(int qtdeContatos){
    int i;
    int contagem = 1;
    for(i = 0; i < qtdeContatos; i++){
        printf("\n\tContato nº: %d\n", contagem++);
        printf("\tNome: %s\n", pessoa[i].nome);
        printf("\tIdade: %d\n", pessoa[i].idade);
        printf("\tTelefone: %s\n", pessoa[i].telefone);
        printf("\tEmail: %s\n", pessoa[i].email);
        printf("\tObervacao: %s\n", pessoa[i].obervacao);

    }
    printf("\n\n");
}

void alterar(int indice){
    char* nome;
    int idade;
    char telefone[16];
    char* email;
    char obervacao;

    char dados[MAX];
    printf("\n\t\tNome: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    nome = alocarMemoria(strlen(dados));
    strcpy(nome, dados);

    printf("\t\tIdade: ");
    scanf("%d", &idade);
    setbuf(stdin, NULL);

    printf("\t\tTelefone: ");
    scanf("%[^\n]s", telefone);
    setbuf(stdin, NULL);

    printf("\t\tEmail-: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    email = alocarMemoria(strlen(dados));
    strcpy(email, dados);

    printf("\t\tObservacao: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    obervacao = alocarMemoria(strlen(dados));
    strcpy(obervacao, dados);

    pessoa[indice].nome = nome;
    pessoa[indice].idade = idade;
    strcpy(pessoa[indice].telefone, telefone);
    pessoa[indice].email = email;
    pessoa[indice].obervacao = obervacao;
}


int pesquisarContato(int qtdeContatos, char* nomeBuscado){
    int i;

    for(i = 0; i < qtdeContatos; i++){
        if(strcmp(nomeBuscado, pessoa[i].nome) == 0)
            return i;
    }
    return -1;
}

int leitor(){
    int opcao;

    printf("\n\tOpcao escolhida: ");
    scanf("%d", &opcao);
    setbuf(stdin, NULL);

    return opcao;
}

int main(){
    char nome[MAX];
    int numeroRegistro = 0;
    int opcaoEscolhida;
    int indice;

    do{
        exibirMenu();
        opcaoEscolhida = leitor();

        switch(opcaoEscolhida){
            case 1:
                cadastrarContato(numeroRegistro++);
                break;
            case 2:
                listarContatos(numeroRegistro);
                break;
            case 3:
                printf("\n\tNome: ");
                scanf("%[^\n]s", nome);
                indice = pesquisarContato(numeroRegistro, nome);

                if(indice >= 0 && indice <= 99)
                    exibirContato(indice);
                else
                    printf("\n\tContato não cadastrado!");
                break;
                
            case 4:
                printf("\n\tContato número [1 - 99]: ");
                scanf("%d", &indice);
                indice -= 1;
                if(indice >= 0 && indice <= 99)
                    alterar(indice);
                else
                    printf("\n\tContato inválido!");
                break;
    
              case 5:
                printf("\n\tSaindo...");
                break;
            default:
                printf("Opção inválida!");
                exibirMenu();
                opcaoEscolhida = leitor();
        }

    }while(opcaoEscolhida != 5);
}
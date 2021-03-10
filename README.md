#include<stdio.h>
#include<conio.h>


int main (){
	

int op;
struct 	Agenda{
	


char nome[10];	
char email[10]; 
char telefone[10];
char datadenacismento[10];

};


struct Agenda contato;

printf("\n      Digite o nome do contato     \n"); 
fflush(stdin);
fgets(contato.nome,10,stdin); 


printf("\n      Digite o email      \n"); 
fflush(stdin); 
fgets(contato.email,10,stdin); 

printf("\n      Digite o telefone      \n");
fflush(stdin);
fgets(contato.telefone,10,stdin);


printf("\n      Digite a data de nascimento.      \n");
fflush(stdin);
fgets(contato.datadenacismento,10,stdin);


printf("O nome do contato e : %s \n",contato.nome); 
printf("O email do contato e : %s \n",contato.email);
printf("O telefone do contato e : %s \n",contato.telefone); 
printf("A data de nascimento do contato e : %s \n",contato.datadenacismento); 




printf("Deseja reiniciar o programa para alterar os dados do contato?\n");
printf("Ecolha a opcao desejada\n");

printf("1.Reiniciar\n"); 
printf("2.Finalizar\n");
scanf("%d",&op);

if(op==1)

main(); 

if(op==2)



return 0;
getchar();

}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100

  // Uma estrutura TIPO_DATA
       struct tipo_data
              {
              int dia; //  dia
              int mes; //  mês 
              int ano; //  ano
              };
       
  // Uma estrutura TIPO_AGENDA
       struct tipo_agenda
              {
              char nome[50]; 
              char ddd[2]; 
              long int tel; 
              char endereco[60];
              char e_mail[50];
              char obs[100];
              struct tipo_data data;
              };

  // Declara uma matriz de estrutura do tipo "struct tipo_agenda" AGENDA
            struct tipo_agenda agenda[TAM];  
           


  // Protótipos das Funções
int menu(); 
void CADASTRAMENTO(void);
void PESQUISA(void);
void EDITAR(void);
void EXCLUIR(void);
void LISTAR(void);


int continuar;
int cont=0;


int main() // ~~~~~~~~~~~~~~~~~~~~~~~~~~ MAIN
         {     
    
         int j;
         char* times;
         char bvnome[40];  
         int i;  

         for(j=0; j<TAM; j++)
                            {
                            agenda[j].tel=7777777;  // Prenchendo os campos de TELEFONE com 7777777 para indicar AGENDA COM ESPAÇO VAZIO
                            }    
  
    
      
///////////////////////////  MENU PRINCIPAL ////////////////////////////

         int opcoes;
  
         do{     
            
            opcoes=menu(); // chamada da função MENU

            switch(opcoes){
            case 1:
                 CADASTRAMENTO(); 
                 break;
            case 2:
                 EDITAR();        
                 break;
            case 3:
                 EXCLUIR();     
                 break;
            case 4:
                 system("cls");
                 LISTAR();  
                 system("pause");
                 break;
            case 5:
                 PESQUISA();     
                 break;
            case 6:
                 exit(0);
                 break;
                        }
            }while(opcoes!=8);
            

            printf("\n\n");

            return 0;
}  // ~~~~~~~~~~~~~~~~~~~~~~~~~~FIM  da MAIN 






int menu(void) // FUNÇÃO  MENU
{
  int a;
  
  do{
    
     system("cls");
     printf("\n\n");    



     printf("\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",3017,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3003);
     printf("\t\t\t%c       AGENDA       %c\n",3002,3002);
     printf("\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3016,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3004);

     printf("\n\n");
     printf("\t\t  1  %c   CADASTRAMENTO DE CONTATOS\n\n\t\t  2  %c   EDITAR\n\n\t\t  3  %c   EXCLUIR\n\n\t\t  4  %c   LISTAR\n\n\t\t  5  %c   PESQUISAR\n\n\t\t   6  %c   SAIR\n\n",16,16,16,16,16,16,16,136,16);
     printf("\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~            %c     ",26);
          
    
     scanf("%d",&a);
   
     }
     while((a<1) || (a>8));
    
 return a;
    
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void CADASTRAMENTO(void) // FUNÇÃO  CADASTRAMENTO
 {

 system("cls");
 int i;
     
     
     
 if(cont < TAM)
 {
            for(i=0; i<TAM; i++)
            {
                     if(agenda[i].tel==7777777) // Só vai cadastrar nas agendas que tiverem 7777777 no TELEFONE
                     {
                                                
                                                
                      printf("\n\n");   
                      printf("\t\t ~~~~~~~~~~~~~~~~  CADASTRAMENTO  ~~~~~~~~~~~~~~~~\n\n");
                      printf("\t\t ~~~~~~~~~~~~~~~~~~  DE  CONTATOS  ~~~~~~~~~~~~~~~~~~\n\n");
                      printf("\n\n");
                      printf("\n\n");
                      
                      printf("Por favor, preencha os campos abaixo. \n\n");                          
                     //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                     

                      fflush(stdin); //Limpar Buffer do Teclado
                      printf("\n\n");
                      printf(" Nome completo :   ");
                      gets(agenda[i].nome);
                      printf("\n\n");

                     //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                      printf(" Data de Nascimento:   \n");  
                     
                     // Validacao DIA
                      do{ 
                         printf(" DIA :   "); 
                         scanf("%d",&agenda[i].data.dia);
                         if ((agenda[i].data.dia < 01) || (agenda[i].data.dia > 31))
                                         {
                                         printf("Informe uma Data Valida: \n");
                                         } 
                        }while ((agenda[i].data.dia < 01) || (agenda[i].data.dia > 31));
                     
                     // Validacao MES
                      do{              
                      printf(" MES :   "); 
                      scanf("%d",&agenda[i].data.mes);
                      if((agenda[i].data.mes < 01) || (agenda[i].data.mes > 12))
                                         {
                                         printf ("Digite um Mes Valido: \n"); 
                                         }                       
                        }while((agenda[i].data.mes < 01) || (agenda[i].data.mes > 12));
                       
                     
                     // Validacao ANO
                      do{                                                 
                        printf(" ANO :   ");
                        scanf("%d",&agenda[i].data.ano);
                        if ((agenda[i].data.ano <= 0) || (agenda[i].data.ano >= 9999 ))
                                        {                     
                                        printf("Digite um Ano Valido: \n");
                                        }
                        }while((agenda[i].data.ano <=0) || (agenda[i].data.ano >= 9999 ));
                       
                     
                     //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                     printf("\n\n");
                     do{
                        printf(" DDD :  ");
                        scanf("%s",&agenda[i].ddd);
                        if(strlen(agenda[i].ddd) != 2) 
                                {
                                printf("Digite um DDD Valido: \n");                   
                                }                
                     }while (strlen(agenda[i].ddd) != 2); 
                     //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                     printf("\n\n");
                     printf(" Telefone (sem hifen):   ");
                    
                     do{
                        scanf("%d",&agenda[i].tel);
                        }while(agenda[i].tel==7777777);
                     //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                     printf("\n\n");
                     printf(" E_mail :   ");
                     scanf("%s",agenda[i].e_mail);
                     //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                     
                     fflush(stdin); //Limpar Buffer do Teclado
                     printf("\n\n");
                     printf(" Endereco Completo:  ");
                      
                     gets(agenda[i].endereco);
                     //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

                     printf("\n\n");                      
                     printf(" Obs:  ");  
                     gets(agenda[i].obs);
                     //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                     system("cls");
                     printf("\n\n");
                     printf("    Cadastro conclu%cdo com sucesso!   ",3745); printf("\n\n"); printf("\n\n");
                     system("PAUSE");
                     
                     printf("\n\n");
                     system("cls"); 
                   
                     cont++;
                     break;
                     }
            }
 }


if(cont < TAM){
              system("cls");
              printf("\t\tDeseja continuar?   \n\n");
              printf(" 1 - Sim   \n\n 2 - não\n\n");
              scanf("%d",&continuar);
              while(continuar!=1 && continuar!=2)
                {
                system("cls");
                printf("\t\tDeseja continuar?   \n\n");
                printf(" 1 - Sim   \n\n 2 - não\n\n");
                scanf("%d",&continuar);                   
                }
             
             if(continuar==1)
                            {
                            CADASTRAMENTO();
                            }

               }


if(cont == TAM)
              {
               printf("\n\n No momento, a agenda esta cheia! \n\n");
               system("pause");
              } 
       
}



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void PESQUISA() // FUNÇÃO  PESQUISA
     {
     int i;
     char nome_busca[50];
     int nao_tem=999;
     system("cls");
     fflush(stdin); //Limpar Buffer do Teclado
     printf(" Informe o <Nome Completo> %c   ",26);
     gets(nome_busca);
           
     for(i=0; i<TAM; i++)
     {
             if(agenda[i].tel!=7777777)
             {
                         if(strcmp(agenda[i].nome,nome_busca)==0) // So vai listar as Fichas com os Nomes iguais aos digitados.
                         {

                          printf(" ------------------------------------------------------------------\n");                        
                          printf(" Nome Completo:  %s",agenda[i].nome);
                          printf("\n\n");
                          printf(" Data de Nascimento:  %d / %d / %d",agenda[i].data.dia,agenda[i].data.mes,agenda[i].data.ano);
                          printf("\n\n");
                          printf(" DDD:  %c%c",agenda[i].ddd[0],agenda[i].ddd[1]);
                          printf("\n\n");
                          printf(" Telefone: %d",agenda[i].tel); 
                          printf("\n\n"); 
                          printf(" Endereco: %s",agenda[i].endereco);
                          printf("\n\n"); 
                          printf(" E_mail:  %s",agenda[i].e_mail);
                          printf("\n\n");
                          printf(" Observacoes:  %s",agenda[i].obs);
                          printf("\n\n");
                          printf(" ------------------------------------------------------------------\n");  
                     
                          nao_tem=0;
                          }
             }
     }
            
    
     if(nao_tem==999){
                      system("cls");
                      printf("\n  não foi encontrado nenhum dado correspondente. \n\n");
                      printf("  Certifique-se de que todas as palavras estejam escritas corretamente.\n\n\n\n\n\n");
                      }
                      
     system("PAUSE");                
     system("cls");
     printf("\t\tDeseja continuar?   \n\n");
     printf(" 1 - Sim   \n\n 2 - não\n\n");
     scanf("%d",&continuar);
     
     while(continuar!=1 && continuar!=2)
                                       {
                                       system("cls");
                                       printf("\t\tDeseja continuar?   \n\n");
                                       printf(" 1 - Sim   \n\n 2 - não\n\n");
                                       scanf("%d",&continuar);                   
                                       }
             
      if(continuar==1)
      {
      PESQUISA();
      } 
                             

      system("cls");
      }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void EDITAR(void) // FUNÇÃO  EDITAR
{
     
     fflush(stdin); //Limpar Buffer do Teclado
     int i,a;
     char nome_busca[50];
     int nao_tem=999;
     
     system("cls");
     printf("\n\n");   
     printf("\t\t ~~~~~~~~~~~~~~~~  EDITAR  ~~~~~~~~~~~~~~~~\n\n");
     printf("\n\n");
     printf("\n\n");
     fflush(stdin); //Limpar Buffer do Teclado
     printf(" Informe o <Nome Completo> %c   ",26);
     
     gets(nome_busca);


     for(i=0; i<TAM; i++)
     {
      if(agenda[i].tel!=7777777)
                 {
                 if(strcmp(agenda[i].nome,nome_busca)==0) 
                           {
                                    
                           do{
                                    
                              system("cls");
  
                              printf("\t\t ~~~~~~~~~~~~~~~~  EDITAR  ~~~~~~~~~~~~~~~~\n\n");
                              printf("\n\n");
                              printf("\n\n");
                              printf("1 ~ Nome\n2 ~ Data de Nascimento\n3 ~ DDD\n4 ~ Telefone\n5 ~ E_mail\n6 ~ Endereco\n7 ~ Observacoes\n8 ~ Sair.\n\n");
                              printf("\n\n");
                              scanf("%d",&a);
                              printf("\n\n");
                              printf("\n\n");
                 
                               switch(a){
                                case 1:

                                      fflush(stdin); //Limpar Buffer do Teclado
                                      printf(" Informe o novo <Nome completo> :  ");
                                      gets(agenda[i].nome);
                                      break;
                                case 2:
                                      printf(" Informe a nova <Data de Nascimento>:   \n");
                                    
                                      printf(" DIA: ");
                                      scanf("%d",&agenda[i].data.dia);
                                   
                                      printf(" MES: ");
                                      scanf("%d",&agenda[i].data.mes);
                                    
                                      printf(" ANO: ");
                                      scanf("%d",&agenda[i].data.ano);
                                      break;
                                case 3:
                                      printf(" Informe o novo <DDD> : ");
                                      scanf("%s",&agenda[i].ddd);
                                      break;
                                case 4:
                                      printf(" Informe o novo <Telefone>:  ");
                                           do{
                                              scanf("%d",&agenda[i].tel);
                                              }while(agenda[i].tel==7777777);
                                      break;
                                case 5:
                                      printf(" Informe o novo <E_mail> :  ");
                                      scanf("%s",agenda[i].e_mail);
                                      break;
                                case 6:
                                      fflush(stdin); //Limpar Buffer do Teclado
                                      printf(" Informe o novo  <Endereco>:  ");
                                      gets(agenda[i].endereco);
                                      break;
                                case 7:
                                      printf("Obs:  ");  
                                      gets(agenda[i].obs);
                                      break;
                                case 8:
                                      break;
                                      }                                   
    
                              }while((a<1) || (a>8));
                                     nao_tem=0;
                                     
                           }
                 }
                     
     }
     
     if(nao_tem==999)
     {
     system("cls");
     printf("\n  não foi encontrado nenhum dado correspondente. \n\n");
     printf("  Certifique-se de que todas as palavras estejam escritas corretamente.\n\n\n\n\n\n");
     }
               
               
     system("PAUSE");                
     system("cls");
     printf("\t\tDeseja continuar?   \n\n");
     printf(" 1 - Sim   \n\n 2 - não\n\n");
     scanf("%d",&continuar);
     while(continuar!=1 && continuar!=2)
             {
             system("cls");
             printf("\t\tDeseja continuar?   \n\n");
             printf(" 1 - Sim   \n\n 2 - não\n\n");
             scanf("%d",&continuar);                   
             }
             
     if(continuar==1){
                     EDITAR();
                     } 
  
     system("cls");
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void EXCLUIR(void) // FUNÇÃO  EXCLUIR
{
                   
     int i,a;
     char nome_busca[50];
     
     
     system("cls");
     printf("\n\n");   
     printf("\t\t ~~~~~~~~~~~~~~~~  EXCLUIR  ~~~~~~~~~~~~~~~~\n\n");
     printf("\n\n");
     printf("\n\n");
     fflush(stdin); //Limpar Buffer do Teclado
     printf(" Informe o <Nome Completo> %c   ",26);
     
     int nao_tem=999;
     gets(nome_busca);


            for(i=0; i<TAM; i++)
            {
                     if(!strcmp(agenda[i].nome,nome_busca)) 
                      {
                       agenda[i].tel=7777777; 
                       nao_tem=0;
                       system("cls");
                       printf("\n\n   Exclus%co conclu%cda com sucesso! \n\n\n",3782,3745);
                      
                       printf("\n\n");
                       printf("\n\n");
                      
                       cont--;
                       }

            }
            
     if(nao_tem==999)
     {
     system("cls");
     printf("\n  não foi encontrado nenhum dado correspondente. \n\n");
     printf("  Certifique-se de que todas as palavras estejam escritas corretamente.\n\n\n\n\n\n");
     }
                             
     system("PAUSE");                
     system("cls");
     printf("\t\tDeseja continuar?   \n\n");
     printf(" 1 - Sim   \n\n 2 - não\n\n");
     scanf("%d",&continuar);
     while(continuar!=1 && continuar!=2)
             {
             system("cls");
             printf("\t\tDeseja continuar?   \n\n");
             printf(" 1 - Sim   \n\n 2 - não\n\n");
             scanf("%d",&continuar);                   
             }

     if(continuar==1){
                      EXCLUIR();
                      }                     
                             
                             
     system("CLS");                            
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void LISTAR(void) // FUNÇÃO LISTAR
{
     
     printf(" ------------------------------------------------------------------\n"); 
     printf("\n\n");
    
     int i;
     int nao_tem=999;
     for(i=0; i<TAM; i++)
     {
                     if(agenda[i].tel!=7777777){
                                              
                     
                                           
                     printf(" Nome Completo:  %s \n",agenda[i].nome);
                     printf(" ------------------------------------------------------------------\n"); 
                     printf("\n");
                     nao_tem=0;
                     }
                     
      }
            
     if(nao_tem==999)
     {
     system("cls");
     printf("\n  não foi encontrado nenhum dado correspondente. \n\n");
     printf("  Certifique-se de que todas as palavras estejam escritas corretamente.\n\n\n\n\n\n");
     }
            
     system("PAUSE");
     system("cls");
}



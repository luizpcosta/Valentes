#include <stdlib.h>
#include <stdio.h>


int main()
{
int Quantia,QNotas100,QNotas50,QNotas20,QNotas10,QNotas5,QNotas2,
        Notas100,Notas50,Notas20,Notas10,Notas5,Notas2,Notas100Caixa,
        Notas50Caixa,Notas20Caixa,Notas10Caixa,Notas5Caixa,Notas2Caixa,NNotas50,NNotas20,NNotas10,NNotas5,NNotas2,
        Senha,SenhaCaixa,Recarga100,Recarga50,Recarga20,Recarga10,Recarga5,Recarga2;
        
       
        Notas100Caixa=100;
        Notas50Caixa=100;
        Notas20Caixa=100;
        Notas10Caixa=100;
        Notas5Caixa=100;
        Notas2Caixa=100;
        
        
        
        SenhaCaixa = 1234;
        
        printf("Caixa Eletronico.\n\nNotas Disponiveis 100,50,20,10,5,2.\n");
                  
                      
        do{
                   printf("Digite a Quantidade a ser Sacada.\n");
                   scanf("%d",&Quantia);
                   /*do
                     {   
                                 printf("Valor de Quantia incorreto. Verifique as Notas Disponiveis.\n");
                     
                     }while(((Quantia % 100 != 3)||(Quantia % 50 != 3)||(Quantia % 20 != 3) ||(Quantia % 10 != 3)||(Quantia % 100 != 1)||(Quantia % 50 != 1)||(Quantia % 20 != 1)||(Quantia % 10 != 1)));*/                                 
                   QNotas100 = (Quantia / 100);                                                            
                   //printf("%d\n",Notas100);
                   Notas100 = Notas100Caixa;
                   if (QNotas100 > 0){
                                 Notas100Caixa = (Notas100 - QNotas100);
                                 printf("Notas de 100 a serem Sacadas: %d.\n",QNotas100);
                                 printf("Notas de 100 no Caixa: %d.\n",Notas100Caixa);
                                             
                   }
                   else
                   {
                       printf("Notas de 100 a serem Sacadas: não se Aplica.\n");
                   }
                   //printf("%d",Notas100); 
                    
                    
                    if (Notas100 <= 0)
                    {
                                 do
                                 {
                                     printf("Notas de 100 Indisponiveis no Momento.Favor Recarregar.\n");
                                     printf("Digite a Senha pra fazer recarga de Notas.\n");
                                     scanf("%d",&Senha);
                                     if(Senha == SenhaCaixa)
                                     {            
                                          printf("Digite o Valor para Recarga para Notas de 100. (OBS: No maximo 100.)\n");
                                          scanf("%d",&Recarga100);
                                          if (Recarga100 > 100)
                                          {
                                                                  printf("Erro\nValor de recarga invalido.Verifique.\n");
                                          }
                                          else
                                          {
                                              printf("Recarga realizada com sucesso.\n");
                                              Notas100Caixa = Recarga100;
                                          }                        
                                          //printf("%d\n",Notas100);
                                     }
                                     else
                                         {
                                                   printf("Senha Invalida.\n");
                                         }
                                 }while(Notas100 = 0);
                    }                      
                                 
                    
                    
                    QNotas50 = (Quantia % 100);
                    if (QNotas50 >= 50)
                    {
                                 NNotas50 = (QNotas50 / 50);
                                  Notas50=Notas50Caixa;
                                 if (NNotas50 > 0)
                                 {
                                              Notas50Caixa = (Notas50 - NNotas50);
                                              printf("Notas de 50 a serem Sacadas: %d.\n",NNotas50);
                                              printf("Notas de 50 no Caixa: %d.\n",Notas50Caixa);
                                 }
                                 else
                                     {
                                              printf("Notas de 50 a serem Sacadas: não se Aplica.\n");
                                     } 
                               
                    }
                    else
                    {
                        printf("Notas de 50 a serem Sacadas: não se Aplica.\n");
                    }              
                    //Notas50=Notas50Caixa;
                    
                    if (Notas50 <= 0)
                    {
                                do
                                 {
                                     printf("Notas de 50 Indisponiveis no Momento.Favor Recarregar.\n");
                                     printf("Digite a Senha pra fazer recarga de Notas.\n");
                                     scanf("%d",&Senha);
                                     if(Senha == SenhaCaixa)
                                     {            
                                          printf("Digite o Valor para Recarga para Notas de 50. (OBS: No maximo 100.)\n");
                                          scanf("%d",&Recarga50);
                                         if (Recarga50 > 100)
                                         {
                                                                  printf("Erro\nValor de recarga invalido.Verifique.\n");
                                         }
                                         else
                                         {
                                             printf("recarga Com notas de 50 realizada com sucesso.\n");                                            
                                             Notas50Caixa = Recarga50;
                                         }
                                     }   
                                     else
                                         {
                                                   printf("Senha Invalida.\n");
                                         }
                                 }while(Notas50 = 0);
                    }
                    
                    QNotas20 = (QNotas50 % 50);
                    if ((QNotas20 >= 20) || (QNotas20 >=40))
                    {
                                 NNotas20 = (QNotas20 / 20);
                                  Notas20=Notas20Caixa;
                                 if (NNotas20 > 0)
                                 {
                                              Notas20Caixa = (Notas20 - NNotas20);
                                              printf("Notas de 20 a serem Sacadas: %d.\n",NNotas20);
                                              printf("Notas de 20 no Caixa: %d.\n",Notas20Caixa);
                                 }
                                 else
                                     {
                                              printf("Notas de 20 a serem Sacadas: não se Aplica.\n");
                                     } 
                               
                    }
                     else
                         {
                               printf("Notas de 20 a serem Sacadas: não se Aplica.\n");
                         } 
                    
                    if (Notas20 <= 0)
                    {
                                do
                                 {
                                     printf("Notas de 20 Indisponiveis no Momento.Favor Recarregar.\n");
                                     printf("Digite a Senha pra fazer recarga de Notas.\n");
                                     scanf("%d",&Senha);
                                     if(Senha == SenhaCaixa)
                                     {            
                                          printf("Digite o Valor para Recarga para Notas de 20. (OBS: No maximo 100.)\n");
                                          scanf("%d",&Recarga20);
                                         if (Recarga20 > 100)
                                         {
                                                                  printf("Erro\nValor de recarga invalido.Verifique.\n");
                                         }
                                         else
                                         {
                                             printf("recarga Com notas de 20 realizada com sucesso.\n");                                            
                                             Notas20Caixa = Recarga20;
                                         }
                                     }   
                                     else
                                         {
                                                   printf("Senha Invalida.\n");
                                         }
                                 }while(Notas20 = 0);
                    }
                    
                    QNotas10 = (QNotas20 % 20);
                    if (QNotas10 >= 10)
                    {
                                 NNotas10 = (QNotas10 / 10);
                                  Notas10=Notas10Caixa;
                                 if (NNotas10 > 0)
                                 {
                                              Notas10Caixa = (Notas10 - NNotas10);
                                              printf("Notas de 10 a serem Sacadas: %d.\n",NNotas10);
                                              printf("Notas de 10 no Caixa: %d.\n",Notas10Caixa);
                                 }
                                 else
                                     {
                                              printf("Notas de 10 a serem Sacadas: não se Aplica.\n");
                                     } 
                               
                    }
                    else
                        {
                               printf("Notas de 10 a serem Sacadas: não se Aplica.\n");
                        }
                    
                    if (Notas10 <= 0)
                    {
                                do
                                 {
                                     printf("Notas de 10 Indisponiveis no Momento.Favor Recarregar.\n");
                                     printf("Digite a Senha pra fazer recarga de Notas.\n");
                                     scanf("%d",&Senha);
                                     if(Senha == SenhaCaixa)
                                     {            
                                          printf("Digite o Valor para Recarga para Notas de 10. (OBS: No maximo 100.)\n");
                                          scanf("%d",&Recarga10);
                                         if (Recarga10 > 100)
                                         {
                                                                  printf("Erro\nValor de recarga invalido.Verifique.\n");
                                         }
                                         else
                                         {
                                             printf("recarga Com notas de 10 realizada com sucesso.\n");                                            
                                             Notas10Caixa = Recarga10;
                                         }
                                     }   
                                     else
                                         {
                                                   printf("Senha Invalida.\n");
                                         }
                                 }while(Notas10 = 0);
                    }
                    
                    QNotas5 = (QNotas10 % 10);
                    Notas5=Notas5Caixa;
                    if ((QNotas5 >= 5)||(QNotas5 >= 7))
                    {
                                 NNotas5 = (QNotas5 / 5);
                                 Notas5=Notas5Caixa;
                                 if (NNotas5 > 0)
                                 {
                                              Notas5Caixa = (Notas5 - NNotas5);
                                              printf("Notas de 5 a serem Sacadas: %d.\n",NNotas5);
                                              printf("Notas de 5 no Caixa: %d.\n",Notas5Caixa);
                                 }
                                 else
                                     {
                                              printf("Notas de 5 a serem Sacadas: não se Aplica.\n");
                                     } 
                               
                    }
                    else
                        {
                               printf("Notas de 5 a serem Sacadas: não se Aplica.\n");
                        }
                    
                    if (Notas5 <= 0)
                    {
                                do
                                 {
                                     printf("Notas de 5 Indisponiveis no Momento.Favor Recarregar.\n");
                                     printf("Digite a Senha pra fazer recarga de Notas.\n");
                                     scanf("%d",&Senha);
                                     if(Senha == SenhaCaixa)
                                     {            
                                          printf("Digite o Valor para Recarga para Notas de 5. (OBS: No maximo 100.)\n");
                                          scanf("%d",&Recarga5);
                                         if (Recarga5 > 100)
                                         {
                                                                  printf("Erro\nValor de recarga invalido.Verifique.\n");
                                         }
                                         else
                                         {
                                             printf("recarga Com notas de 5 realizada com sucesso.\n");                                            
                                             Notas5Caixa = Recarga5;
                                         }
                                     }   
                                     else
                                         {
                                                   printf("Senha Invalida.\n");
                                         }
                                 }while(Notas5 = 0);
                    }
                     
                    QNotas2 = (Quantia % 100);
                    if (QNotas2 >= 2)
                    {
                                 NNotas2 = (QNotas2 / 2);
                                 Notas2=Notas2Caixa;
                                 if (NNotas2 > 0)
                                 {
                                              Notas2Caixa = (Notas2 - NNotas2);
                                              printf("Notas de 2 a serem Sacadas: %d.\n",NNotas2);
                                              printf("Notas de 2 no Caixa: %d.\n",Notas2Caixa);
                                 }
                                 else
                                     {
                                              printf("Notas de 2 a serem Sacadas: não se Aplica.\n");
                                     } 
                               
                    }                                                                                
        }while(Quantia > 0);
        
             
                                 
     
     
    system("PAUSE");
    return(0);
}

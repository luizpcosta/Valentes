#include <stdio.h> 
#include <stdlib.h> 
  
int telaCodProduto = 0; // Código de produto informado em tela 
int telaQtdProduto = 0; // Quantidade de produto informado em tela 
int codProd1 = 10; // Código do produto #1 
int codProd2 = 20; // Código do produto #2 
int codProd3 = 30; // Código do produto #3 
int codProd4 = 40; // Código do produto #4 
int estoqProd1 = 1000; //armazena o estoque para o produto #1 
int estoqProd2 = 2000; //armazena o estoque para o produto #2 
int estoqProd3 = 3000; //armazena o estoque para o produto #3 
int estoqProd4 = 4000; //armazena o estoque para o produto #4 
int opcao = 0; // Opção digitada em tela 
//1=inclusao;2=exclusão;3=consulta;4=sair 
int saldoCarrinho = 0; //saldo de compras do cliente (carrinho de compras) 

int main() 
{ 
while (opcao !=4) // controla o loop principal do programa 
{ 
printf("*-------------------------------------------------*\n"); 
printf("Selecione a Opcao (1=Incl;2=Excl;3=Cons;4=Sair) \n"); 
scanf("%d",&opcao); //recebe a opcao escolhida pelo operador 
// 
switch (opcao) 
{ 
case 1: //selecionou inclusão de produto ao carrinho de compras 
printf("Tabela de Produtos Super Mercado Vandinha \n"); 
printf("------------------------------------ \n"); 
printf("Produto Cod \n"); 
printf("Carne 10 \n"); 
printf("Tomate 20 \n"); 
printf("Ovo 30 \n"); 
printf("Agua 40 \n"); 
printf("----------------------------------- \n"); 
printf("Informe o Codigo de Produto \n"); 
scanf ("%d",&telaCodProduto); //recebe código do produto 
printf("Informe a quantidade de produto \n"); 
scanf ("%d",&telaQtdProduto); //recebe Quantidade do produto 
switch (telaCodProduto) 
{ 
case 10: 
if (estoqProd1 > telaQtdProduto){ 
estoqProd1 = estoqProd1 - telaQtdProduto; //Atualiza saldo de estoque do produto #1 
saldoCarrinho = saldoCarrinho + telaQtdProduto; // Atualiza saldo do carrinho de compras 
}else{ 
printf("----------------------------------- \n"); 
printf("Estoque de Carne insulficiente \n"); } 
break; 
default: printf("opcao invalida\n"); 
break; 
} 
case 2: //selecionou exclusão de produto ao carrinho de compras 
printf("Selecione o item que deseja excluir \n"); 
printf("------------------------------------ \n"); 
printf("Produto Cod \n"); 
printf("Carne 10 \n"); 
printf("Tomate 20 \n"); 
printf("Ovo 30 \n"); 

printf("Agua 40 \n"); 
printf("----------------------------------- \n"); 
printf("Informe o Codigo de Produto \n"); 
scanf ("%d",&telaCodProduto); //recebe código do produto 
printf("Informe a quantidade de produto \n"); 
scanf ("%d",&telaQtdProduto); //recebe Quantidade do produto 
switch (telaCodProduto) 
{ 
case 10: 
estoqProd1 = estoqProd1 + telaQtdProduto; //Atualiza saldo de estoque do produto #1 
saldoCarrinho = saldoCarrinho - telaQtdProduto; // Atualiza saldo do carrinho de compras 
} 
break; 
case 3: //selecionou Consulta do Carrinho 
printf("Saldo do Carrinho: %d itens \n \n", saldoCarrinho); //Saldo atualizado do carrinho 
printf("Saldo Carne: %d itens \n", estoqProd1); //Estoque atualizado prod1 
printf("Saldo Tomate: %d itens \n", estoqProd2); //Estoque atualizado prod2 
printf("Saldo Ovo: %d itens \n", estoqProd3); //Estoque atualizado prod3 
printf("Saldo Agua: %d itens \n", estoqProd4); //Estoque atualizado prod4 
break; 
case 4: printf("opcao4\n"); 
break; 
default: printf("invalida\n"); 
break; 
} 
} 
// Solicitação #3 
// Coodifiique aqui: 
// Imprimir Saldo do Carrinho de compras 
// Imprimir saldo dos produtos (Prod#1, Prod#2, Prod#3 e prod#4) 
// 
return 0; 
} 


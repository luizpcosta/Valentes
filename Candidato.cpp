#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
int i, qtdeVotos[6] = {0,0,0,0,0}, totalVotos = 0;
char confirmar, candidatos[][20] = {"","Paulo Maluco", "Jairo do Bolso", "Fer.H Dad","Geraldo Hospital", "Branco"};

printf("ELEICOES 2018\n\n");
do{
printf("Escolha seu candidato:\n\n");
printf("1 - Paulo Maluco\n2 - Jairo do Bolso\n3 - Fer.H Dad\n4 - Geraldo Hospital\n5 - Branco\n\n");
scanf("%d", &i);
if(i == -1){
printf("Votacao encerrada.\n");
system("CLS");
break;
} else if(i > 5){
system("CLS");
printf("Candidato Invalido.\n");
continue;
}

do {
if(i == 5){
printf("Confirmar voto em branco? (S ou N)", i);
} else {
printf("Confirmar voto para candidado numero %d (%s)? (S ou N)", i, candidatos[i]);
}
fflush(stdin);
scanf("%c", &confirmar);
confirmar += (confirmar == 78 || confirmar == 83) ? 32 : 0;
} while (confirmar != 110 && confirmar != 115);

system("CLS");
if(confirmar == 's'){
qtdeVotos[i]++;
totalVotos++;
} else {
continue;
}

} while (1);

if(totalVotos == 0){
printf("Nao houve votacao.\n");
return(0);
} else {
for(i=1; i<=5; i++){
printf("Candidato %d (%s) recebeu %2.2f%% votos.\n", i, candidatos[i], ((float)qtdeVotos[i]/totalVotos)*100);
}
}
	
	
	
	return 0;
}

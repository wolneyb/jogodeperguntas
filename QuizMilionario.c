#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>
void show_record();//fun��o de mostrar o maior ranking
void reset_score();//fun��o para resetar o ranking
void Ajuda();//fun��o para ir at� a ajuda
void edit_score(float , char []);//fun��o para editar o ranking
void cor_padrao();//fun��o para cor do console padrao do jogo
void cor_acerto();//fun��o para cor do console no em resposta correta
void cor_erro();//fun��o para cor no console de resposta incorreta
void erro();//fun��o para tela de resposta incorreta


int main(){	
	setlocale(LC_ALL, "Portuguese");//setar lingua portugesa
     srand(time(NULL));//srand para inicializar a fun��o rand
	 int countr,r,r1,count,i,n,contperg1,contperg2,contperg3,contperg4,contperg5,contperg6,contperg7,contperg8,contperg9,contperg10,contperg11,contpergmilhao;
     float score;//registro do placar 
     char choice;//registro da op��o do menu
     char nomedojogador[20];//registro do nome do jogador
     mainhome:
     system("cls");
     cor_padrao();
	 printf(" _______  __   __  ___   _______    __   __  ___   ___      ___   _______  __    _  _______  ______    ___   _______ \n|       ||  | |  ||   | |       |  |  |_|  ||   | |   |    |   | |       ||  |  | ||   _   ||    _ |  |   | |       |\n|   _   ||  | |  ||   | |____   |  |       ||   | |   |    |   | |   _   ||   |_| ||  |_|  ||   | ||  |   | |   _   |\n|  | |  ||  |_|  ||   |  ____|  |  |       ||   | |   |    |   | |  | |  ||       ||       ||   |_||_ |   | |  | |  |\n|  |_|  ||       ||   | | ______|  |       ||   | |   |___ |   | |  |_|  ||  _    ||       ||    __  ||   | |  |_|  |\n|      | |       ||   | | |_____   | ||_|| ||   | |       ||   | |       || | |   ||   _   ||   |  | ||   | |       |\n|____||_||_______||___| |_______|  |_|   |_||___| |_______||___| |_______||_|  |__||__| |__||___|  |_||___| |_______|\n");
     printf("\n\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t      BEM-VINDO ");
     printf("\n\t\t\t\t\t         ao ");
     printf("\n\t\t\t\t\t        JOGO ");
     printf("\n\t\t\t\t________________________________________");
     printf("\n\t\t\t\t________________________________________");
     printf("\n\t\t\t\t   SE TORNE UM MILIONARIO!!!!!!!!!!!    ") ;
     printf("\n\t\t\t\t________________________________________");
     printf("\n\t\t\t\t________________________________________");
     printf("\n\t\t\t\t > Apete S para come�ar o jogo");
     printf("\n\t\t\t\t > Aperte V para ver o  ranking  ");
     printf("\n\t\t\t\t > Aperte R para resetar o ranking");
     printf("\n\t\t\t\t > Aperte A para ajuda            ");
     printf("\n\t\t\t\t > Aperte Q para sair do jogo             ");
     printf("\n\t\t\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')//se apertar V mostar o ranking
{
show_record();
goto mainhome;
}
     else if (choice=='A')//se apertar A mostra a tela de ajuda
{
Ajuda();getch();
goto mainhome;
}
else if (choice=='R')//se apertar R limpa o ranking
{reset_score();
getch();
goto mainhome;}
else if (choice=='Q')//se apertar Q fecha o programa
exit(1);
    else if(choice=='S')//se apertar S come�a o jogo
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegistre seu nome:");
     gets(nomedojogador);//registrar o nome do jogador

    system("cls");
    printf("\n ------------------  Ol� %s bem-vindo ao Quiz Milion�rio --------------------------",nomedojogador);
    printf("\n|\t\t\t\t\t\t\t\t\t\t     |");
	printf("\n| O jogo foi desenvolvido para divers�o e para testar seus conhecimentos.            |");
	printf("\n|\t\t\t\t\t\t\t\t\t\t     |");
    printf("\n| >> Cada pergunta tem 4 alternativas entre somente 1 correta.                       |");
    printf("\n|\t\t\t\t\t\t\t\t\t\t     |");
	printf("\n| >> Se errar sinta-se a vontade para jogar de novo                                  |");
    printf("\n|------------------------------------------------------------------------------------|");
	printf("\n| >> Pressione Y para come�ar o jogo!                                                |");
    printf("\n| >> Pressione qualquer outra tecla para voltar ao menu principal!                   |");
    printf("\n ------------------------------------------------------------------------------------");
    if (toupper(getch())=='Y'){
	goto game;
    }
	else{
		goto mainhome;
	}    
	game:
     countr=0;//contagem de acertos
     for(i=1;i<=12;i++)
     {system("cls");
     r=i;

     switch(r){

case 1:
	contperg1 = (rand () % 3);//rand de 3 valores para perguntas ficarem aleat�rias(em cada pergunta)
	if(contperg1==0){
		cor_padrao();
		printf("Pergunta 1.(R$1.000) Qual o coletivo de c�es? \n\n a) Matilha \t\tb) Rebanho \n c) Cardume \t\td) Manada");
		if(toupper(getch())=='A'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$5.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg1==1){
		cor_padrao();
		printf("Pergunta 1.(R$1.000) Segundo o romance, que animal era �Moby Dick�? \n\n a) Tubar�o \t\tb) Golfinho \n c) Polvo \t\td) Baleia");
	if(toupper(getch())=='D'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$5.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
	}
	}
	if(contperg1==2){
		cor_padrao();
		printf("Pergunta 1.(R$1.000) Qual � o animal que representa o signo de �ries? \n\n a) Touro \t\tb) Le�o \n c) Carneiro \t\td) Bode");
	if	(toupper(getch())=='D'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$5.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}	
case 2:
	contperg2 = (rand () % 3);
	if(contperg2==0){
		cor_padrao();
		printf("Pergunta 2.(R$5.000) Fidel Castro nasceu em que pa�s ? \n\n a) Jamaica \t\tb) Cuba \n c) El Salvador \td) M�xico");
		if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$10.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg2==1){
		cor_padrao();
		printf("Pergunta 2.(R$5.000) Quem proclamou a rep�blica no Brasil em 1889? \n\n a) Duque de Caxias \t\tb) Marechal Rondon \n c) Dom Pedro II \t\td) Marechal Deodoro");
	if(toupper(getch())=='D'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$10.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
	}
	}
	if(contperg2==2){
		cor_padrao();
		printf("Pergunta 2.(R$5.000) Vatap� � uma comida t�pica de qual estado brasileiro? \n\n a) Paran� \t\tb) Santa Catarina \n c) S�o Paulo \t\td) Bahia");
	if	(toupper(getch())=='D'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$10.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}	
case 3:
	contperg3 = (rand () % 3);
	if(contperg3==0){
		cor_padrao();
		printf("Pergunta 3.(R$10.000) Qual cantor � o pai da dupla Sandy e J�nior ? \n\n a) Leonardo \t\tb) Xoror� \n c) Chit�ozinho \td) Zez� di Camargo");
		if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$15.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg3==1){
		cor_padrao();
		printf("Pergunta 3.(R$10.000) Quem foi o criador dos personagens Pedrinho, Narizinho e Em�lia? \n\n a) Monteiro Lobato \t\tb) Maur�cio de Souza \n c) Ziraldo \t\t\td) Machado de Assis");
		if(toupper(getch())=='A'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$15.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
	}
	}
	if(contperg3==2){
		cor_padrao();
		printf("Pergunta 3.(R$10.000) Quem fundou a Microsoft? \n\n a) Steve Jobs \t\tb) Bill Gates \n c) Mark Zuckerberg \td) Akio Morita");
		if	(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$15.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
case 4:
	contperg4 = (rand () % 3);
	if(contperg4==0){
		cor_padrao();
		printf("Pergunta 4.(R$15.000) Quantas denti��es naturais tem o ser humano durante a vida? \n\n a) Uma \t\tb) Duas \n c) Tr�s \t\td) Quatro");
		if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$30.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg4==1){
		cor_padrao();
		printf("Pergunta 4.(R$15.000) Qual � a pedra preciosa mais dura encontrada na natureza? \n\n a) Rubi \t\tb) Esmeralda \n c) Diamante \t\td) P�rola");
	if(toupper(getch())=='C'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$30.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
	if(contperg4==2){
		cor_padrao();
		printf("Pergunta 4.(R$15.000) Qual foi o placar no final da Copa de 98, quando o Brasil perdeu para a Fran�a? \n\n a) Dois a zero \t\tb) Tr�s a zero \n c) Quatro a zero \t\td) Dois a um");
	if	(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$30.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
case 5:
	contperg5 = (rand () % 3);
	if(contperg5==0){
		cor_padrao();
		printf("Pergunta 5.(R$30.000) Em qual est�dio Pel� marcou seu mil�simo gol? \n\n a) Morumbi \t\tb) Pacaembu \n c) Maracan� \t\td) Mineir�o");
		if(toupper(getch())=='C'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$50.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg5==1){
		cor_padrao();
		printf("Pergunta 5.(R$30.000) O que � g�ndola? \n\n a) Embarca��o \t\tb) Brinquedo \n c) M�sica \t\td) S�mbolo");
	if(toupper(getch())=='A'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$50.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
	}
	}
	if(contperg5==2){
		cor_padrao();
		printf("Pergunta 5.(R$30.000) Quantos jogadores um jogo de v�lei re�ne na quadra? \n\n a) Seis \t\tb) Oito \n c) Dez \t\td) Doze");
	if	(toupper(getch())=='D'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$50.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
case 6:
	contperg6 = (rand () % 3);
	if(contperg6==0){
		cor_padrao();
		printf("Pergunta 6.(R$50.000) Que atriz protagonizou o filme �Titanic�? \n\n a) Camareon Diaz \t\tb) Kate Winslet \n c) Bridget Fonda \t\td) Catherine Zetta Jones");
		if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$100.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg6==1){
		cor_padrao();
		printf("Pergunta 6.(R$50.000) Nas hist�rias do Snoopy, qual � o nome do passarinho? \n\n a) Piu-piu \t\tb) Woodstock \n c) Canarinho \t\td) Rouxinol");
	if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$100.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
	}
	}
	if(contperg6==2){
		cor_padrao();
		printf("Pergunta 6.(R$50.000) Qual � a capital do Iraque? \n\n a) Kabul \t\tb) Bagd� \n c) Beirut \t\td) Karachi");
	if	(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$100.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
case 7:
	contperg7 = (rand () % 3);
	if(contperg7==0){
		cor_padrao();
		printf("Pergunta 7.(R$100.000) Qual presidente dos Estados Unidos foi ator de cinema? \n\n a) Ronald Reagan \t\tb) George Bush \n c) Richard Nixon \t\td) Bill Clinton");
		if(toupper(getch())=='A'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$200.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg7==1){
		cor_padrao();
		printf("Pergunta 7.(R$100.000) Em que cidade foram realizados os jogos ol�mpicos de 2000? \n\n a) Munique \t\tb) Sidney \n c) T�quio \t\td) Atlanta");
	if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$200.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
	}
	}
	if(contperg7==2){
		cor_padrao();
		printf("Pergunta 7.(R$100.000) Quem dirigiu o filme �Central do Brasil�? \n\n a) Bruno Barreto \t\tb) H�cto Babenco  \n c) Arnaldo Jabor \t\td) Walter Sales J�nior");
	if	(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$200.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
case 8:
	contperg8 = (rand () % 3);
	if(contperg8==0){
		cor_padrao();
		printf("Pergunta 8.(R$200.000) Qual desses astros de filmes de a��o � belga? \n\n a) Arnold Schwarzenegger \tb) Sylvester Stallone \n c) Steven Seagal \t\td) Jean Claud Van Damme");
		if(toupper(getch())=='D'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$300.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg8==1){
		cor_padrao();
		printf("Pergunta 8.(R$200.000) Os nazistas foram julgados em: \n\n a) Berlim \t\tb) Nurembergue \n c) Munique \t\td) Paris");
	if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$300.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
	}
	}
	if(contperg8==2){
		cor_padrao();
		printf("Pergunta 8.(R$200.000) Qual foi o �ltimo presidente militar do Brasil? \n\n a) Fernando Collor \t\tb) Jo�o Figueiredo \n c) Tancredo Neves \t\td) Jo�o Goulart");
	if	(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$300.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
case 9:
	contperg9 = (rand () % 3);
	if(contperg9==0){
		cor_padrao();
		printf("Pergunta 9.(R$300.000) A quem se atribui a frase �Eu sou o Estado�? \n\n a) Luiz XIV \t\tb) Luiz XV \n c) Luiz XVI \t\td) Napole�o Bonaparte");
		if(toupper(getch())=='A'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$400.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg9==1){
		cor_padrao();
		printf("Pergunta 9.(R$300.000) �Guernica� � uma tela de qual pintor? \n\n a) Monet \t\tb) Renoir \n c) Picasso \t\td) Leonardo Da Vinci");
	if(toupper(getch())=='C'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$400.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
	}
	}
	if(contperg9==2){
		cor_padrao();
		printf("Pergunta 9.(R$300.000) O que s�o meninges? \n\n a) C�lulas \t\tb) Nervos \n c) Membranas \t\td) M�sculos");
	if	(toupper(getch())=='C'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$400.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
case 10:
	contperg10 = (rand () % 3);
	if(contperg10==0){
		cor_padrao();
		printf("Pergunta 10.(R$400.000) Que parte do corpo humano � infectada pela c�lera? \n\n a) Garganta \t\tb) Intestino \n c) Pulm�es \t\td) Rins");
		if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$500.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg10==1){
		cor_padrao();
		printf("Pergunta 10.(R$400.000) Qual destas palavras � sin�nimo de cabal? \n\n a) Baixo \t\tb) Perfeito \n c) Atrevido \t\td) Enfermo");
	if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$500.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
	}
	}
	if(contperg10==2){
		cor_padrao();
		printf("Pergunta 10.(R$400.000) �Ar�bica� e �robusta� s�o tipos de qu�?\n\n a) Uva \t\tb) Caf� \n c) Mel�o \t\td) Laranja");
	if	(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$500.000 (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
case 11:
	contperg11 = (rand () % 3);
	if(contperg11==0){
		cor_padrao();
		printf("Pergunta 11.(R$500.000) Nova Caled�nia faz parte da: \n\n a) Micron�sia \t\tb) Melan�sia \n c) Polin�sia \t\td) Indon�sia");
		if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$1.000.000 PREPARE-SE (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else{
		erro();goto score;
		break;
		}
	}
	if(contperg11==1){
		cor_padrao();
		printf("Pergunta 11.(R$500.000) O que o pintor Claude Monet representou em suas telas? \n\n a) Os jardins de Giverny \t\tb) Os bistr�s de Paris \n c) Cenas do Moulin Rouge \t\td) Paisagens da Proven�a");
	if(toupper(getch())=='A'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta  Pr�xima pergunta de R$1.000.000 PREPARE-SE (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
	if(contperg11==2){
		cor_padrao();
		printf("Pergunta 11.(R$500.000) Qual � o quarto planeta do sistema solar?\n\n a) J�pter \t\tb) V�nus \n c) Terra \t\td) Marte");
	if	(toupper(getch())=='D'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Pr�xima pergunta de R$1.000.000 PREPARE-SE (Pressione qualquer bot�o para continuar)"); countr++;getch();
		break;
		}else {
		erro();goto score;
		break;
		}
	}
case 12:
	contpergmilhao = (rand () % 3);
	if(contpergmilhao==0){
		cor_padrao();
		printf("Pergunta Final.(R$1.000.000) O que constru�a Stradivarius? \n\n a) Casas \t\tb) Violinos \n c) Armas \t\td) Estradas");
		if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!   Parab�ns voc� ganhou 1 milh�o de reais!!!"); countr++;getch();
		break;
		}else{
		erro();countr=0;goto score;
		break;
		}
	}
	if(contpergmilhao==1){
		cor_padrao();
		printf("Pergunta Final.(R$1.000.000) Quem ganhou a 1� medalha de ouro ol�mpico para o Brasil? \n\n a) Afranio Antonio Costa \tb) Guilherme Paraense \n c) Fernando Soledade \t\td) Sebasti�o Wolf");
	if(toupper(getch())=='B'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!!  Parab�ns voc� ganhou 1 milh�o de reais!!!"); countr++;getch();
		break;
		}else {
		erro();countr=0;goto score;
		break;
	}
	}
	if(contpergmilhao==2){
		cor_padrao();
		printf("Pergunta Final.(R$1.000.000) Quem foi chamado de �guia de Haia?\n\n a) Jorge Amado \t\tb) E�a de Queiroz \n c) Rui Barbosa \t\td) Raimundo Corr�a");
	if	(toupper(getch())=='C'){
		system("cls");
		cor_acerto();
		printf("\n\n\t\tResposta correta!! Parab�ns voc� ganhou 1 milh�o de reais!!!"); countr++;getch();
		break;
		}else {
		erro();countr=0;goto score;
		break;
		}
	}
}
}
score:
    system("cls");
if(countr==1)
	score=1000;
if(countr==2)
	score=5000;
if(countr==3)
	score=10000;
if(countr==4)
	score=15000;
if(countr==5)
	score=30000;
if(countr==6)
	score=50000;
if(countr==7)
	score=100000;
if(countr==8)
	score=200000;
if(countr==9)
	score=300000;
if(countr==10)
	score=400000;
if(countr==11)
	score=500000;
if(countr==12)
	score=1000000;											
if(score>=1000&&score<=500000)
{
  cor_padrao();
  printf("\n\n\t\t**************** MUITO BEM!!! *****************");
    printf("\n\t\t          Voc� ganhou $%.2f",score);goto go;}

 if(score==1000000){
   system("color 7C");
   printf("\n\n\n \t\t**************** PARAB�NS ****************");
   printf("\n\t\t\t VOC� SE TORNOU UM MILION�RIO!!!!!");
   printf("\n\t\t\t Acertou a pergunta final e recebeu R$%.2f",score);
   printf("\n\t\t\t OBRIGADO POR JOGAR!!");
}
else
{
   cor_padrao();
   printf("\n\n\t******** SINTO MUITO VOC� N�O GANHOU NADA ********");
   printf("\n\t\t   Obrigado pela participa��o ");
   printf("\n\t\t       Tente novamente");goto go;}

go:
puts("\n\n >> Aperte Y se desejar jogar novamente.");
puts(" >> Aperte qualquer tecla se quiser voltar para o menu.");
if (toupper(getch())=='Y')
goto game;
else
{
edit_score(score,nomedojogador);
goto mainhome;}}}

void show_record()
    {system("cls");
char name[20];
float scr;
FILE *f;
f=fopen("score.txt","r");
fscanf(f,"%s%f",&name,&scr);
printf("\n\n\t\t*************************************************************");
printf("\n\n\t\t %s est� em primeiro do ranking com R$%0.2f",name,scr);
printf("\n\n\t\t*************************************************************");
fclose(f);
getch();}

void reset_score()
    {system("cls");
    float sc;
char nm[20];
FILE *f;
f=fopen("score.txt","r+");
fscanf(f,"%s%f",&nm,&sc);
sc=0.0;
fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void Ajuda(){
system("cls");
    printf("\n\n\t\t                             ||AJUDA||");
    printf("\n ---------------------------------------------------------------------------------------------------");
    printf("\n ................................. Quiz Milion�rio - Programa em C..................................\n");
    printf("\n >> O programa consiste em um jogo de perguntas e respostas onde cada rodada vale uma quantia em R$.");
    printf("\n >> Cada rodada vale uma quantia diferente em R$.");
    printf("\n >> As perguntas s�o divididas em 4 etapas:");
    printf("\n - 1� Etapa: De R$1.000 at� R$15.000 perguntas de n�vel f�cil.");
    printf("\n - 2� Etapa: De R$30.000 at� R$100.000 perguntas de n�vel m�dio.");
    printf("\n - 3� Etapa: De R$200.000 at� R$500.000 perguntas de n�vel dif�cil.");
    printf("\n - 4� Etapa: A pergunta final de R$1.000.000.");
    printf("\n >> A quantidade obtida a cada acerto n�o � acumulativa.");
    printf("\n >> Se o jogador errar uma pergunta a quantia anterior ser� sua pontua��o.");
	printf("\n >> Pressione qualquer tecla para voltar ao menu.");
printf("\n\n ********************************************BOA SORTE********************************************");
}

void edit_score(float score, char plnm[20])
{system("cls");
float sc;
char nm[20];
FILE *f;
f=fopen("score.txt","r");
fscanf(f,"%s%f",&nm,&sc);
if (score>=sc)
 { sc=score;
   fclose(f);
   f=fopen("score.txt","w");
   fprintf(f,"%s\n%.2f",plnm,sc);
   fclose(f);}}
void cor_padrao(){
	system("color 2E");
}
void cor_acerto(){
	system("color 0A");
}
void cor_erro(){
	system("color 0C");
}
void erro(){
	system("cls");
	cor_erro();
	printf("\t\t______________________________________");
	printf("\n\n\t\t||Resposta incorreta || Fim de jogo!||");
	printf("\n\t\t______________________________________");getch();
}

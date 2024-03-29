#include <stdio.h> //biblioteca de comunica��o ao usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em memoria 
#include <locale.h> //biblioteca de aloca�oes de texto por regiao
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro() //fun��o respons�vel por cadastrar os funcion�rios no sistema
{	
	//in�cio da cria��o das strings/vari�veis
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
    char cargo[40];
    //final da cria��o das strings/vari�veis
    
    printf("Digite o CPF a ser cadastrado: "); //coletando as informa��es dos usu�rios
    scanf("%s" , cpf); // %s refere-se a string
    
    strcpy(arquivo, cpf); //respons�vel por copiar os valores das strings
    
    FILE *file;//cria o arquivo
    file = fopen(arquivo, "w");//cria o arquivo
    fprintf(file,cpf);//salva o valor da variavel 
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s" ,nome);
    
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);    
	
	file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o Sobrenome a ser cadastrado: ");
    scanf("%s" ,sobrenome);
    
	file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
	printf("Digite o cargo a ser cadastrado: ");
    scanf("%s" ,cargo);
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
}

		int consultar()
{
		setlocale(LC_ALL, "Portuguese"); //Comando de linguagem

		char cpf[40];
		char conteudo[200];
	
		printf("Digite o CPF a ser consultado: ");
		scanf("%s" ,cpf);
	
		FILE *file;
		file = fopen(cpf, "r");
	
		if(file == NULL)
	{
		printf("N�o foi possivel localizar o arquivo informado!\n");
	}
	
		while(fgets(conteudo, 200,file) !=NULL);
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
		system("pause");
	}

int deletar()
{
    char cpf[40];
    printf("Digite o CPF a ser deletado: ");
    scanf("%s", cpf);
    
    if (remove(cpf) == 0) // Verifica se a remo��o foi bem-sucedida
    {
        printf("Usu�rio removido com sucesso!\n");
    }
    else // Bloco de c�digo executado se a condi��o n�o for verdadeira
    {
        printf("O usu�rio n�o est� cadastrado!\n");
    }
    system("pause");
}


int main()
{
	
	int opcao=0;
	
	int x=1;
	
	
	for(x=1;x=1;) 
{
	
	setlocale(LC_ALL, "Portuguese"); //Comando de linguagem
	
	system("cls");
	
    printf("###Cart�rio### \n\n");
	printf("Escolha a op��o desejada no menu:\n\n\n\n"); 
	printf("\t1 - Registrar nomes \n");
	printf("\t2 - Consultar nomes \n");
	printf("\t3 - Deletar nomes \n");
	printf("\t4 - Sair do sistema\n");
	
	printf("\n\nOp��o desejada : ");
	
	
	scanf("%d", &opcao); //armazena a escolha do usu�rio
	
	system("cls");
	
	switch(opcao)
	{
	case 1:
	registro();
    break;
    
    case 2:
    consultar();
    break;
    
    case 3:
    deletar();
	break;

	case 4:
	printf("Obrigado por utilizar o sistema\n");
	return 0;
	break;
	
	default:
	printf("Essa op��o n�o est� dispon�vel!\n");
    system("pause");
    break;
	}
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

#include <stdio.h> //biblioteca de comunicação ao usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memoria 
#include <locale.h> //biblioteca de alocaçoes de texto por regiao
#include <string.h> //biblioteca responsável por cuidar das strings

int registro() //função responsável por cadastrar os funcionários no sistema
{	
	//início da criação das strings/variáveis
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
    char cargo[40];
    //final da criação das strings/variáveis
    
    printf("Digite o CPF a ser cadastrado: "); //coletando as informações dos usuários
    scanf("%s" , cpf); // %s refere-se a string
    
    strcpy(arquivo, cpf); //responsável por copiar os valores das strings
    
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
		printf("Não foi possivel localizar o arquivo informado!\n");
	}
	
		while(fgets(conteudo, 200,file) !=NULL);
	{
		printf("\nEssas são as informações do usuário: ");
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
    
    if (remove(cpf) == 0) // Verifica se a remoção foi bem-sucedida
    {
        printf("Usuário removido com sucesso!\n");
    }
    else // Bloco de código executado se a condição não for verdadeira
    {
        printf("O usuário não está cadastrado!\n");
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
	
    printf("###Cartório### \n\n");
	printf("Escolha a opção desejada no menu:\n\n\n\n"); 
	printf("\t1 - Registrar nomes \n");
	printf("\t2 - Consultar nomes \n");
	printf("\t3 - Deletar nomes \n");
	printf("\t4 - Sair do sistema\n");
	
	printf("\n\nOpção desejada : ");
	
	
	scanf("%d", &opcao); //armazena a escolha do usuário
	
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
	printf("Essa opção não está disponível!\n");
    system("pause");
    break;
	}
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

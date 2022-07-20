#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define ex4_const 10
#define ex5_const 40 
#define ex6_const 6
#define ex7_const 3

typedef struct Pontos {
        int x;
        int y;
} TPontos;

typedef struct Produto {
    char name[50];
    int codigo;
    float preco;
    int baixa[ex6_const];
} TProduto;

void ex1() {
  struct aluno {
    float notaprova;
    float notatrabalho;
    float media;
    char nome[20];
  } otavio;

  printf("digite o nome do aluno: ");
  scanf(" %[^\n]s", otavio.nome);

  printf("digite a nota da prova do aluno: ");
  scanf(" %f", &otavio.notaprova);

  printf("digite o nota de trabalho do aluno: ");
  scanf(" %f", &otavio.notatrabalho);

  otavio.media = (otavio.notaprova+otavio.notatrabalho)/2;

  printf("%s\n",otavio.nome);
  printf("%.2f\n",otavio.notaprova);
  printf("%.2f\n",otavio.notatrabalho);
  printf("%.2f\n",otavio.media);
  
}

void ex2() {
  struct aluno {
    float notaprova;
    float notatrabalho;
    float media;
    char nome[20];
  } otavio[2];

  for(int i = 0;i<2;i++){
  printf("digite o nome do aluno: ");
  scanf(" %[^\n]s", otavio[i].nome);

  printf("digite a nota da prova do aluno: ");
  scanf(" %f", &otavio[i].notaprova);

  printf("digite o nota de trabalho do aluno: ");
  scanf(" %f", &otavio[i].notatrabalho);

  otavio[i].media = (otavio[i].notaprova+otavio[i].notatrabalho)/2;
} 

  for(int i=0;i<2;i++) {
    printf("%s\n",otavio[i].nome);
    printf("%.2f\n",otavio[i].notaprova);
    printf("%.2f\n",otavio[i].notatrabalho);
    printf("%.2f\n",otavio[i].media);
  }
}

void ex3() {
    /*
        Feito na aula
    */
}

void ex4() {
    typedef struct Ender {
        char rua[50];
        char bairro[20];
        int numero;
    } Tender;

    typedef struct Dnasc {
        int dia;
        int mes;
        int ano;
    } Tdnasc;

    struct Cadastro {
        char nome[50];
        Tender endereco;
        Tdnasc Data;
        char telefone[20];
    } Contato[ex4_const];

    for (int i = 0; i < ex4_const; i++) {
        puts("Digite o nome do contato: ");
        fflush(stdin);
        gets(Contato[i].nome);

        puts("Digite o telefone do cadastro: ");
        fflush(stdin);
        gets(Contato[i].telefone);

        puts("Digite a rua do cadastro: ");
        fflush(stdin);
        gets(Contato[i].endereco.rua);

        puts("Digite o bairro do cadastro: ");
        fflush(stdin);
        gets(Contato[i].endereco.bairro);

        puts("Digite o numero da casa do cadastro: ");
        fflush(stdin);
        scanf(" %d", &Contato[i].endereco.numero);

        puts("Digite a data no formato DD/MM/AAAA: ");
        fflush(stdin);
        scanf(" %d/%d/%d", &Contato[i].Data.dia,&Contato[i].Data.mes,&Contato[i].Data.ano); 
    }


    for (int i = 0; i < ex4_const; i++) {
        printf("\nO Cadatro de %s com telefone %s \nMora na rua %s que fica no bairro %s na casa de numero %d",Contato[i].nome,Contato[i].telefone,Contato[i].endereco.rua,Contato[i].endereco.bairro,Contato[i].endereco.numero);
        printf("\nSua data de nascimento e %d/%d/%d", Contato[i].Data.dia,Contato[i].Data.mes,Contato[i].Data.ano);
    }
}

void ex5() {
    typedef struct Dnasc {
        int dia;
        int mes;
        int ano;
    } Tdnasc; 
    struct pessoa {
        char nome[50];
        Tdnasc data;
    } pessoas[ex5_const];
    int index_velha,idade_velho,idade,mesDia_velho[2] = {0,0};

    for (int i = 0; i < ex5_const; i++) {
        puts("\nDigite o nome: ");
        fflush(stdin);
        gets(pessoas[i].nome);

        puts("\nDigite a idade formatada DD/MM/YYYY: ");
        fflush(stdin);
        scanf(" %d/%d/%d", &pessoas[i].data.dia,&pessoas[i].data.mes,&pessoas[i].data.ano);

        idade = 2022 - pessoas[i].data.ano;

        if (pessoas[i].data.mes > 7) {
            idade = idade - 1;
        } else if (pessoas[i].data.mes == 7) {
            if (pessoas[i].data.dia > 7) {
                idade = idade - 1;
            }
        } else {  
        }

        if (i == 0) {
            index_velha = 0;
            idade_velho = idade;
            mesDia_velho[0] = pessoas[i].data.dia;
            mesDia_velho[1] = pessoas[i].data.mes;
        } else {
            if (idade > idade_velho) {
                idade_velho = idade;
                index_velha = i;
                mesDia_velho[0] = pessoas[i].data.dia;
                mesDia_velho[1] = pessoas[i].data.mes;
            } else if (idade == idade_velho) {
                if (pessoas[i].data.mes < mesDia_velho[1]) {
                    idade_velho = idade;
                    index_velha = i;
                    mesDia_velho[0] = pessoas[i].data.dia;
                    mesDia_velho[1] = pessoas[i].data.mes;
                } else if (pessoas[i].data.mes == mesDia_velho[1]) {
                    if (pessoas[i].data.dia < mesDia_velho[0]) {
                        idade_velho = idade;
                        index_velha = i;
                        mesDia_velho[0] = pessoas[i].data.dia;
                        mesDia_velho[1] = pessoas[i].data.mes;
                    }
                }
            }
        }
        printf("\nO(a) %s tem %d anos",pessoas[i].nome,idade);
    }
    printf("\nA mais velha e %s e tem %d", pessoas[index_velha].nome,idade_velho);
}

void ex6() {
    TProduto produto;
    int soma=0;

    puts("Digite o nome do produto: ");
    gets(produto.name);

    puts("Digite o codigo do produto: ");
    scanf(" %d", &produto.codigo);

    puts("Digite o preço do produto: ");
    scanf(" %f", &produto.preco);

    for (int i = 0; i < ex6_const; i++) {
        printf("Digite o registro do produto no dia %d da semana\n", i+1);
        scanf(" %d", &produto.baixa[i]);

        soma = soma + produto.baixa[i];
    }

    printf("\n\nCodigo do produto ...: %d",produto.codigo);
    printf("\nPreço do produto ...: %f",produto.preco);
    printf("\nO produto %s teve %d baixas na semana, que geraram %f de receita", produto.name,soma, soma*produto.preco);
    printf("\nAs baixas para os dias da semana são: ");
    for (int i = 0; i < ex6_const; i++) {
        printf("\n dia %d: %d", i+1, produto.baixa[i]);
    }
}

void ex7() {
    TProduto produtos[ex7_const];
    int soma=0;

    for (int i = 0; i < ex7_const; i++) {
        puts("Digite o nome do produto: ");
        fflush(stdin);
        gets(produtos[i].name);

        puts("Digite o codigo do produto: ");
        fflush(stdin);
        scanf(" %d", &produtos[i].codigo);

        puts("Digite o preço do produto: ");
        fflush(stdin);
        scanf(" %f", &produtos[i].preco);

        for (int j = 0; j < ex6_const; j++) {
            printf("Digite o registro do produto [%d] no dia %d da semana\n", i,j+1);
            fflush(stdin);
            scanf(" %d", &produtos[i].baixa[j]);
        }
    }

    for (int i = 0; i < ex7_const; i++) {
        printf("\n\nNome do produto %d ...: %s",i,produtos[i].name);
        printf("\nCodigo do produto %d ...: %d",i,produtos[i].codigo);
        printf("\nPreço do produto %d ...: %f",i,produtos[i].preco);
        printf("\nAs baixas para os dias da semana são: ");
        for (int j = 0; j < ex6_const; j++) {
            printf("\n dia %d: %d", j+1, produtos[i].baixa[j]);
        }
    }
}

void ex8() {
    
}

void ex11() {
    TPontos pontos[5];
    float distancia, distancia_menor;
    int index_menor;

    for (int i = 0; i < 5; i++) {
        printf("Digite os numeros do ponto [%d]: ",i);
        scanf("%d %d", &pontos[i].x, &pontos[i].y);
    }

    for (int i = 1; i < 5; i++) {
        if (i == 1) {
            distancia = sqrt(pow(pontos[i].x - pontos[0].x,2) + pow(pontos[i].y - pontos[0].y,2));
            distancia_menor = distancia;
            index_menor = i;
        } else {
            distancia = sqrt(pow(pontos[i].x - pontos[0].x,2) + pow(pontos[i].y - pontos[0].y,2));
            if (distancia < distancia_menor) {
                distancia_menor = distancia;
                index_menor = i;
            }
        }
    }

    printf("a distancia menor é: %f e o menor é %d",distancia_menor,index_menor);

}

void ex12() {
    struct Retangulo {
        TPontos p1;
        TPontos p2; 
        TPontos p3;
        TPontos p4;                                               
    } retangulo1;
    float aresta1,aresta2;

    printf("Digite o primeiro ponto: ");
    scanf("%d %d", &retangulo1.p1.x,&retangulo1.p1.y);

    printf("Digite o segundo ponto na mesma linha que o primeiro: ");
    do {
        scanf("%d %d", &retangulo1.p2.x,&retangulo1.p2.y);
    }while(retangulo1.p2.y != retangulo1.p1.y);
    

    printf("Digite o primeiro ponto da segunda linha: ");
    do {
        scanf("%d %d", &retangulo1.p3.x,&retangulo1.p3.y);
    }while(retangulo1.p1.x != retangulo1.p3.x);

    printf("Digite o segundo ponto na mesma linha que o segundo: ");
    do {
        scanf("%d %d", &retangulo1.p4.x,&retangulo1.p4.y);
    }while(retangulo1.p4.x != retangulo1.p2.x || retangulo1.p4.y != retangulo1.p3.y);
    
    aresta1 = sqrt(pow(retangulo1.p2.x - retangulo1.p1.x,2) + pow(retangulo1.p2.y - retangulo1.p1.y,2));
    aresta2 = sqrt(pow(retangulo1.p3.x - retangulo1.p1.x,2) + pow(retangulo1.p3.y - retangulo1.p1.y,2));

    printf("Area do retangulo: %f e Aresta1: %f , Aresta2: %f",aresta2*aresta1, aresta1,aresta2);
}

void ex13()  {
    struct Vetor {
        float x; 
        float y; 
        float z;
    } vetor[3];

    for (int i = 0; i < 2; i++) { 
        printf("Digite os valores x y z do vetor [%d]: ", i);
        scanf(" %f %f %f", &vetor[i].x, &vetor[i].y, &vetor[i].z);    
    }

    vetor[2].x = vetor[0].x + vetor[1].x;
    vetor[2].y = vetor[0].y + vetor[1].y;
    vetor[2].z = vetor[0].z + vetor[1].z;

    printf("Vetor 3 soma: x = %f, y = %f, z = %f", vetor[2].x, vetor[2].y, vetor[2].z);
    
}

int main() {
    ex7();

    return 0;
}
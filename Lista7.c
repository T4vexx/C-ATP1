#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define ex4_const 10
#define ex5_const 40 
#define ex6_const 6
#define ex7_const 20
#define ex8_const 20
#define ex10_const 2


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

typedef struct tempo {
    int hour;
    int min;
} TTempo;

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
    typedef struct Dnasc {
        int dia;
        int mes;
        int ano;
    } TDnasc;
    typedef struct Cliente {
        char nome[30];
        char sobrenome[30];
        char sexo;
    } TCliente;
    struct Contas {
        int numero_conta;
        TDnasc data;
        TCliente cliente;
        float saldo;
        float limite_x;
    } contas[ex8_const];

    int antigo_index=0,limitex_index=0,counter_m=0,counter_h=0,v_indexs[ex8_const],elemento_aux=0,i;
    float medio_M=0,medio_H=0,maior_M=0,maior_H=0,menor_M=0,menor_H=0;

    srand(time(NULL));
    
    for(int i=0; i<ex8_const; i++) {
        puts("Digite o nome");
        fflush(stdin);
        gets(contas[i].cliente.nome);
        puts("Digite o sobrenome");
        fflush(stdin);
        gets(contas[i].cliente.sobrenome);
        puts("Digite o sexo H | M");
        fflush(stdin);
        scanf("%c", &contas[i].cliente.sexo);
        contas[i].numero_conta = (rand() % 5000) + 1000;
        puts("Digite a data de abertura: DD/MM/YYYY");
        fflush(stdin);
        scanf("%d/%d/%d", &contas[i].data.dia, &contas[i].data.mes,&contas[i].data.ano);
        puts("Digite o saldo");
        fflush(stdin);
        scanf("%f", &contas[i].saldo);
        puts("Digite o valor do limite especial");
        fflush(stdin);
        scanf("%f", &contas[i].limite_x);
        
        if (i==0) {
            if(contas[i].cliente.sexo == 'H') {
                medio_H = medio_H + contas[i].saldo;
                counter_h++;
                maior_H = contas[i].saldo;
                menor_H = contas[i].saldo;
            } else {
                medio_M = medio_M + contas[i].saldo;
                counter_m++;
                maior_M = contas[i].saldo;
                menor_M = contas[i].saldo;
            }
        } else {
            if(contas[i].cliente.sexo == 'H') {
                medio_H = medio_H + contas[i].saldo;
                counter_h++;
                    if (contas[i].saldo > maior_H) {
                        maior_H = contas[i].saldo;
                    }
                    if (contas[i].saldo < menor_H) {
                        menor_H = contas[i].saldo;
                    }
            } else {
                medio_M = medio_M + contas[i].saldo;
                counter_m++;
                    if (contas[i].saldo > maior_M) {
                        maior_M = contas[i].saldo;
                    }
                    if (contas[i].saldo < menor_M) {
                        menor_M = contas[i].saldo;
                    }
            }
        }

        //comparação da data
        if (contas[i].data.ano < contas[antigo_index].data.ano) {
        antigo_index = i;
        } else if (contas[i].data.ano == contas[antigo_index].data.ano) {
        if (contas[i].data.mes < contas[antigo_index].data.mes) {
            antigo_index = i;
        } else if (contas[i].data.mes == contas[antigo_index].data.mes) {
            if (contas[i].data.dia < contas[antigo_index].data.dia) {
            antigo_index = i;
            }
        }
        }

        //calulo do maior limite especial
        if(i!=0) {
        if(contas[i].limite_x > contas[limitex_index].limite_x) {
            limitex_index = i;
        }
        }

    }
    medio_M = medio_M / counter_m;
    medio_H = medio_H / counter_h;
  
  
    printf("\n\nImpressoes");
    printf("\nA media salarial feminina ...: %f",medio_M);
    printf("\nA media salarial masculina ...: %f",medio_H);
    printf("\nO maior e o menor saldo masculino %f | %f",maior_H,menor_H);
    printf("\nO maior e o menor saldo feminino %f | %f",maior_M,menor_M);
    printf("\nO cliente mais antigo ...: %s",contas[antigo_index].cliente.nome);
    printf("\nO cliente com o maior limite especial ...: %s | %f",contas[limitex_index].cliente.nome,contas[limitex_index].limite_x);

    for(int i = 0; i < ex8_const; i++) {
        if (contas[i].saldo < 0) {
        printf("\nO cliente %s tem %f de debito na conta",contas[i].cliente.nome,contas[i].saldo);
        }
        v_indexs[i] = i;
    }

    for (int k = 1; k < ex8_const; k++) {
        elemento_aux = v_indexs[k];
        for (i = k-1; i >= 0 && contas[k].saldo < contas[i].saldo ; i--) {
            v_indexs[i+1] = v_indexs[i];
        }
        v_indexs[i+1] = elemento_aux;
    }

    for (int c = 0; c < ex8_const; c++) {
        printf("\n%s tem R$ %f",contas[v_indexs[(ex8_const-1)-c]].cliente.nome, contas[v_indexs[(ex8_const-1)-c]].saldo);
    }
}

void ex9() {
    /*
        no primeiro bloco as informaçoes ficam mais dividadas podendo armazernar em espaços menores
        no segundo bloco as informaçoes ficam mais juntas em um blocao assim precisa de uma espaço maior de armazenamento
        porem as informaçoes sao mais faceis para ser encontradas e mais rapidamente
    */
}

void ex10() {
    struct cliente {
        char codigo[10];
        char email[50];
        float horas;
        char paginas;
        float conta;
    } clientes[ex10_const];

    float aux=0,count=0,soma_valores=0;

    for(int i = 0; i < ex10_const; i++) {
        puts("Digite o codigo do cliente");
        fflush(stdin);
        gets(clientes[i].codigo);

        puts("Digite o email do cliente");
        fflush(stdin);
        gets(clientes[i].email);

        puts("Digite o tanto de horas de uso");
        fflush(stdin);
        scanf("%f", &clientes[i].horas);

        puts("O cliente possui paginas: S | N");
        fflush(stdin);
        scanf("%c", &clientes[i].paginas);

        if(clientes[i].horas > 20) {
            aux = clientes[i].horas - 20;
            count = 0;
            do {
                aux = aux - 1;
                count++;
            }while(aux > 0);

            clientes[i].conta = 35 + (count * 2.5);

        } else if(clientes[i].horas <= 20) {
            clientes[i].conta = 35;
        }

        if(clientes[i].paginas == 'S') {
            clientes[i].conta = clientes[i].conta + 40;
        }
    }

    for (int i = 0; i < ex10_const; i++) {
        if (clientes[i].paginas == 'S') {
            printf("\n%s - %s usou %f hrs, como possuia pagina sua conta ficou em %f",clientes[i].codigo,clientes[i].email,clientes[i].horas,clientes[i].conta);
        } else {
            printf("\n%s - %s usou %f hrs e sua conta ficou em %f",clientes[i].codigo,clientes[i].email,clientes[i].horas,clientes[i].conta);
        }
        soma_valores = soma_valores + clientes[i].conta;
    }

    printf("\nO lucro total foi de %f",soma_valores);

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

void ex14() {
    TTempo inicio,fim,final;

    puts("Coloque o horario do inicio do jogo HH:MM");
    fflush(stdin);
    scanf("%d:%d", &inicio.hour,&inicio.min);

    puts("Coloque o horario do fim do jogo HH:MM");
    fflush(stdin);
    scanf("%d:%d", &fim.hour,&fim.min);

    if( inicio.min > fim.min) {
        fim.min = fim.min + 60;
        fim.hour = fim.hour - 1;
    }

    if(inicio.hour > fim.hour) {
        fim.hour = fim.hour + 24;
    }
    final.min = fim.min - inicio.min;
    final.hour = fim.hour - inicio.hour;

    printf("o jogo demorou %d horas e %d minutos", final.hour,final.min);
}

int main() {
    ex14();

    return 0;
}
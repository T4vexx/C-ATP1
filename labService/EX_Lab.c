#include <stdio.h>


int main() {
    char product_name[20];
    float price,result;
    int quantity;

    printf("Digite o nome do produto: ");
    scanf("%[^\n]%*c", product_name);

    printf("Digite o preço do produto: ");
    scanf("%f", &price);

    printf("Digite a quantidade de produto: ");
    scanf("%d", &quantity);

    switch (quantity) {
        case 1 ... 10: 
            result = (quantity * price); break;
        case 11 ... 20: 
            result = (quantity * price) * 0.9; break;
        case 21 ... 50: 
            result = (quantity * price) * 0.8; break;
        default: 
            result = (quantity * price) * 0.75; break;
    }

    printf("O produto %s saira por %f ", product_name, result);

    return 0;
}
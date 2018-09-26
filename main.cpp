#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int size1;
    int size2;
    int size3;
} Size;

typedef struct {
    char city[15];
    char district[15];
    Size size;
} Address;

typedef struct {
    int id;
    char name[15];
    int age;
    int weight;
    Address address;
} Pig;

int main() {
    int numberOfPig;
    printf("Vui lòng nhập số lượng con lợn là: ");
    scanf("%d", &numberOfPig);
    Pig conlon[numberOfPig];
    for (int i = 0; i < numberOfPig; ++i) {
        printf("Vui lòng nhập mã con lợn thứ %d là: ", i + 1);
        scanf("%d", &conlon[i].id);
        fgetc(stdin);
        printf("Vui lòng nhập tên con lợn thứ %d là: ", i + 1);
        fgets(conlon[i].name, 15, stdin);
        printf("Vui lòng nhập tuổi con lợn thứ %d là: ", i + 1);
        scanf("%d", &conlon[i].age);
        printf("Vui lòng nhập cân nặng con lợn thứ %d là: ", i + 1);
        scanf("%d", &conlon[i].weight);
        printf("Vui lòng nhập số đo vòng 1 con lợn thứ %d là: ", i + 1);
        scanf("%d", &conlon[i].address.size.size1);
        printf("Vui lòng nhập số đo vòng 2 con lợn thứ %d là: ", i + 1);
        scanf("%d", &conlon[i].address.size.size2);
        printf("Vui lòng nhập số đo vòng 3 con lợn thứ %d là: ", i + 1);
        scanf("%d", &conlon[i].address.size.size3);
        fgetc(stdin);
        printf("Vui lòng nhập thành phố thứ %d là: ", i + 1);
        fgets(conlon[i].address.city, 15, stdin);
        if (!strchr(conlon[i].address.city, '\n')) {
            while (fgetc(stdin) != '\n');
        }
        printf("Vui lòng nhập quận huyện thứ %d là: ", i + 1);
        fgets(conlon[i].address.district, 15, stdin);
    }
    for (int j = 0; j < numberOfPig; ++j) {
        printf("Mã con lợn thứ %d là: %d\n", j + 1, conlon[j].id);
        printf("Tên con lợn thứ %d là: %s\n", j + 1, conlon[j].name);
        printf("Tuổi con lợn thứ %d là: %d\n", j + 1, conlon[j].age);
        printf("Cân nặng con lợn thứ %d là: %d\n", j + 1, conlon[j].weight);
        printf("Số đo vòng 1 con lợn thứ %d là: %d\n", j + 1, conlon[j].address.size.size1);
        printf("Số đo vòng 2 con lợn thứ %d là: %d\n", j + 1, conlon[j].address.size.size2);
        printf("Số đo vòng 3 con lợn thứ %d là: %d\n", j + 1, conlon[j].address.size.size3);
        printf("Thành phố thứ %d là: %s\n", j + 1, conlon[j].address.city);
        printf("Quận huyện thứ %d là: %s\n", j + 1, conlon[j].address.district);
    }
    return 0;
}
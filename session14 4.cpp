#include <stdio.h>

int main() {
    char chuoi[] = "HelloWorld";
    char kyTu;
    int dem = 0;

    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &kyTu);

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);

    return 0;
}







#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[1000];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    chuoi[strcspn(chuoi, "\n")] = '\0';

    printf("Chuoi ban vua nhap la: %s\n", chuoi);
    printf("Do dai cua chuoi la: %lu\n", strlen(chuoi));

    return 0;
}

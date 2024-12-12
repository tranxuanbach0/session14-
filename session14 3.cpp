#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "HelloWorld";
    int doDai = strlen(chuoi);

    for (int i = doDai - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }

    return 0;
}

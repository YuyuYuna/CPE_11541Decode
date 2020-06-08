#include <stdio.h>

int main() {
    int link, mem = 0;
    char str[100];
    printf("input : ");
    scanf("%d", &link);
    while(link--) {
    	printf("\ninput : ");
        scanf("%s", str);
        printf("Input %d reverse : ", ++mem);
        int layer, temp = 0;
        char tochar;
        for(layer = 0; str[layer]; layer++) {
            if(str[layer] >= 'A' && str[layer] <= 'Z') {
                while(temp)
                    putchar(tochar), temp--;
                tochar = str[layer];
            } else {
                temp = temp*10 + str[layer]-'0';
            }
        }
        while(temp)
            putchar(tochar), temp--;
        puts("");
    }
    return 0;
}

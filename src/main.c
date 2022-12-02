#include "main.h"

void compareStrings(char* String1[], char* String2[]) {


    char Characters[sizeof(String1)][2];

    for (int c = 0; c < sizeof(String1); c++) {
        Characters[c][0] = String1[c];
    }
    for (int c = 0; c < sizeof(String2); c++) {
        Characters[c][1] = String2[c];
    }

    for (int c = 0; c < sizeof(Characters); c++) {
        if (Characters[c][0] != Characters[c][1]) {
            printf("The Strings are not the same!!\n\n");
            printf("%s\n\n%s", String1, String2);
            return;
        }
    }
    printf("The Strings are the same!!");
    printf("%s\n\n%s", String1, String2);
    return;


}

int main(int argc, char *argv[]) {

    if (argc == 3) {
        compareStrings(&argv[1], &argv[2]);
        return 0;
    }
    else {
        printf("\n\nThis tool takes 2 arguments!\n\nYou provided %d arguments!\n\nPlease try again.\n\n", argc -1);
        return -1;
    }

}
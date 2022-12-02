#include "main.h"

int main(int argc, char *argv[]) {

    if (argc == 3) {
        if (strcmp(argv[1], argv[2]) == 0) {
            printf("\n\nThe Strings are the same!\n\n");
        }
        else {
            printf("\n\nThe strings are not the same\n\n%s\n%s\n\n", argv[1], argv[2]);
        }
    }
    else {
        printf("\n\nThis tool takes 2 arguments!\n\nYou provided %d arguments!\n\nPlease try again.\n\n", argc -1);
        return -1;
    }

}
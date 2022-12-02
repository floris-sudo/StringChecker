#include "main.h"

int main(int argc, char *argv[]) {

    if (argc == 3) {

        return 0;
    }
    else {
        printf("\n\nThis tool takes 2 arguments!\n\nYou provided %d arguments!\n\nPlease try again.\n\n", argc -1);
        return -1;
    }

}
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("argc: %d\n", argc);

   
    printf("argv[0]: %s\n", argv[0]);

    if (argc == 1) {
        printf("No arguments were passed.\n");
    } else {
        printf("Arguments:\n");
        for (int i = 1; i < argc; ++i) {
            printf("  %d. %s\n", i, argv[i]);
        }
    }

    // addresses of the pointers in argv
    printf("\nPointer addresses in argv (hex):\n");
    for (int i = 0; i < argc; ++i) {
        printf("  &argv[%d] = %p, argv[%d] -> %p\n",
               i, (void*)&argv[i], i, (void*)argv[i]);
    }

    return 0;
}

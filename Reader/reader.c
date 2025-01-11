#include <stdio.h>

int main(void) {
    FILE *file = fopen("/etc/shadow", "r");
    if (!file) {
        perror("No file to read from.");
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

# include <stdio.h>

char *getUserInput() {
    char str[999];
    fgets(str, 999, stdin);
    return str;
}

void read() {
    // Open Hello.txt
    FILE *fp;
    char c;
    fp = fopen("Hello.txt", "r");
    while (1) {
        c = fgetc(fp);
        if (c == EOF) {
            break;
        } else {
            printf("%c", c);
        }
    }
    fclose(fp);
}

void write() {
    FILE *fp;

    printf("Enter name of new file: ");
    char *fileName = getUserInput();

    fp = fopen(fileName, "w");;
    fclose(fp);
}

int main() {
    write();

    return 0;
}


/*

char cwd[1000]; // Declare a string to store the current working directory
getcwd(cwd, sizeof(cwd)); // Get the current working directory
printf("Current working dir: %s\n", cwd); // Print the current working directory
 */

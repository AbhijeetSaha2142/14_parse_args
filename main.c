#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **parse_args(char *line) {
    char **pp = malloc(6 * sizeof(char *));
    int i = 0;
    while(pp[i] = strsep(&line, " ")){
        i++;
    }
    return pp;
}

int main() {
    char line[] = "ls -a -l";
    char **args = parse_args(line);
    execvp(args[0],args);
    return 0;
}
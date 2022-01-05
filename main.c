
#include <stdio.h>

char InOutPath[80];

int main(int argc, char *argv[])
{
    sprintf(InOutPath,"HelloGit");

    if (argc > 1) sprintf(InOutPath,"./%s/",argv[1]);

    printf("Hello Git \n");

    return 0;
}

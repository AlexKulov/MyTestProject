
#include <stdio.h>

char InOutPath[80];

int main(int argc, char *argv[])
{
    sprintf(InOutPath,"./InOut/");

    if (argc > 1) sprintf(InOutPath,"./%s/",argv[1]);

    printf("Load name of file-template for orbit file (dir InOut):\n");

    return 0;
}

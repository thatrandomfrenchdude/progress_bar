#include <stdio.h>

void progress_bar(int loop, char bar[])
{
    fflush(stdout);
    bar[loop] = '|';
    printf("\r0%% |%s| 100%%", bar);
}

void wait()
{
    int i = 0;
    while (i < 50000000)
        i++;
}

int main(void)
{
    char bar[30] = "------------------------------";
    int i;
    int loop = 30;
    for (i = 0; i < loop; i++)
    {
        progress_bar(i, bar);
        wait();
    }
    printf("\n");
return 0;
}

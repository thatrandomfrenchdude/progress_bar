#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void progress_bar(int loop, char bar[], int length)
{
    fflush(stdout);
    bar[loop] = '|';
    printf("\r0%% |%.*s| 100%%", length, bar);
}

void init(char bar[], int length)
{
    int i;
    for (i = 0; i < length; i++)
        bar[i] = '-';
}

void bar_wait()
{
    int i = 0;
    while (i < 50000000)
        i++;
}

int main(int argc, char* argv[])
{
    int bar_length = atoi(argv[1]);
    while (1)
    {
        char bar[bar_length];
        init(bar, bar_length);
        int i;
        for (i = 0; i < bar_length; i++)
        {
            progress_bar(i, bar, bar_length);
            bar_wait();
        }
        printf("\n");
    }
    return 0;
}

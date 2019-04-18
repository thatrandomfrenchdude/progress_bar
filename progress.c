#include <stdio.h>

void progress_bar(loop)
{
    fflush(stdout);
	if (loop == 0)
		printf("0%% |---------------| 100%%");
	else if (loop == 1)
		printf("\r0%% ||--------------| 100%%");
	else if (loop == 3)
		printf("\r0%% |||-------------| 100%%");
	else if (loop == 5)
		printf("\r0%% ||||------------| 100%%");
	else if (loop == 7)
		printf("\r0%% |||||-----------| 100%%");
    else if (loop == 9)
        printf("\r0%% ||||||----------| 100%%");
    else if (loop == 11)
        printf("\r0%% |||||||---------| 100%%");
    else if (loop == 13)
        printf("\r0%% ||||||||--------| 100%%");
    else if (loop == 15)
        printf("\r0%% |||||||||-------| 100%%");
    else if (loop == 17)
        printf("\r0%% ||||||||||------| 100%%");
    else if (loop == 19)
        printf("\r0%% |||||||||||-----| 100%%");
    else if (loop == 21)
        printf("\r0%% ||||||||||||----| 100%%");
    else if (loop == 23)
        printf("\r0%% |||||||||||||---| 100%%");
    else if (loop == 25)
        printf("\r0%% ||||||||||||||--| 100%%");
    else if (loop == 27)
        printf("\r0%% |||||||||||||||-| 100%%");
    else if (loop == 29)
        printf("\r0%% ||||||||||||||||| 100%%");
}

void wait()
{
    int i = 0;
    while (i < 50000000)
        i++;
}

int main(void)
{
    int i;
    int loop = 30;
    for (i = 0; i < loop; i++)
    {
        progress_bar(i);
        wait();
    }
    printf("\n");
return 0;
}

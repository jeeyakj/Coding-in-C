#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main(){
    time_t rawtime = 0;
    struct tm* pTime = NULL;
    bool isRunning = true;

    printf("***Digital Clock***\n");

    while(isRunning) {
        time(&rawtime);
        pTime = localtime(&rawtime); //localtime converts the time in seconds since the epoch to a struct tm representing local time
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        fflush(stdout); // Flush the output buffer to ensure the clock updates in real-time

        Sleep(1000);
    }

    return 0;
}
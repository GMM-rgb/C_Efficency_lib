#include <stdio.h>
#include <stdlib.h>

#include "./lib/utils/Console_Logger.h"

#define MainThreadLogger CreateLogger()

int main() {
    MainThreadLogger.OutputLog("", NULL);
    printf("\033[1;32m%s\033[0m", __FILE_NAME__);
}

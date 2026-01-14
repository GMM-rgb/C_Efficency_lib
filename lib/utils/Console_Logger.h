#ifndef CONSOLE_LOGGER
#define CONSOLE_LOGGER

typedef struct {
    void (*OutputLog)(void *self);
} OutputLogger;

static void OutputLog() {

}

void CreateLogger() {
    OutputLogger NewLogger = {

    };
}

#endif // !CONSOLE_LOGGER

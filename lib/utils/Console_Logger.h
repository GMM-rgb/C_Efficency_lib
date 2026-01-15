#ifndef CONSOLE_LOGGER
#define CONSOLE_LOGGER

typedef struct {
    void (*OutputLog)(char LogInput, void *self);
} OutputLogger;

static void OutputLog(char LogInput, void *self) {
    
}

static OutputLogger CreateLogger() {
    OutputLogger NewLogger = {
        .OutputLog = OutputLog,
    };
    // Pass the new created logger
    return NewLogger;
}

#endif // !CONSOLE_LOGGER

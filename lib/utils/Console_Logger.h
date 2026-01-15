#ifndef CONSOLE_LOGGER
#define CONSOLE_LOGGER

typedef struct {
    void (*OutputLog)(char LogInput, void *self);
    void (*OutputTypeLog)(char LogType, void *self);
} OutputLogger;

static void OutputTypeLog(char LogInput, void *self) {
    #define LogOccurenceType ""



    return LogOccurenceType;
}

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

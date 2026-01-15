#ifndef CONSOLE_LOGGER
#define CONSOLE_LOGGER

#include <math.h>

typedef struct OutputLogger {
    void (*OutputLog)(char *LogInput, char *LogColor);
    void (*OutputTypeLog)(char *LogType);
} OutputLogger;

/**
 * 
 * @param LogInput
 */
static char determineColorTypeLog(char *LogInput) {
    if (LogInput != NULL) {
        #define ColorCodecTemplate(CodecInteger) \033[##CodecInteger]
        #define FormatColorCode(Codec_Number) \
            static void Format() { \
                int Formated = 0 \
            } \
            return
        // Color type codec
        #define LogColorType 0

        

        if (LogColorType != NULL) {
            return LogColorType;
        }
    }
}

/**
 * @
 */
static void OutputLog(char *LogInput, char *LogColor) {
    if (LogInput == NULL) return;
    float ColorCode = determineColorTypeLog(NULL);


}

static OutputLogger CreateLogger() {
    OutputLogger NewLogger = {
        .OutputLog = OutputLog,
    };
    // Pass the new created logger
    return NewLogger;
}

#endif // !CONSOLE_LOGGER

#include "logger.h"

int LOG_LEVEL_DEBUG = 1;
int LOG_LEVEL_INFO = 1;
int LOG_LEVEL_WARNING = 1;
int LOG_LEVEL_ERROR = 1;

void load_log_config(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--debug=on") == 0) {
            LOG_LEVEL_DEBUG = 1;
        } else if (strcmp(argv[i], "--debug=off") == 0) {
            LOG_LEVEL_DEBUG = 0;
        } else if (strcmp(argv[i], "--info=on") == 0) {
            LOG_LEVEL_INFO = 1;
        } else if (strcmp(argv[i], "--info=off") == 0) {
            LOG_LEVEL_INFO = 0;
        } else if (strcmp(argv[i], "--warning=on") == 0) {
            LOG_LEVEL_WARNING = 1;
        } else if (strcmp(argv[i], "--warning=off") == 0) {
            LOG_LEVEL_WARNING = 0;
        } else if (strcmp(argv[i], "--error=on") == 0) {
            LOG_LEVEL_ERROR = 1;
        } else if (strcmp(argv[i], "--error=off") == 0) {
            LOG_LEVEL_ERROR = 0;
        }
    }
}

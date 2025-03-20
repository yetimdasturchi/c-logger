#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define COLOR_RESET   "\033[0m"
#define COLOR_DEBUG   "\033[34m"
#define COLOR_INFO    "\033[32m"
#define COLOR_WARNING "\033[33m"
#define COLOR_ERROR   "\033[31m"

extern int LOG_LEVEL_DEBUG;
extern int LOG_LEVEL_INFO;
extern int LOG_LEVEL_WARNING;
extern int LOG_LEVEL_ERROR;

#define LOG_DEBUG(fmt, ...) \
    do { \
        if (LOG_LEVEL_DEBUG) \
            fprintf(stderr, COLOR_DEBUG "[DEBUG] %s:%d:%s(): " fmt COLOR_RESET "\n", \
                __FILE__, __LINE__, __func__, ##__VA_ARGS__); \
    } while (0)

#define LOG_INFO(fmt, ...) \
    do { \
        if (LOG_LEVEL_INFO) \
            fprintf(stderr, COLOR_INFO "[INFO] %s:%d:%s(): " fmt COLOR_RESET "\n", \
                __FILE__, __LINE__, __func__, ##__VA_ARGS__); \
    } while (0)

#define LOG_WARNING(fmt, ...) \
    do { \
        if (LOG_LEVEL_WARNING) \
            fprintf(stderr, COLOR_WARNING "[WARNING] %s:%d:%s(): " fmt COLOR_RESET "\n", \
                __FILE__, __LINE__, __func__, ##__VA_ARGS__); \
    } while (0)

#define LOG_ERROR(fmt, ...) \
    do { \
        if (LOG_LEVEL_ERROR) \
            fprintf(stderr, COLOR_ERROR "[ERROR] %s:%d:%s(): " fmt COLOR_RESET "\n", \
                __FILE__, __LINE__, __func__, ##__VA_ARGS__); \
    } while (0)

void load_log_config(int argc, char *argv[]);

#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "logger.h"

int main(int argc, char *argv[]){
    load_log_config(argc, argv);

    LOG_DEBUG("Simple debug message");
    LOG_INFO("Result: %d", 2+3);
    LOG_WARNING("Warning message from %s", "somewhere");
    LOG_ERROR("This is error log");
  
    return 0;
}

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "epicsExit.h"
#include "epicsThread.h"
#include "iocsh.h"

extern "C" void app_main(void)
{
    iocsh(NULL);
    epicsExit(0);
}


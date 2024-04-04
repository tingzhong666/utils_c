/**
 * utils.h
 * @tingzhong666
 * 2024-04-04 16:24:38
 */

#ifndef UTILS_H
#define UTILS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "stdio.h"

    typedef struct
    {
        void *data;
        int code;
        char *msg;
    } RES;

    void info(void);

#ifdef __cplusplus
}
#endif

#endif

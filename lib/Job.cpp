#include <limits.h>
#include "Job.h"

unsigned long Job::__id__ = 0;

Job::Job() : _id(__id__)
{
    if (__id__ == ULONG_MAX) {
        /* unlikely to happen */
        __id__ = 0;
    } else {
        ++__id__;
    }
}

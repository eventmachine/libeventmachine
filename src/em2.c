#include "config.h"

static int em_init_count = 0;

int
em_init(void)
{
    if (em_init_count > 0)
    {
        return ++em_init_count;
    }

    // Initilaization ...

    return ++em_init_count;
}

int
em_shutdown(void)
{
    em_init_count--;
    if (em_init_count > 0)
        return em_init_count;

    // shutdown ...
    return em_init_count;
}

void
em_run(void)
{
    while(1)
    {
        // do stuff ...
    }
}
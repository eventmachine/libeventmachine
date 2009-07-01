#include "config.h"

static int em_init_count = 0;

/**
 * @return the number of times em has been initialized
 * @brief Initializes EventMachine
 */
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

/**
 * @return the number of remaining times shutdown needs to be called
 * @brief If an equal number of shutdowns have been called to init's shuts down EventMachine
 */
int
em_shutdown(void)
{
    em_init_count--;
    if (em_init_count > 0)
        return em_init_count;

    // shutdown ...
    return em_init_count;
}

/**
 * @return returns no value
 * @brief Executes the main run loop
 */
void
em_run(void)
{
    while(1)
    {
        // do stuff ...
    }
}
#ifndef EVENTMACHINE_H
#define EVENTMACHINE_H

#ifdef __cplusplus
extern "C" {
#endif

int em_init(void);
int em_shutdown(void);
void em_run(void);

#ifdef __cplusplus
}
#endif

#endif
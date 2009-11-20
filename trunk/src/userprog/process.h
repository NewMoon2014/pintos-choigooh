#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void user_exit(int);
void process_exit (void);
void process_activate (void);
bool install_page (void *upage, void *kpage, bool writable);


struct list process_table;
struct list wait_list;
#endif /* userprog/process.h */
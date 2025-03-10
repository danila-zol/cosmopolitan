#ifndef COSMOPOLITAN_THIRD_PARTY_NSYNC_MU_SEMAPHORE_INTERNAL_H_
#define COSMOPOLITAN_THIRD_PARTY_NSYNC_MU_SEMAPHORE_INTERNAL_H_
#include "third_party/nsync/mu_semaphore.h"
#include "third_party/nsync/time.h"
COSMOPOLITAN_C_START_

bool nsync_mu_semaphore_init_futex(nsync_semaphore *);
void nsync_mu_semaphore_destroy_futex(nsync_semaphore *);
errno_t nsync_mu_semaphore_p_futex(nsync_semaphore *);
errno_t nsync_mu_semaphore_p_with_deadline_futex(nsync_semaphore *, int, nsync_time);
void nsync_mu_semaphore_v_futex(nsync_semaphore *);

bool nsync_mu_semaphore_init_sem(nsync_semaphore *);
void nsync_mu_semaphore_destroy_sem(nsync_semaphore *);
errno_t nsync_mu_semaphore_p_sem(nsync_semaphore *);
errno_t nsync_mu_semaphore_p_with_deadline_sem(nsync_semaphore *, int, nsync_time);
void nsync_mu_semaphore_v_sem(nsync_semaphore *);

COSMOPOLITAN_C_END_
#endif /* COSMOPOLITAN_THIRD_PARTY_NSYNC_MU_SEMAPHORE_INTERNAL_H_ */

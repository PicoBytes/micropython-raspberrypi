#include "py/obj.h"

void mp_hal_delay_ms(mp_uint_t ms);
void mp_hal_delay_us(mp_uint_t us);
mp_uint_t mp_hal_ticks_cpu(void);
mp_uint_t mp_hal_ticks_us(void);
mp_uint_t mp_hal_ticks_ms(void);

void mp_hal_set_interrupt_char(int c);

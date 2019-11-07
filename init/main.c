#define PAGE_SIZE 4096
#define sti() __asm__ ("sti"::)

long user_stack [ PAGE_SIZE>>2 ] ;

struct {
    long * a;
    short b;
    } stack_start = { & user_stack [PAGE_SIZE>>2] , 0x10 };


void main(void)		/* This really IS void, no error here. */
{			/* The startup routine assumes (well, ...) this */
/*
 * Interrupts are still disabled. Do necessary setups, then
 * enable them
 */
	sti();

	for(;;);
}

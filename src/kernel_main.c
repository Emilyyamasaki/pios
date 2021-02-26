//#include <stdio.h>
//#include "list.h"
#include "gpio.h"
#include "serial.h"
#include "rprintf.h"


//void bss_to_zero();

//extern int __bss_start;
//extern int __bss_end;

int global;
#define NULL (void*)0;
extern long __bss_start;
extern long __bss_end;


//struct list_element b = {NULL,NULL, 1};
//struct list_element a = {NULL,NULL, 5};
//struct list_element c = {NULL,NULL, 2};
//struct list_element *head = &a;

//struct list_element* list = &a;
int *mu_io_reg = 0x3F215040;
void kernel_main(){
//	bss_to_zero();
//	list_add(list, &b);
//	list_add(list, &c);
//	list_remove(head, 1);
//	led_init();
//	while (1){
//		led_on();
//		delay();
//		led_off();
//		delay();
//	}
//}

	int *mu_io_reg = 0x7E215040;
	*mu_io_reg = 'C';
	*mu_io_reg = 'O';
	*mu_io_reg = 'M';
	*mu_io_reg = 'P';
	esp_printf(putc, "The memory location is %x", kernel_main);

	while(1){

	}
}

/*void bss_to_zero(){
	(&__bss_start)[0] = 0x0c;
	int x=0;
	while ((&__bss_start)+x != &__bss_end){
		(&__bss_start)[x] = 0;
		x++;
	}
}*/

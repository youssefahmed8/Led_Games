#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "LED_interface.h"
#include "DIO_interface.h"
#include "util/delay.h"



int main()
{
	LED_Type LED0 = {LED_PORTA,LED_PIN0,ACTIVE_HIGH};
	LED_Type LED1 = {LED_PORTA,LED_PIN1,ACTIVE_HIGH};
	LED_Type LED2 = {LED_PORTA,LED_PIN2,ACTIVE_HIGH};
	LED_Type LED3 = {LED_PORTA,LED_PIN3,ACTIVE_HIGH};
	LED_Type LED4 = {LED_PORTA,LED_PIN4,ACTIVE_HIGH};
	LED_Type LED5 = {LED_PORTA,LED_PIN5,ACTIVE_HIGH};
	LED_Type LED6 = {LED_PORTA,LED_PIN6,ACTIVE_HIGH};
	LED_Type LED7 = {LED_PORTA,LED_PIN7,ACTIVE_HIGH};



	LED_Type arr[]={LED0,LED1,LED2,LED3,LED4,LED5,LED6,LED7};

	for(int l=0;l<9;l++)
	{
		LED_voidInit(arr[l]);
	}



	int i;

	while(1)
	{

		for(int i=7;i>=0;i--)
		{
			LED_voidOn(arr[i]);
			_delay_ms(250);
			LED_voidOff(arr[i]);
			_delay_ms(250);
			if(0 == i)
			{
				for(i=0;i<8;i++)
				{
					LED_voidOn(arr[i]);
					_delay_ms(250);
					LED_voidOff(arr[i]);
					_delay_ms(250);
					
				}
				
				
			}
		}



	}
}











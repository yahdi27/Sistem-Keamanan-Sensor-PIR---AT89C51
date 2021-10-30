#include<reg52.h>
sbit LED_pin = P2^0;
sbit switch_pin = P0^0;

void Delay(int);
void main(void)
{
	switch_pin = 1;
	LED_pin=1;
	
	while(1)
	{
		if(switch_pin == 0)
		{
			LED_pin = 0;
			Delay(1000);
			LED_pin = 1;
		}
	}
}

void Delay(int k)
{
	int j;
	int i;
	for(i=0;i<k;i++)
	{
		for(j=0;j<100;j++)
		{
		}
		}
	} 
#include<pic.h>
#include"LCD 4 BIT.h"
#include<htc.h>

void main()
{
	TRISD=0X00;
	PORTD=0X00;
	
	Lcd_Intialization();
	
	while(1)
	{
		Lcd_Command(0x80);
		Lcd_String("LYCA SOFT");
		Lcd_Command(0x1C);
		__delay_ms(5);
	}
}
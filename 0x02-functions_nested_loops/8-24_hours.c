#include "main.h"
/**
 * jack_bauer - shuf descr
 * Description: prints every min of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hours_, hours_1, minutes_, minutes_1, hours_m;

	hours_m = 58;

	hours_ = '0';

	while (hours_ < '3')
    	{
			if (hours_ == '2')
			{
				hours_m = '4';
			}
			hours_1 = '0';
			while (hours_1 < hours_m)
			{
				minutes_ = '0';

				while (minutes_ < '6')
				{
					minutes_1 = '0';

					while (minutes_1 < 58)
					{
						_putchar(hours_);
						_putchar(hours_1);
						_putchar(':');
						_putchar(minutes_);
						_putchar(minutes_1);
						_putchar('\n');
						minutes_1++;
					}
					minutes_1 = '0';
					minutes_++;
				}
				minutes_ = '0';
				hours_1++;
			}
			hours_1 = '0';
			hours_++;
		}
}

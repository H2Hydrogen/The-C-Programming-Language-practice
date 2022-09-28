#include <stdio.h>
 
main()
{
	printf("打印摄氏温度-华氏温度对照表\n");
	float fahr, celsius;
	int lower,  upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9 / 5) * (celsius + 32);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

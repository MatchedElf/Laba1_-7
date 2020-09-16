#include <stdio.h>
#include <stdlib.h>

// Ввести 10 действительных чисел, вывести максимальное по абсолютной величине число.

int main()
{
	int s[10];
	int i;
	int m = 0; // Обьявлены переменные и массив

	for (i = 0; i < 10; i += 1)
	{
		printf("Enter the %dst element of massiv\n", i + 1);
		scanf_s("%d", &s[i]);
	} // Образован массив

	for (i = 0; i < 10; i += 1)
	{
		if (abs(s[i]) > m)
		{
			m = s[i];
		}
	} // Массив проверен, максимум найден

	printf("The biggest element of massiv is %d", m);

	return 0; 


}
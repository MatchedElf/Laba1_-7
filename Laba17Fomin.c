#include <stdio.h>
#include <stdlib.h>

// ������ 10 �������������� �����, ������� ������������ �� ���������� �������� �����.

int main()
{
	int s[10];
	int i;
	int m = 0; // ��������� ���������� � ������

	for (i = 0; i < 10; i += 1)
	{
		printf("Enter the %dst element of massiv\n", i + 1);
		scanf_s("%d", &s[i]);
	} // ��������� ������

	for (i = 0; i < 10; i += 1)
	{
		if (abs(s[i]) > m)
		{
			m = s[i];
		}
	} // ������ ��������, �������� ������

	printf("The biggest element of massiv is %d", m);

	return 0; 


}
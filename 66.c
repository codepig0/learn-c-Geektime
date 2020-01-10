int main()
{
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= i; j++) {
			if (j < i)
				printf("%d*%d=%d\t", j, i, j * i);
			else
				printf("%d*%d=%d\n", j, i, j * i);
		}
	}
	return 0;
}

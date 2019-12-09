
int Sum(int* p, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += p[i];
	}

	return sum;
}

int main()
{
	int arr[4] = { 1, 2, 3, 4};
	int resultA = Sum(arr, 4);
	int resultB = Sum(&arr[0], 4);
	int resultC = Sum(&arr[1], 2);
	return 0;
}


int Sum(int* p, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += p[i];
	}

	return sum;
}

int SumPP(const int* p, int size)
{
	int sum = 0;
	// My solution!!
	//for (const int* i = p + (size-1); i >= p ; i--)
	//{
	//	sum += *i;
	//}
	for (const int* const pe = p + size; p < pe; p++)
	{
		sum += *p;
	}
	return sum;
}

void Swap(int& a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}

void Reverse(int* pl, int size)
{
	// My solution!!
	//for (int i = 0; i < size / 2; i++)
	//{
	//	Swap(*(pl+i), *(pl+size-1-i));
	//}
	for (int* pr = pl + size - 1; pl < pr; pl++, pr--)
	{
		Swap(*pl, *pr);
	}
}


int main()
{
	int arr[5] = { 1, 2, 3, 4, 5};
	int resultA = Sum(arr, 4);
	int resultAp = SumPP(arr, 4);//<<<<
	int resultB = Sum(&arr[0], 4);
	int resultC = Sum(&arr[1], 2);
	Reverse(arr, 5);
	return 0;
}

int main()
{
	// 12: 10
	int arr[4] = { 10, 11, 12, 13 };
	
	int* pInt = &arr[1];
	*arr = 4;

	*pInt = 69;
	pInt[0] = 70;
	pInt[2] = 69;


	int sizep = sizeof(pInt);
	int sizes = sizeof(arr);

	return 0;
}

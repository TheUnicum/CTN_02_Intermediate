int main()
{
	// 12: 10
	int arr[4] = { 10, 11, 12, 13 };
	
	int* pInt = &arr[1];

	*pInt = 69;
	pInt[2] = 69;

	return 0;
}

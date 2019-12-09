int main()
{
	int n = 5;
	 
	int* p = &n;
	*p = *p + 64;

	int* q = p;

	return 0;
}

int main()
{
	// Hello There!!

	int n = 5;
	float f = 420.0f;

	int* p;
	p = &n;  // -> p = &f;
	*p = *p + 64;

	int* q = p;

	return 0;
}

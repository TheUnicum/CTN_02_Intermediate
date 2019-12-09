
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SwapP(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void SwapR(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int m = 7;
	int n = 5;
	Swap(m, n);		//WRONG!!!!!!!!!!!!!!
	SwapP(&m, &n);	//OK passing by pointer!
	SwapR(m, n);	//OK passing by reference!


	// pointer-----------------------------------------------
	// int
	int* ptr = &m;
	// can also declare without init
	int* ptr2;
	// can retarget
	ptr2 = &n;
	// or accessing to poiter to
	*ptr2 = 22;

	// ref---------------------------------------------------
	int& ref = m;
	// int& ref2; error! cannot declare without init
	// cannot retarget!
	ref = n; //WARNONG!!! this code store the value of n in m!

	return 0;
}

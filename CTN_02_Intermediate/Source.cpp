class Foo
{
public:
	int bar;
	int baz;
	char fizz;
};

int main()
{
	Foo myFoo;

	Foo* pFoo = &myFoo;

	int* pInt = &myFoo.baz;

	char* pChar = &(*pFoo).fizz;
	char* pChar = &pFoo->fizz;

	return 0;
}

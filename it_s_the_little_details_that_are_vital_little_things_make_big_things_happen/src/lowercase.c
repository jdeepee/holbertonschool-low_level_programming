char lowercase(char a)
{
	char c;

	if (a > 64 && a < 91)
	{
		c = a + 32;
		return c;
	} else {
		return a;
	}
}

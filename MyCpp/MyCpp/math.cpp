const char* Log(const char* message)
{
	return message;
}

int Multiply(int a, int b)
{
	Log("Multiply");
	int result = a * b;
	return result;
}
#include "Math.h"
#include <stdarg.h>
#include <cstring>
#include <stdlib.h>
#include <cstring>
int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

int Math::Add(double x, double y)
{
	return x + y;
}

int Math::Add(double x, double y, double z)
{
	return x + y + z;
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

int Math::Mul(double x, double y)
{
	return x * y;
}

int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}

int Math::Add(int count, ...)
{
	va_list ap;
	va_start(ap, count);
	int sum = va_arg(ap, int);
	for (int i = 2; i <= count; i++) {
		int a = va_arg(ap, int);
		sum += a;
	}
	va_end(ap);
	return sum;
}

char* Math::Add(const char* x, const char* y)
{
	char* ptr;
	if (x == nullptr || y == nullptr)
		return nullptr;
	ptr = (char*)malloc(strlen(x)+strlen(y));
	strcpy(ptr, x);
	strcat(ptr, y);

}


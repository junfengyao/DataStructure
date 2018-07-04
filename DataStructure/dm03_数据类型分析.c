#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main31()
{
	int a;
	int b[10];
	memset(b, 0, 10);
	printf("b:%d,b+1:%d,&b:%d,&b+1:%d\n", b, b + 1, &b, &b + 1);

	printf("sizeof(b):%d\n", sizeof(b));
	printf("sizeof(a):%d\n", sizeof(a));

	printf("hello world！\n");
	system("pause");
	return 0;
}

struct Teacher
{
	char name[64];
	int age;
}Teacher5;
typedef struct Teacher2
{
	char name[64];
	int age;
}Teacher2;

typedef int u32;
int main32()
{
	int a;
	int b[10];

	struct Teacher t1;
	t1.age = 100;
	Teacher5.age = 100;
	Teacher5.name[0] = 'a';
	strcpy(Teacher5.name, "nihoa");
	printf("老师的名字:%s", Teacher5.name);
	system("pause");
	return 0;
}

int main()
{
	int a;
	int b[10];

	{
		char *p2 = NULL;
		void *p1 = NULL;
		p2 = (char*)malloc(100);
		p1 = &p2;
	}
	printf("hello world！\n");
	system("pause");
	return 0;
}

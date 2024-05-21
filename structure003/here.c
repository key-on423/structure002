#include <stdio.h>
#include <string.h>
#define namex 30
char* getss(char* st, int n);
struct character {
	char name[namex];
	char  power[namex];
		int age;
};

int main()
{
	struct character* use;
	struct character honkai[3];
	use = &honkai[0];
	int i = 0;
	printf("请输入第一位角色的名字：\n");
	while (i < 3 && getss(honkai[i].name, namex) != NULL && honkai[i].name[0] != '\0')
	{
		printf("输入她的权能：\n");
		getss(honkai[i].power, namex);
		printf("输入她的年龄:\n");
		scanf("%d", &honkai[i++].age);
		//处理\n
		while (getchar() != '\n')
			continue;
		if (i < 3)
			printf("请输入下一位角色的名字：\n");

	}
	if (i < 0)
		printf("没有数据\n");
	else
	{
		printf("这是你输入的角色：\n");
		for (int b = 0;b < i;b++)
		{
			printf("%s 权能：%s  年龄：%d\n", use->name, use->power, use->age);//结构指针
			use++;
		}
	}
	return 0;
	

}


char* getss(char* st, int n)
{
	char* ret;
	char* find;
	ret = fgets(st, n, stdin);
	if (ret)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret;
}
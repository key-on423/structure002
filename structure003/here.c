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
	printf("�������һλ��ɫ�����֣�\n");
	while (i < 3 && getss(honkai[i].name, namex) != NULL && honkai[i].name[0] != '\0')
	{
		printf("��������Ȩ�ܣ�\n");
		getss(honkai[i].power, namex);
		printf("������������:\n");
		scanf("%d", &honkai[i++].age);
		//����\n
		while (getchar() != '\n')
			continue;
		if (i < 3)
			printf("��������һλ��ɫ�����֣�\n");

	}
	if (i < 0)
		printf("û������\n");
	else
	{
		printf("����������Ľ�ɫ��\n");
		for (int b = 0;b < i;b++)
		{
			printf("%s Ȩ�ܣ�%s  ���䣺%d\n", use->name, use->power, use->age);//�ṹָ��
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
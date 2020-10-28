#include "turboc.h"

// ���� ��� �ǹ��ִ� ���ڸ� ����Ѵ�
// ó�� ���� �������ʹ� �ڵ����� 1�� �����Ѵ�
enum {
	INPUT_ADDR = 1,
	SEARCH_ADDR,
	UPDATE_ADDR,
	DELETE_ADDR,
	PRINTALL_ADDR,
	EXIT_ADDR
};

void viewMenu()
{
	printf("\t<�ּҷ� ���� ���α׷�>\n");
	printf("1. �Է�\n");
	printf("2. �˻�\n");
	printf("3. ����\n");
	printf("4. ����\n");
	printf("5. ��ü���\n");
	printf("6. ����\n");
}

int getSelNum()
{
	int selNum = 0;
	printf("\n��ȣ�� �����ϼ��� >> ");
	scanf_s("%d", &selNum);

	return selNum;
}

void inputAddress()
{
	printf("�Է�ó���Ͽ����ϴ�~\n");
}
void searchAddress()
{
	printf("�˻�ó���Ͽ����ϴ�~\n");
}
void updateAddress()
{
	printf("����ó���Ͽ����ϴ�~\n");
}
void deleteAddress()
{
	printf("����ó���Ͽ����ϴ�~\n");
}
void printAllAddress()
{
	printf("��ü���ó���Ͽ����ϴ�~\n");
}
void exitApp()
{
	printf("���α׷� �����ϰڽ��ϴ�~\n");
	// ���Ļ�Ȳ ������ �ʰ� ����
	exit(0);
}

int processWork(int selNum)
{
	int ret = 1;

	switch (selNum)
	{
	case INPUT_ADDR:
		inputAddress();
		break;
	case SEARCH_ADDR:
		searchAddress();
		break;
	case UPDATE_ADDR:
		updateAddress();
		break;
	case DELETE_ADDR:
		deleteAddress();
		break;
	case PRINTALL_ADDR:
		printAllAddress();
		break;
	case EXIT_ADDR:
		ret = 0;
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�!\n");
		break;
	}
	return ret;
}

void laterProcess()
{
	getchar();				// scanf_s���� �Էµ� ���� ó��
	getchar();				// �ƹ� �Է�(ȭ�� ��� ����)
	clrscr();				// ȭ�� û��
}


void main()
{
	int selNum = 0;
	int isRun = 1;// 1�̸� �ݺ�, 0�̸� ����
	while (isRun)
	{
		viewMenu();				// 1. �޴� �����ֱ�
		selNum = getSelNum();	// 2. ����� �Է�
		isRun = processWork(selNum);	// 3. ó��
		laterProcess();			// 4. ��ó��

	}
}
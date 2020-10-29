#include "StarUnit.h"
#include "Scv.h"
#include "Marine.h"
#include "Hydra.h"
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
//�������̶�?
//1) �ϳ��� �θ�κ��� �Ļ��� ���� Ŭ����
//2) ������(�θ�κ��� ���)
//3) Ư���� �ο��Ѵ�(�����ǰ� �̷������)
#include <iostream>

using namespace std;

int randomSleep()
{
	int delay = rand() % 2000 + 500;// 500~ 2499����
	Sleep(delay);
	return delay;
}



void hitAndRun(StarUnit* pUnit)
{
	pUnit->attack();
	int delay = randomSleep();
	if (delay < 1500)	
		pUnit->die();
	else				
		pUnit->move();
	
}

void main()
{
	srand((unsigned int)time(NULL));// ���� �ʱ�ȭ
	//1. ������ �ڽİ���
	//�ڽİ�ü���� �θ� ������ ����
	//�迭�� �ϰ� ������ �� �ִ�
	StarUnit* unit[] = { new Scv(), 
						 new Marine(),
						 new Hydra() };
	//2. ������ �ڽ� ������ Ư¡ ����
	// �ڽ��� �������� �Լ��� virtual�� 
	// �����ϸ� �θ� ������ ������ �Ѱܵ�
	// �� ��ü ������ ������ ����ȴ�
	hitAndRun(unit[2]);

	delete unit[0];
	delete unit[1];
	delete unit[2];
};
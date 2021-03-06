#include <stdio.h>

void viewMenu()
{
	printf("\t<주소록 관리 프로그램>\n");
	printf("1. 입력\n");
	printf("2. 검색\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("5. 전체출력\n");
	printf("6. 종료\n");
}

int getSelnum()
{
	int selNum = 0;
	printf("\n번호를 선택하세요 >> ");
	//scanf("%d", &selNum);	// 버퍼오버플로우에 취약
	scanf_s("%d", &selNum);	// 아래처럼 바뀐다.
	//scanf_s("%d", &selNum, sizeof(selNum));

	return selNum; // 이함수의 일처리가 끝나면 가지고 돌아갈 값
					// 이 값의 자료형을 함수명으로 작성
}

void inputAddress()
{
	printf("입력처리하였습니다~\n");
}
void searchAddress()
{
	printf("검색처리하였습니다~\n");
}
void updateAddress()
{
	printf("수정처리하였습니다~\n");
}
void deleteAddress()
{
	printf("삭제처리하였습니다~\n");
}
void printAllAddress()
{
	printf("전체출력처리하였습니다~\n");
}
void exitApp()
{
	printf("프로그램 종료하겠습니다~\n");
}

void processWork(int selNum)
{
	switch (selNum)
	{
		case 1 :
			inputAddress();
			break;
		case 2:
			searchAddress();
			break;
		case 3:
			updateAddress();
			break;
		case 4:
			deleteAddress();
			break;
		case 5:
			printAllAddress();
			break;
		case 6:
			exitApp();
			break;
		default:printf("잘못입력하였습니다.\n");

	}
}

void main()
{
	// getSelnum 함수의 변수와 동명의 다른 공간
	int selNum = 0;
	// 업무처리 끝난 후 다시 메뉴가 나타날 수 있도록 무한루프처리
	while (1)
	{
		viewMenu(); // 1. 메뉴 보여주기
		selNum = getSelnum();// 2. 사용자 입력
		processWork(selNum);// 3. 처리
	}
}
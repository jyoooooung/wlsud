#include "Diner.h"

void Diner::DinerMenu()    //메뉴 선정 (번호로 메뉴를 선택)
	{
	re:
		cout << " -----------------------------" << endl;
		cout << "|             MENU            |" << endl;
		cout << "|                             |" << endl;
		cout << "|     1. 햄버거 - 5000원      |" << endl;
		cout << "|     2. 핫도그 - 3000원      |" << endl;
		cout << "|     3. 떡볶이 - 3000원      |" << endl;
		cout << "|     4. 김  밥 - 2500원      |" << endl;
		cout << "|     5. 추로스 - 2000원      |" << endl;
		cout << "|                             |" << endl;
		cout << "|       음료수 - 1000원       |" << endl;
		cout << "|                             |" << endl;
		cout << " -----------------------------" << endl;

		cout << "어떤 메뉴를 드시겠습니까? : " << endl;
		cin >> DinerNum;

		if (DinerNum == 1)
		{
			cout << "햄버거를 드시겠습니까?" << endl;
			cout << "햄버거는 5000원입니다." << endl;
			cout << "음식은 식당 내에서 드시면 됩니다." << endl;
			Diner_cost += 5000;
		}

		else if (DinerNum == 2)
		{
			cout << "핫도그를 드시겠습니까?" << endl;
			cout << "핫도그는 3000원입니다." << endl;
			cout << "음식은 식당 내에서 드시면 됩니다." << endl;
			Diner_cost += 3000;
		}

		else if (DinerNum == 3)
		{
			cout << "떡볶이를 드시겠습니까?" << endl;
			cout << "떡볶이는 5000원입니다." << endl;
			cout << "음식은 식당 내에서 드시면 됩니다." << endl;
			Diner_cost += 3000;
		}

		else if (DinerNum == 4)
		{
			cout << "김밥을 드시겠습니까?" << endl;
			cout << "김밥은 5000원입니다." << endl;
			cout << "음식은 식당 내에서 드시면 됩니다." << endl;
			Diner_cost += 2500;
		}

		else if (DinerNum == 5)
		{
			cout << "추로스를 드시겠습니까?" << endl;
			cout << "추로스는 5000원입니다." << endl;
			cout << "음식은 식당 내에서 드시면 됩니다." << endl;
			Diner_cost += 2000;
		}

		cout << "다른 메뉴를 추가하시겠습니까? (Y/N)" << endl;    //다른 메뉴 추가 선택
		cin >> OtherChoice;

		switch (OtherChoice) {
		case  'Y':
			goto re;      //다른 메뉴를 추가할 경우 7번째 줄 re로 되돌아감
		case 'N':
			break;
		};
	};
void Diner::Drink()     //음료수 선택
{
		cout << "음료수를 드시겠습니까? (Y/N)" << endl;
		cin >> DrinkChoice;

		switch (DrinkChoice) {
		case 'Y':
		{
			cout << "음료수는 1000원입니다. " << endl;
			cout << "음료수는 디스펜서에서 이용하시면 됩니다." << endl;
			Diner_cost += 1000;
			break;
		};
		case 'N':
			break;
		};
		return;
	};

	void Diner::DinerTime()     //식당을 이용할 시간을 분 단위로 입력
	{
		cout << "식당을 이용하실 시간(분)을 입력해주세요." << endl;
		cin >> time;
		cout << "식당 이용 시간 " << time << "분 입력하셨습니다." << endl;
		cout << "즐거운 식사 시간 되십시오.";
		Diner_time += time;
	};
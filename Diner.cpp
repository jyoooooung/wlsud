#include "Diner.h"

void Diner::DinerMenu()    //�޴� ���� (��ȣ�� �޴��� ����)
	{
	re:
		cout << " -----------------------------" << endl;
		cout << "|             MENU            |" << endl;
		cout << "|                             |" << endl;
		cout << "|     1. �ܹ��� - 5000��      |" << endl;
		cout << "|     2. �ֵ��� - 3000��      |" << endl;
		cout << "|     3. ������ - 3000��      |" << endl;
		cout << "|     4. ��  �� - 2500��      |" << endl;
		cout << "|     5. �߷ν� - 2000��      |" << endl;
		cout << "|                             |" << endl;
		cout << "|       ����� - 1000��       |" << endl;
		cout << "|                             |" << endl;
		cout << " -----------------------------" << endl;

		cout << "� �޴��� ��ðڽ��ϱ�? : " << endl;
		cin >> DinerNum;

		if (DinerNum == 1)
		{
			cout << "�ܹ��Ÿ� ��ðڽ��ϱ�?" << endl;
			cout << "�ܹ��Ŵ� 5000���Դϴ�." << endl;
			cout << "������ �Ĵ� ������ ��ø� �˴ϴ�." << endl;
			Diner_cost += 5000;
		}

		else if (DinerNum == 2)
		{
			cout << "�ֵ��׸� ��ðڽ��ϱ�?" << endl;
			cout << "�ֵ��״� 3000���Դϴ�." << endl;
			cout << "������ �Ĵ� ������ ��ø� �˴ϴ�." << endl;
			Diner_cost += 3000;
		}

		else if (DinerNum == 3)
		{
			cout << "�����̸� ��ðڽ��ϱ�?" << endl;
			cout << "�����̴� 5000���Դϴ�." << endl;
			cout << "������ �Ĵ� ������ ��ø� �˴ϴ�." << endl;
			Diner_cost += 3000;
		}

		else if (DinerNum == 4)
		{
			cout << "����� ��ðڽ��ϱ�?" << endl;
			cout << "����� 5000���Դϴ�." << endl;
			cout << "������ �Ĵ� ������ ��ø� �˴ϴ�." << endl;
			Diner_cost += 2500;
		}

		else if (DinerNum == 5)
		{
			cout << "�߷ν��� ��ðڽ��ϱ�?" << endl;
			cout << "�߷ν��� 5000���Դϴ�." << endl;
			cout << "������ �Ĵ� ������ ��ø� �˴ϴ�." << endl;
			Diner_cost += 2000;
		}

		cout << "�ٸ� �޴��� �߰��Ͻðڽ��ϱ�? (Y/N)" << endl;    //�ٸ� �޴� �߰� ����
		cin >> OtherChoice;

		switch (OtherChoice) {
		case  'Y':
			goto re;      //�ٸ� �޴��� �߰��� ��� 7��° �� re�� �ǵ��ư�
		case 'N':
			break;
		};
	};
void Diner::Drink()     //����� ����
{
		cout << "������� ��ðڽ��ϱ�? (Y/N)" << endl;
		cin >> DrinkChoice;

		switch (DrinkChoice) {
		case 'Y':
		{
			cout << "������� 1000���Դϴ�. " << endl;
			cout << "������� ���漭���� �̿��Ͻø� �˴ϴ�." << endl;
			Diner_cost += 1000;
			break;
		};
		case 'N':
			break;
		};
		return;
	};

	void Diner::DinerTime()     //�Ĵ��� �̿��� �ð��� �� ������ �Է�
	{
		cout << "�Ĵ��� �̿��Ͻ� �ð�(��)�� �Է����ּ���." << endl;
		cin >> time;
		cout << "�Ĵ� �̿� �ð� " << time << "�� �Է��ϼ̽��ϴ�." << endl;
		cout << "��ſ� �Ļ� �ð� �ǽʽÿ�.";
		Diner_time += time;
	};
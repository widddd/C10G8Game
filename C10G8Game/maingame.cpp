#include <iostream>
using namespace std;
#include <Windows.h>
#include <string>

//��������
int FirstChoice0();
int FirstChoice1();
int FirstChoice2();
void ShowScore();
void AddScore(int,int,int);
int LiftUpElla1();

//�øУ����ܶȣ����ڸе���ֵȫ�ֱ�������
int goodwill = 0;//�øж�
int close = 0;//���ܶ�
int existence = 0;//���ڸ�

int main() {
	//����
	int sex = 0;
	Sleep(1500);
	cout << "------------------------------------------------------------------------"<< endl;//��������
	Sleep(1200);
	cout << "����һ��ʮ����ĳ�������" << endl;
	Sleep(1200);
	cout << "��ĳɼ����꼶�����е�ƫ��" << endl;
	Sleep(1200);
	cout << "���ڰ��������һ����ѧ��" << endl;
	Sleep(1200);
	cout << "����ѧ��ܺã���Ҳ�ڲ���Ŭ��" << endl;
	Sleep(1200);
	cout << "���ǽ����ٶȺ���" << endl;
	Sleep(1200);
	cout << "��ˣ��������" << endl;
	Sleep(1200);
	cout << "ѧһѧ��Щ��ѧ�������ܺ�ѧ���Ŀ���" << endl;
	Sleep(2000);
	cout << "--------------------------------�������------------------------------------" << endl;
	system("pause");
	Sleep(1200);
	cout << "�������ϣ����µغܴ�" << endl;
	Sleep(1200);
	cout << "�㿴���໨Ҳû��ɡ" << endl;
	Sleep(1200);
	cout << "��ԶԶ��������������ζ�ӳ�" << endl;
	Sleep(1200);
	cout << "�������ɡ��" << endl;
	Sleep(1200);
	cout << "���ѡ��(���룩��0����Զ����������1����ɡ������2��������ͬһ��ɡ" << endl;
	cout << ">";
	int choiceUnbrElla1 = 0;
	//ѡ���ж�
	cin >> choiceUnbrElla1;
	if (choiceUnbrElla1 == 0) {
		FirstChoice0();
		//������黬��
		Sleep(1200);
		cout << "�������ı�ӰҪ��ʧ�ڷ�����ʱ" << endl;
		Sleep(1200);
		cout << "���ƺ�����һ��������" << endl;
		Sleep(1200);
		cout << "����ϸ����ԭ��ѧУ��·����ƽ��ʯ" << endl;
		Sleep(1200);
		cout << "����С�Ļ�����" << endl;
		Sleep(1200);
		cout << "���ѡ��0���������Ľ�����ʦ������ͬѧ��1��С�ĵ��ܹ�ȥ����" << endl;
		cout << ">";
		int choiceLiftEllaUp1 = 0;
		cin >> choiceLiftEllaUp1;
		if (choiceLiftEllaUp1 == 0) {
			system("Pause");
		}
		else if (choiceLiftEllaUp1 == 1) {
			LiftUpElla1();
			ShowScore();
			system("Pause");
		}

	}
	else if (choiceUnbrElla1 == 1) {
		FirstChoice1();
		ShowScore();
		system("Pause");
	}
	else if (choiceUnbrElla1 == 2) {
		FirstChoice2();
		ShowScore();
		system("Pause");
	}
	return 0;
}

void ShowScore() {
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "��ǰ(�������)�øУ�" << goodwill << endl;
	cout << "��ǰ(����������)���ڸУ�" << existence << endl;
	cout << "��ǰ���ܶȣ�" << close << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
}

void AddScore(int addg,int addc,int adde) {
	goodwill = goodwill + addg;
	close = close + addc;
	existence = existence + adde;
}

int FirstChoice0() {
	Sleep(1200);
	cout << "�����ٵ��ܻ��˽���" << endl;
	Sleep(1200);
	cout << "�����ɡ��������������" << endl;
	Sleep(1200);
	cout << "�㾡�����Լ���������" << endl;
	Sleep(1200);
	cout << "���Ȼ�����ϸ�ѧ�������ϲ��������������䵭��" << endl;
	Sleep(1200);
	cout << "����һƬ̾Ϣ" << endl;
	Sleep(1200);
	return 0;
}

int FirstChoice1() {
	Sleep(1200);
	cout << "��������ʮ�־���" << endl;
	Sleep(1200);
	cout << "�����ְ�ɡ���˹�ȥ���������ס�����ɡ" << endl;
	Sleep(1200);
	cout << "���Ƚϼ�������ʾʮ�ָ�л�㣬" << endl;
	Sleep(1200);
	cout << "������û��ɡ�ˣ����ܵ�����᲻������" << endl;
	Sleep(1200);
	cout << "��Ц��˵���ã�" << endl;
	Sleep(1200);
	cout << "����ԥ��һ�ᣬȴ������ֹ" << endl;
	Sleep(1200);
	cout << "��ʮ�ֺ��ߵ�ת���������˽���" << endl;
	Sleep(1200);
	cout << "���е��㿴�����ı�Ӱ��" << endl;
	Sleep(1200);
	cout << "��Ҳ��ͷ��������������������Ӱ��" << endl;
	Sleep(1200);
	cout << "���������ص��˽���" << endl;
	Sleep(1200);
	cout << "��ԶԶ�ظ������ı�Ӱ��" << endl;
	Sleep(1200);
	cout << "�ڷ�����Ʈ����" << endl;
	Sleep(1200);
	AddScore(3, 1, 3);
	return 0;
}
int FirstChoice2() {//�����������ɡ
	Sleep(1200);
	cout << "��ʮ�־��ȣ�������˼���ߵ������ɡ��" << endl;
	Sleep(1200);
	cout << "��ȥ��·������û����˵����" << endl;
	Sleep(1200);
	cout << "����ͬѧ�ǿ����ˣ��׷�ת��ͷ������Ц" << endl;
	Sleep(1200);
	cout << "һ��Цһ����塣" << endl;
	Sleep(1200);
	cout << "�໨�е�ʮ�ֺ��ߺͽ���" << endl;
	Sleep(1200);
	cout << "��һ������������Ц���У�" << endl;
	Sleep(1200);
	cout << "�����ߵ��˽��ҡ�" << endl;
	Sleep(1500);
	//�øб仯
	AddScore(3, 2, 5);

	return 0;
}
int LiftUpElla1() { //��������
	Sleep(1200);
	cout << "��С�ĵ��ܹ�ȥ�����Ь�ӷ�����" << endl;
	Sleep(1200);
	cout << "�㿴�������ڵ��£�������ʮ����" << endl;
	Sleep(1200);
	cout << "���æ����һ�䡮û�°ɣ���" << endl;
	Sleep(1200);
	cout << "��˵��û�¡����������̾��һ�䣬��ͦ���̵�" << endl;
	Sleep(1200);
	cout << "���æ����������" << endl;
	Sleep(1200);
	cout << "��֪�����Ӧ����Ӧ����̫��" << endl;
	Sleep(1200);
	cout << "������̫�ᣬ�ƺ�û�ö�������" << endl;
	Sleep(1200);
	cout << "�������Ź���۾������㣬������ֹ���ǲ�����Ĳ�ʹ...-----��������" << endl;
	Sleep(1200);
	cout << "��Ϊ�˻������Σ�˵����û���Ҿ����ˡ�" << endl;
	Sleep(1200);
	cout << "��ת���뿪���������ע������" << endl;
	AddScore(5, 1, 4);
	return 0;
}
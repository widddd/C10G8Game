#include <iostream>
using namespace std;
#include <Windows.h>
#include <string>

//函数声明
int FirstChoice0();
int FirstChoice1();
int FirstChoice2();
void ShowScore();
void AddScore(int,int,int);
int LiftUpElla1();

//好感，亲密度，存在感等数值全局变量定义
int goodwill = 0;//好感度
int close = 0;//亲密度
int existence = 0;//存在感

int main() {
	//剧情
	int sex = 0;
	Sleep(1500);
	cout << "------------------------------------------------------------------------"<< endl;//背景剧情
	Sleep(1200);
	cout << "你是一个十三岁的初中生。" << endl;
	Sleep(1200);
	cout << "你的成绩在年级里算中等偏上" << endl;
	Sleep(1200);
	cout << "但在班里，你总是一个差学生" << endl;
	Sleep(1200);
	cout << "班里学风很好，你也在不断努力" << endl;
	Sleep(1200);
	cout << "但是进步速度很慢" << endl;
	Sleep(1200);
	cout << "因此，你决定，" << endl;
	Sleep(1200);
	cout << "学一学那些好学生，享受好学生的快乐" << endl;
	Sleep(2000);
	cout << "--------------------------------剧情结束------------------------------------" << endl;
	system("pause");
	Sleep(1200);
	cout << "今天早上，雨下地很大" << endl;
	Sleep(1200);
	cout << "你看到班花也没带伞" << endl;
	Sleep(1200);
	cout << "你远远看着她，心里五味杂陈" << endl;
	Sleep(1200);
	cout << "正好你带伞了" << endl;
	Sleep(1200);
	cout << "你的选择(输入）：0：在远处看着她，1：把伞给她，2：和她撑同一把伞" << endl;
	cout << ">";
	int choiceUnbrElla1 = 0;
	//选择判断
	cin >> choiceUnbrElla1;
	if (choiceUnbrElla1 == 0) {
		FirstChoice0();
		//特殊剧情滑倒
		Sleep(1200);
		cout << "正当她的背影要消失在风雨中时" << endl;
		Sleep(1200);
		cout << "你似乎听见一声滑倒声" << endl;
		Sleep(1200);
		cout << "你仔细看，原来学校的路面是平滑石" << endl;
		Sleep(1200);
		cout << "她不小心滑倒了" << endl;
		Sleep(1200);
		cout << "你的选择：0：基于良心叫来老师和其他同学，1：小心的跑过去扶她" << endl;
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
	cout << "当前(她对你的)好感：" << goodwill << endl;
	cout << "当前(你在她心中)存在感：" << existence << endl;
	cout << "当前亲密度：" << close << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
}

void AddScore(int addg,int addc,int adde) {
	goodwill = goodwill + addg;
	close = close + addc;
	existence = existence + adde;
}

int FirstChoice0() {
	Sleep(1200);
	cout << "她快速地跑回了教室" << endl;
	Sleep(1200);
	cout << "你撑着伞在她后面慢慢走" << endl;
	Sleep(1200);
	cout << "你尽量让自己不看她，" << endl;
	Sleep(1200);
	cout << "你忽然想起上个学期你如何喜欢她而她又如何冷淡你" << endl;
	Sleep(1200);
	cout << "心中一片叹息" << endl;
	Sleep(1200);
	return 0;
}

int FirstChoice1() {
	Sleep(1200);
	cout << "她看见你十分惊讶" << endl;
	Sleep(1200);
	cout << "你伸手把伞递了过去，她轻轻接住了你的伞" << endl;
	Sleep(1200);
	cout << "她比较激动，表示十分感谢你，" << endl;
	Sleep(1200);
	cout << "看到你没有伞了，她很担心你会不会淋雨" << endl;
	Sleep(1200);
	cout << "你笑着说不用，" << endl;
	Sleep(1200);
	cout << "她犹豫了一会，却欲言又止" << endl;
	Sleep(1200);
	cout << "她十分害羞的转过身，走向了教室" << endl;
	Sleep(1200);
	cout << "雨中的你看见她的背影，" << endl;
	Sleep(1200);
	cout << "她也回头看见了你在雨中耸立的影子" << endl;
	Sleep(1200);
	cout << "就这样她回到了教室" << endl;
	Sleep(1200);
	cout << "你远远地跟着她的背影，" << endl;
	Sleep(1200);
	cout << "在风雨中飘荡。" << endl;
	Sleep(1200);
	AddScore(3, 1, 3);
	return 0;
}
int FirstChoice2() {//下雨天给她撑伞
	Sleep(1200);
	cout << "她十分惊讶，不好意思地走到了你的伞下" << endl;
	Sleep(1200);
	cout << "回去的路上你们没有人说话。" << endl;
	Sleep(1200);
	cout << "但是同学们看到了，纷纷转过头来对你笑" << endl;
	Sleep(1200);
	cout << "一边笑一边起哄。" << endl;
	Sleep(1200);
	cout << "班花感到十分害羞和紧张" << endl;
	Sleep(1200);
	cout << "在一声声讨论声和笑声中，" << endl;
	Sleep(1200);
	cout << "你们走到了教室。" << endl;
	Sleep(1500);
	//好感变化
	AddScore(3, 2, 5);

	return 0;
}
int LiftUpElla1() { //扶她起来
	Sleep(1200);
	cout << "你小心的跑过去（你的鞋子防滑）" << endl;
	Sleep(1200);
	cout << "你看见她躺在地下，看起来十分疼" << endl;
	Sleep(1200);
	cout << "你赶忙问了一句‘没事吧？’" << endl;
	Sleep(1200);
	cout << "她说‘没事’，你心里感叹了一句，她挺能忍的" << endl;
	Sleep(1200);
	cout << "你赶忙扶着她起来" << endl;
	Sleep(1200);
	cout << "不知是你的应激反应力气太大，" << endl;
	Sleep(1200);
	cout << "还是她太轻，似乎没用多少力气" << endl;
	Sleep(1200);
	cout << "她用闪着光的眼睛看着你，欲言又止（是不是真的不痛...-----作者留）" << endl;
	Sleep(1200);
	cout << "你为了缓解尴尬，说‘你没事我就走了’" << endl;
	Sleep(1200);
	cout << "你转身离开，她在身后注视着你" << endl;
	AddScore(5, 1, 4);
	return 0;
}
#include <iostream>
using namespace std;
#include <Windows.h>
#include <string>
#include "mainfunc.h"


//函数声明已经移动至mainfunc.h文件中。

//好感，亲密度，存在感等数值全局变量定义
//还有知名度(相当于班里的存在感)
//还有是否恋爱的情况
int goodwill = 0;//好感度
int close = 0;//亲密度
int existence = 0;//存在感

int renown = 0;//知名度
bool love = 0;//是否恋爱，0为否，1为是，默认为不是(≧∇≦)ﾉ
bool debug_mode = 0;//调试模式开关，编译前调节
//数组定义
int scores[5] = { goodwill,close,existence,renown, };
//日期系统定义



//main为主逻辑函数，其他函数为剧情函数，在主逻辑函数里调用。
int renown = 0;//知名度
bool love = 0;//是否恋爱，0为否，1为是，默认为不是(≧∇≦)ﾉ
bool debug_mode = 0;//调试模式开关
//数组定义
int scores[5] = { goodwill,close,existence,renown, };
//日期系统定义



//main为主逻辑函数，其他函数为剧情函数，在主逻辑函数里调用。
int main() {
	//剧情
	//和某人没有任何关系，一些人趁机传谣我要笑死了。。。
	//别问，问就是不配，能把那玩意写进游戏里？hhh
	int sex = 0;

	if (debug_mode == 1) {
		debug_start();
	}
	
	debug_output1();
	background1();//背景剧情
	debug_output1();
	
	cout << "--------------------------------剧情结束------------------------------------" << endl;
	system("pause");

	opening();//序章：风雨之路
	//逻辑判断开始
	//逻辑判断开始
	//逻辑判断开始
	int choiceUnbrElla1;
	//选择判断
	cin >> choiceUnbrElla1;
	if (choiceUnbrElla1 == 0) {
		FirstChoice0();
		ShowScore();
		SceneEllaSlip();//特殊剧情滑倒
		int choiceLiftEllaUp1;
		cin >> choiceLiftEllaUp1;
		if (choiceLiftEllaUp1 == 0) {
			LiftUpElla0();
			ShowScore();
			debug_output1();
		}
		else if (choiceLiftEllaUp1 == 1) {
			LiftUpElla1();
			ShowScore();
			debug_output1();
		}
		//我在吃饭，不要叫我，我家长在附近
	}
	//给她伞
	else if (choiceUnbrElla1 == 1) {
		FirstChoice1();
		ShowScore();
		love = 1;//判定为恋爱了
		debug_output1();

	}
	//和她撑一把伞
	else if (choiceUnbrElla1 == 2) {
		FirstChoice2();
		ShowScore();
		love = 1;//判定为恋爱了
		debug_output1();
	}

	BackToClass();//回到教室
	int handoutWithElla;
	cin >> handoutWithElla;//是否和她发卷子
	if (handoutWithElla == 0) {
		//不和她发
		HandOutWithElla0();
		debug_output1();
		int hand_or_not;
		cin >> hand_or_not;//是否把卷子给她或藏起来
		if (hand_or_not == 0) {
			HandToElla0();
			ShowScore();
			debug_output1();
			//没做完
		}
		else if (hand_or_not == 1) {
			HandToElla1();
			ShowScore();
			debug_output1();
			//没做完
		}
	}
	//和她发
	else if (handoutWithElla == 1){
		HandOutWithElla1();
		ShowScore();
		love = 1;//判定为恋爱了
		debug_output1();
	}
	//别忘了周末卷没交
	opening_ending();//序章谢幕
	cout << "" << endl;
	system("pause");

	return 0;
}

void debug_start() {
	debug_mode = 0;
	string comm;
	cout << "此版本为调试版本，若要开始游戏请输入任意字符按回车，开启调试模式请输入cheat。调试模式会自动输出数组数据。" << endl;
	cout << ">";
	cin >> comm;
	if (comm == "cheat") {
		cout << "调试模式已开启" << endl;
		cout << "" << endl;
		debug_mode = 1;
	}
}

void debug_output1() {
	if (debug_mode == 1) {
		cout << "" << endl;
		cout << "[调试]数组地址为：" << scores << endl;
		cout << "[调试]数组的值为：";
		for (int i = 0; i < 5; i++)
			cout << scores[i] << "，";
		cout << "" << endl;
		cout << "" << endl;
	}
}

void ShowScore() {
	cout << "---------------------------------------调试数据，正式版本可能删除------------------------------------------" << endl;
	cout << "当前(她对你的)好感：" << goodwill << endl;
	cout << "当前(你在她心中)存在感：" << existence << endl;
	cout << "当前亲密度：" << close << endl;
	cout << "当前知名度（班里的存在感）：" << renown << endl;
	cout << "------------------------------------------------------------------------------------------------------" << endl;
}
	//加分函数，先是好感，然后是亲密度，存在感，知名度
void AddScore(int addg,int addc,int adde,int addr) {
	goodwill = goodwill + addg;
	close = close + addc;
	existence = existence + adde;
	renown = renown + addr;
}
//背景剧情
void background1() {
	Sleep(1500);
	cout << "------------------------------------------------------------------------" << endl;//背景剧情
	Sleep(1200);
	cout << "你的名字叫" << endl;
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
}
//序章
void opening() {
	Sleep(1200);
	cout << "----------序章：风雨之路----------" << endl;
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
}
//看着她
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

int FirstChoice1() {//送伞
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
	AddScore(3, 1, 3, 2);
	return 0;
}
int FirstChoice2() {//下雨天给她撑伞
	Sleep(1200);
	cout << "她十分惊讶，不好意思地走到了你的伞下" << endl;
	Sleep(1200);
	cout << "她的脸庞留着害羞的神情" << endl;
	Sleep(1200);
	cout << "轻轻地握住了你的伞" << endl;
	Sleep(1200);
	cout << "回去的路上你们没有说话。" << endl;
	Sleep(1200);
	cout << "路上，她时不时转头看一下你，" << endl;
	Sleep(1200);
	cout << "带着眼中疑惑、憧憬和羞涩的神情。" << endl;
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
	AddScore(3, 2, 5, 5);

	return 0;
}
void SceneEllaSlip() {
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
	AddScore(5, 1, 4, 4);
	return 0;
}
int LiftUpElla0() {//不扶她
	Sleep(1200);
	cout << "你见状很想帮她，" << endl;
	Sleep(1200);
	cout << "又怕和她扯上那蛛网般的关系" << endl;
	Sleep(1200);
	cout << "你叫来了老师和同学们" << endl;
	Sleep(1200);
	cout << "看着tgm扶她起来，" << endl;
	Sleep(1200);
	cout << "一句一句地问好" << endl;
	Sleep(1200);
	cout << "你笑了笑" << endl;
	Sleep(1200);
	cout << "潇洒地离开了。" << endl;
	return 0;
}
int BackToClass() {
	Sleep(1200);
	cout << "回到教室" << endl;
	Sleep(1200);
	cout << "第一节数学课" << endl;
	Sleep(1200);
	cout << "她正在发周末卷" << endl;
	Sleep(1200);
	cout << "你的选择:0：坐着，1：和她一起发卷子" << endl;
	cout << ">";
	return 0;
}
int HandOutWithElla0() {
	Sleep(1200);
	cout << "她继续发卷子" << endl;
	Sleep(1200);
	cout << "你意识到你没有交数学卷" << endl;
	Sleep(1200);
	cout << "但是她不小心把她的卷子发到你桌子上了" << endl;
	Sleep(1200);
	cout << "你拿着她那张全对的卷子，" << endl;
	Sleep(1200);
	cout << "来回看了看" << endl;
	Sleep(1200);
	cout << "她把所有卷子都发完了" << endl;
	Sleep(1200);
	cout << "才发现自己桌子上没有卷子" << endl;
	Sleep(1200);
	cout << "她向老师报告，自己卷子不见了" << endl;
	Sleep(1200);
	cout << "老师问你们谁拿了她卷子" << endl;
	Sleep(1200);
	cout << "你的选择：0：把卷子交给她，1：把她卷子藏起来" << endl;
	cout << ">";
	return 0;
}
int HandOutWithElla1() {
	Sleep(1200);
	cout << "你主动请求一起发卷子" << endl;
	Sleep(1200);
	cout << "发卷子的过程中并没有发生任何事" << endl;
	Sleep(1200);
	cout << "但是你又看到有些同学笑着看着你" << endl;
	Sleep(1200);
	cout << "他们正在小声议论着你" << endl;
	Sleep(1200);
	cout << "你选择不予理会" << endl;
	AddScore(1, 0, 1, 1);
	return 0;
}
//给她卷子
int HandToElla0() {
	Sleep(1200);
	cout << "她轻轻接过了你的卷子" << endl;
	Sleep(1200);
	cout << "眼中充满惊讶与感谢" << endl;
	Sleep(1200);
	cout << "全班都看着你，你感到一丝尴尬" << endl;
	AddScore(1, 0, 1, 1);
	return 0;
}
//把卷子藏起来
int HandToElla1() {
	Sleep(1200);
	cout << "你偷偷把卷子藏了起来" << endl;
	Sleep(1200);
	cout << "环顾四周，看起来没有人发现" << endl;
	Sleep(1200);
	cout << "老师反复问了几遍" << endl;
	Sleep(1200);
	cout << "没有人回答，" << endl;
	Sleep(1200);
	cout << "老师派另一位数学课代表去办公室找" << endl;
	Sleep(1200);
	cout << "你看到她浮现出令人无语的表情，" << endl;
	Sleep(1200);
	cout << "无奈地走回了她的座位" << endl;
	return 0;
}
//序章谢幕
int opening_ending() {
	cout << "----------序章结束---------";
	return 0;
}
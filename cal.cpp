//1. 控制台计算器
//
//核心知识点：输入输出、条件判断（if / switch）、函数、基本运算
//
//功能：支持加减乘除、取模，处理简单输入错误
//
//练习目标：熟悉函数封装、基础交互
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<windows.h>
#include<string>
#include<limits>

void showMenu()
{
	std::cout << "****************控制台计算器****************"<<std::endl;
	std::cout << "请输入数字以选择功能：" << std::endl;
	std::cout << " 1 -- 加"<<std::endl;
	std::cout << " 2 -- 减" << std::endl;
	std::cout << " 3 -- 乘" << std::endl;
	std::cout << " 4 -- 除" << std::endl;
	std::cout << " 5 -- 取模" << std::endl;
	std::cout << " 0 -- 退出" << std::endl;
}


int inputInt(const std::string& prompt = "请输入整数：") {
	int num;
	while (true) {
		std::cout << prompt;
		std::cin >> num;

		if (std::cin.good()) {
			// 清空缓冲区多余内容，避免影响下一次输入
			std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
			return num;
		}

		// 输入出错处理
		std::cin.clear();
		std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
		std::cout << "输入无效，请输入数字！" << std::endl;
	}
}


int main()
{
	showMenu();
	int input;
	while (std::cin>>input&&input != 0)
	{
		
		int a, b;

		switch (input)
		{
		case 1:
			std::cout << "加法，输入两个数：" << std::endl;
			a = inputInt();
			b = inputInt();

			std::cout << a << " + " << b << " = " << a + b<<std::endl;
			break;

		case 2:
			std::cout << "减法，输入两个数：" << std::endl;
			a = inputInt();
			b = inputInt();
			std::cout << a << " - " << b << " = " << a - b << std::endl;
			break;

		case 3:
			std::cout << "乘法，输入两个数：" << std::endl;
			a = inputInt();
			b = inputInt();
			std::cout << a << " * " << b << " = " << a * b << std::endl;
			break;

		case 4:
			std::cout << "除法，输入两个数：" << std::endl;
			a = inputInt();
			b = inputInt();
			if (b != 0)
			{
				std::cout << a << " / " << b << " = " <<(double)a / b << std::endl;
			}
			else { std::cout << "除数不能为零"<<std::endl; }
			break;

		case 5:
			std::cout << "取模，输入两个数：" << std::endl;
			a = inputInt();
			b = inputInt();
			if (b != 0)
			{
				std::cout << a << " % " << b << " = " << a % b << std::endl;
			}
			else { std::cout << "除数不能为零"<<std::endl; }
			break;




		}

		std::cout << "输入回车键继续" << std::endl;
		std::cin.ignore();
		std::cin.get();

		system("cls");
		//clearScreen();
		showMenu();


	}

	std::cout << std::endl << "程序结束";
	return 0;
}
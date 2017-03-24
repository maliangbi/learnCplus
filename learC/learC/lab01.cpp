#include<iostream>
void function(){
	std::cout << "in function" << std::endl;
}

int main(){
	std::cout << "nihao\n";
	std::cout << "nihao std:endl";
	std::cout << "nihao \t" << 100 << std::endl;
	std::cout << 2 + 3 << std::endl;
	std::cout << "in main" << std::endl;
	function();
	std::cout << "back in main" << std::endl;
	//使用标准命名空间的两种技巧：
	//first method:using std：：cout;using std::endl;
	//second method：using namespace std;
	std::cout << "the size of int is " 
	//sizeof()返回的是字节数.
	//在C++中，将忽略空白行
	<< sizeof(int) <<" bytes"<< std::endl;
	//float和double类型能存储的数字很大，但是一般只有前几位有效，后面的一般会四舍五入。在计算机中，
	//太大的数将会用科学计数发表示
	float f=19826755367972.0;
	std::cout << f << std::endl;
	
	//数据的回绕：在超过数据类型所允许的范围时：数据将会回绕
	unsigned short int smallNum = 65535;
	std::cout << smallNum << std::endl
		<< smallNum++ << std::endl
		<< smallNum++ << std::endl;
	short int small = 32767;
	std::cout << small << std::endl
		<< small++ << std::endl
		<< small++ << std::endl;

	//以下两段for循环作用形同
	for (int i = 32; i < 128; i++){
		std::cout << char(i) << std::endl;
	}
	for (unsigned char i = 32; i < 128; i++){
		std::cout << i << std::endl;
	}
	 
	//枚举
	enum COLOR{ RED, GREEN, BLACK, WHITE };
	//COLOR的值只能是枚举类型中定义好的值
	COLOR i = GREEN;
	std::cout << i << std::endl;

	unsigned int j = -3;
	std::cout << j << std::endl;
	return 0;
}
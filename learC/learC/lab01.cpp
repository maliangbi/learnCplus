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
	//ʹ�ñ�׼�����ռ�����ּ��ɣ�
	//first method:using std����cout;using std::endl;
	//second method��using namespace std;
	std::cout << "the size of int is " 
	//sizeof()���ص����ֽ���.
	//��C++�У������Կհ���
	<< sizeof(int) <<" bytes"<< std::endl;
	//float��double�����ܴ洢�����ֺܴ󣬵���һ��ֻ��ǰ��λ��Ч�������һ����������롣�ڼ�����У�
	//̫����������ÿ�ѧ��������ʾ
	float f=19826755367972.0;
	std::cout << f << std::endl;
	
	//���ݵĻ��ƣ��ڳ�����������������ķ�Χʱ�����ݽ������
	unsigned short int smallNum = 65535;
	std::cout << smallNum << std::endl
		<< smallNum++ << std::endl
		<< smallNum++ << std::endl;
	short int small = 32767;
	std::cout << small << std::endl
		<< small++ << std::endl
		<< small++ << std::endl;

	//��������forѭ��������ͬ
	for (int i = 32; i < 128; i++){
		std::cout << char(i) << std::endl;
	}
	for (unsigned char i = 32; i < 128; i++){
		std::cout << i << std::endl;
	}
	 
	//ö��
	enum COLOR{ RED, GREEN, BLACK, WHITE };
	//COLOR��ֵֻ����ö�������ж���õ�ֵ
	COLOR i = GREEN;
	std::cout << i << std::endl;

	unsigned int j = -3;
	std::cout << j << std::endl;
	return 0;
}
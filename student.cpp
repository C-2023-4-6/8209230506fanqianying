//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"    //��Ҫ©д���У��������ͨ����
void Student::set_value()
{
    std::cin >> num;
    std::cin >> name;
    std::cin >> sex;
}
void Student::display()         //�����ⶨ��display�ຯ��
{
    std::cout << "num:" << num << std::endl;
    std::cout << "name:" << name << std::endl;
    std:: cout << "sex:" << sex << std::endl;
}
#include <iostream>
using namespace std;

float square(float a) {
	return a*a;
}

double square(double a) {
	return a*a;
}

int main() {
	cout << square(3.0); // square(double a); ȣ��
	cout << square(3); // �ߺ��� �Լ��� ���� ��ȣ�� ȣ��μ�, ������ ����
}
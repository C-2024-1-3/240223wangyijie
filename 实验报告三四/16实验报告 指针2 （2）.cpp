#include <iostream> 
#include <cmath> 
using namespace std; 
int parseHex(const char* const hexString) {
    int s_len = strlen(hexString);//���������ַ����ĳ���
    int num = 0;//��������ʮ������
    for (int i = 0; i < s_len; i++)//�����ַ����е�ÿ���ַ� 
    {
        char currentChar = hexString[i];//���嵱ǰ���ַ�
        if (currentChar >= '0' && currentChar <= '9')
        {
            num = num + ((currentChar - '0') * pow(16, s_len - i - 1));//pow�������÷�16Ϊ������s_lenΪָ��
        }
        else if (currentChar >= 'A' && currentChar <= 'F') 
        {
            num = num + ((currentChar - 'A' + 10) * pow(16, s_len - i - 1));
        }
        else if (currentChar >= 'a' && currentChar <= 'f')//�����ǰ�ַ���a-f֮���Сд��ĸ
        {
            num = num + ((currentChar - 'a' + 10) * pow(16, s_len - i - 1));
        }
        else//�����ǰ�ַ�������Ч��16�����ַ� 
        {
            cout << "��ֵ����16����" << endl;//��ʾ�ַ������Ϸ�
           
        }
    }
    return num;//���ؼ���õ���10������
}
int main() {
    char s[50];//����һ���ַ����飬���ڴ洢�û������16�����ַ���
    cout << "������16��������:";//��ʾ�û�����16��������
    cin.getline(s, 50); 
    int dec = parseHex(s);//����parseHex����
    cout << "ʮ��������Ϊ:" << dec << endl; //���ת�����10��������
    return 0;
}

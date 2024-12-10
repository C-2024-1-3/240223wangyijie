#include <iostream> 
#include <cmath> 
using namespace std; 
int parseHex(const char* const hexString) {
    int s_len = strlen(hexString);//计算输入字符串的长度
    int num = 0;//储存最后的十进制数
    for (int i = 0; i < s_len; i++)//遍历字符串中的每个字符 
    {
        char currentChar = hexString[i];//定义当前的字符
        if (currentChar >= '0' && currentChar <= '9')
        {
            num = num + ((currentChar - '0') * pow(16, s_len - i - 1));//pow函数的用法16为底数，s_len为指数
        }
        else if (currentChar >= 'A' && currentChar <= 'F') 
        {
            num = num + ((currentChar - 'A' + 10) * pow(16, s_len - i - 1));
        }
        else if (currentChar >= 'a' && currentChar <= 'f')//如果当前字符是a-f之间的小写字母
        {
            num = num + ((currentChar - 'a' + 10) * pow(16, s_len - i - 1));
        }
        else//如果当前字符不是有效的16进制字符 
        {
            cout << "数值不是16进制" << endl;//提示字符串不合法
           
        }
    }
    return num;//返回计算得到的10进制数
}
int main() {
    char s[50];//定义一个字符数组，用于存储用户输入的16进制字符串
    cout << "请输入16进制数字:";//提示用户输入16进制数字
    cin.getline(s, 50); 
    int dec = parseHex(s);//调用parseHex函数
    cout << "十进制数字为:" << dec << endl; //输出转换后的10进制数字
    return 0;
}

#include <string>
using namespace std;


void getNext(int* next, const string& s) 
{

    int j = 0;
    next[0] = 0;

    for(int i = 1; i < s.size(); i++) {

        //处理前后缀不相同的情况：j回退；
        while (j > 0 && s[i] != s[j]) { // j要保证大于0，因为下面有取j-1作为数组下标的操作
            j = next[j - 1]; // 注意这里，是要找前一位的对应的回退位置了
        }

        //处理前后缀相同的情况
        if (s[i] == s[j]) {
            j++;
        }

        //更新next数组
        next[i] = j;

    }
    
}

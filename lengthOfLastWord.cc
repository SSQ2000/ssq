class Solution {
public:
    int lengthOfLastWord(string s) {
        int arr=s.length()-1;           //得到字符串的长度
        while(s[arr]==' '){             //while循环判断字符串是否为空，是则输出0
            arr--;
            if(arr==-1)return 0;        
        }   
        int temp=arr;
        while(s[arr]!=' '){             //while循环找到最后一个空格
            arr--;
            if(arr==-1)return temp+1;
        }
        return temp-arr;
    }
};
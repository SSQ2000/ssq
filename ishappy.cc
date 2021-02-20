class Solution {
public:
    bool isHappy(int n) {
        while(n)                        
        {
            int happy=0;
            int a=n;
            int k=0;

            while(a!=0)                 //while循环求出每个整数n的位数
            {
                a/=10;
                k++;
            }

            for(int i=1;i<=k;i++)       //循环求出每个位置上的平方和
            {
                happy+=pow(n%10,2);     //每个位数上的平方累加
                n/=10;                  //每累加一个便减少一个个位数
            }

            n=happy;                    //赋值给n一个新的累加后的值

            if(n==1)                    //判断为快乐数则退出循环返回为真（1）
            {
                break;
            }

            if(n==4)                    //判断不为快乐数直接返回为假（0）
            {
                return 0;
            }
        }
        return 1;
    }
};
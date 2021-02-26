class Solution {
public:
    bool isPowerOfTwo(int n) {
        int num;
        num=pow(2,30);          	//将一个数num赋值2的最大次方
        if(n>0 && num%n==0)     //判断n能否被num整除，并且n>0
        {
            return true;       	 //满足if条件则返回true，反之不进入if
        }
        return false;         	  //返回false
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=nums.size();
        int a=0,b=0;
        if(res==1)                  //若数组长度为1则是输出nums[0]
        {
            return nums[0];
        }
        for(int i=0;i<res;i++)      //for循环遍历数组内的元素
        {
            if(nums[i]==1)          //判断某一元素是否为1，是则a++
            {
                a++;
            }
            if(nums[i]==0 || (nums[i]==1 && i==res-1))  //判断元素是否为0或这数组最后一位元素为1则进入if语句
            {
                b=a>=b?a:b;         //比较a与b的值，较大的赋值给b
                a=0;                //还原a的值0，以便计数
            }
        }
       return b;
    }
};
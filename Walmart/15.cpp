
class Solution {
public:

int divide(int dividend, int divisor) {
    if((dividend==INT_MIN && divisor==-1)) return INT_MAX;
    if((dividend==INT_MIN && divisor==1)) return INT_MIN;
    
     bool sign= ((dividend>=0) == (divisor>=0))?true:false;
       
     long long num=abs(dividend);
     long long num1=abs(divisor);
       
     int  result=0;
     while(num>=num1){
         int count=0;
         while(num-(num1<<1<<count)>=0){
             count++;
         }
         result+=(1<<(count));
         num=num-(num1<<(count));
     }
       
     return sign?result:-1*result;
}
};

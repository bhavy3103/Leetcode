class Solution
{
public:
    int findComplement(int num)
    {
        int ct = 0, p = num, i = 0;
        while (p > 0)
        {
            num = num ^ (1 << i);
            p >>= 1;
            i++;
        }
        return num;

        //    int p=num|(~(num));
        //    int q=p^num;
        //    int ct=0;
        //    cout << q << endl;
        //    while(q>0)
        //    {
        //        int r=q%10;
        //        ct++;
        //        q/=10;
        //    }
        //    return ct;
    }
};
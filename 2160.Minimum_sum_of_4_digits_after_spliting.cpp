class Solution
{
public:
    int minimumSum(int num)
    {

        // int m=10000,n=0;
        //  int rev=0,rev2=0;
        // while(num>0)
        {
            string s = to_string(num);
            sort(begin(s), end(s));
            return stoi(s.substr(0, 1) + s.substr(2, 1)) +
                   stoi(s.substr(1, 1) + s.substr(3, 1));
            // int r=num%10;
            // if(r!=0)
            // n = n*10+ r;
            // int p=n;
            // string s=to_string(n);
            // reverse(s.begin(),s.end());
            // rev=stoi(s);
            // rev=min(rev,p);
            // while(n!=0)
            // {
            //     int rem=n%10;
            //     rev = rev*10 + rem;
            //     n/=10;
            // }
            // n=rev;
            // num/=10;
            // int k=num;
            // string s1=to_string(num);
            // reverse(s1.begin(),s1.end());
            // rev2=stoi(s1);
            // rev2=min(rev2,k);
            // cout << rev << " " << rev2 << endl;
            // m=min(m,rev+rev2);
        }
        // return m;
    }
};
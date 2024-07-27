#include<iostream>
using namespace std;
class solution
{
    public:
        void prime(int num)
        {
            int count;
            if(num==1 || num==0)
            {
                cout<<num<<" is neither prime nor composite";
            }
            for (int i = 1; i <= num; i++)
            {
                num%i==0;
                count++;
            }
            if (count>2)
            {
                cout<<"Entered number is a composite number";
            }
            else{
                cout<<"Entered number is a prime number";
            }    
        }
};
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    solution s;
    s.prime(x);
}
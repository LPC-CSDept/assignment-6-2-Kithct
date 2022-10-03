//

#include <iomanip>
#include <iostream>
using namespace std;
double nthpowerp(int n);
double nthpowern(int n);
void printout(double result);

int main()
{
        int n;
        double result;
        cout<<"Enter your input\n";
        cin>>n;

        if(n>0)
                result=nthpowerp(n);
        else if(n<0)
                result=nthpowern(n);
        else
                result=1;
        printout(result);
}
// complete two functions
double nthpowerp(int n)
{
        double nthpower=1;
        for(int i=0;i<n;i++)
                nthpower*=2;
        cout<<nthpower<<endl;
        // return n_th power number
}
double nthpowern(int n)
{
        double nthpower=1;
        n*=-1;
        for(int i=0;i<n;i++)
                nthpower*=0.5;
        cout<<nthpower<<endl;
        // return n_th power number
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}

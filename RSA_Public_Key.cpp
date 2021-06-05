#include<iostream>
using namespace std;
int main()
{
	int Kpub_e,Counter,PhiOfn;
	Kpub_e=0;
	Counter=1;
	PhiOfn=0;
	cout<<"Enter Public key(Should be < Phi(n-1)):";
	cin>>Kpub_e;
    cout<<"Enter the Phi(n):";
    cin>>PhiOfn;
	bool cond=false;
	while(cond==false)
	{
		if((Kpub_e*Counter)%PhiOfn==1)
		{
			cout<<"Public Key: "<<Counter<<endl;
            int check=(Counter*Kpub_e)%PhiOfn;
               
			cond=true;
		}
		else
			Counter+=1;
	}
	return 0;
}
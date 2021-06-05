#include<iostream>
using namespace std;
int main()
{
	int Kpub_e, PhiOfn,Kpri_d;
	Kpub_e = Kpri_d = PhiOfn = 0;
	cout << "Enter Public key(Should be < Phi(n-1)):";
	cin >> Kpub_e;
	cout << "Enter the Phi(n):";
	cin >> PhiOfn;
	bool cond = false;
	while (cond == false)
	{
		if ((Kpri_d * Kpub_e) % PhiOfn == 1)
		{
			cout << "Private Key: " << Kpri_d << endl;
			cond = true;
		}
		else
			Kpri_d += 1;
	}
	
	return 0;
}
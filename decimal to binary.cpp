#include <iostream>

using namespace std;
int main()
{
	int num,rem,bin,i=1; 
	/* 
		Khoi tao 4 bien
		- Num dung cho input
		- rum dung cho ket qua cua phep chia %
		- bin( = 0) dung lam ket qua phep bien doi nhi phan
		- i ( = 1) dung de tang gia tri len 10 sau moi lan bien doi
	*/
	cout << "Please type in the number you want to convert to binary" 
		 << endl;
	cin >> num;
	while(num>0) // khi den 1/2 = 0.5 => lam tron = 0 
				 // 	=> ket thuc vong` while
	{
		rem = num%2; // so chia con du
		bin = bin + (rem*i); // sau khi bien doi nhi phan
		i=i*10; // tang gia tri gap 10 lan len sau moi lan bien doi
		num = num / 2; // sau moi lan bien doi thi num giam 2
	}
	cout << bin; // xuat ra gia tri da duoc bien doi
	return 0;
}

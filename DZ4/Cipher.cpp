#include <iostream>


using namespace std;


class Cipher
{
	string text;
	string key;

	public:
		Cipher()
		{
			text = "None";
			key = "None";
		}

		void setinf(string k, string t)
		{
			text = t;
			key = k;
		}

		void setinf(string k)
		{
			key = k;
		}
		
		string gettext()
		{
			return text;
		}

		string crypt()
		{
			if (text != "None")
			{
				int j = 0, keylen =0;
				while (key[j] != '\0')
				{
					j++;
					keylen++;
				}
			
				int i = 0;
				while(text[i] != '\0')
					{
						text[i] ^= key[i%keylen];
						i++;
					}
				return text;

			}
			else {cout << "You must input key\n"; return "";}
		}
};

string operator+ (Cipher txt1, Cipher txt2)
{
	txt1.setinf("None", txt1.gettext() + txt2.gettext());
	txt2.setinf("None", txt1.gettext());

	return txt1.gettext();
}


int main()
{
	Cipher t1, t2;
	
	t1.setinf("qwerty", "qwertyuiop");
	t2.setinf("123456", "asdfghjklz");

	t1.crypt();
	t2.crypt();

	//cout << t2.crypt() << endl << t2.crypt() << endl;
	
	cout << t1 + t2 << endl;
	

	return 0;
}


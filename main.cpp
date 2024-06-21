#include <stdio.h>

class norimono
{
public:
	? ？ ? void Voice() {
		printf("あにまる¥n");
	};
};

class kuruma : public norimono
{
public:
	void Voice() {
		printf("kurumaっす\n");
	};
};

class hikouki : public norimono
{
public:
	void Voice() {
		printf("hikoukiっす\n");
	};
};

int main(void) {

	norimono* 配列名[2] = { new kuruma,new hikouki };

	animal[0]->Voice();
	animal[1]->Voice();

	delete 配列名[0];
	delete 配列名[1];

	return 0;
}

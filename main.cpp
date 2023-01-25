#include "Enemy.h"
#include <stdio.h>



int main() {
	Enemy* enemy1 = new Enemy();
	int input;

	while (true) {
		
		//“ü—Íˆ—
		printf("0 : exit  1 : continue ==> ");
		scanf_s("%d", &input);
		if (input == 0) break; 
			enemy1->Update();
			enemy1->Draw();
	}
	delete enemy1;
	
	return 0;
}
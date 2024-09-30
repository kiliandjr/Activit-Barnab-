#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	char liste[]= ">><><><<>>><<><><<<<<>><><>>>><><<><<>>>><<<><<>><<<<<>><<<<<<<<<>><>>><>><>>><<<<>>>>><>>><<><<><><><>>>>>>><<><<<<<>>><<<>><<<>>><<<<<<<<<<<<<<<>>>><<><><>>>>>>>>><>><>>><>>>>>>>><<><<>>>>";
	int boucle=0;
	int casee=0;
	while (boucle<=190) {
		if (liste[boucle]=='>') {
			casee=casee+1;}
		else {
			casee=casee-1;}
		boucle=boucle+1;}
	printf("%d", casee);
	exit(0);
}

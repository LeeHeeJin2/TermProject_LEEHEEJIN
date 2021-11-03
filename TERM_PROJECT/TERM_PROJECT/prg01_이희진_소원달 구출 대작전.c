#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int coin = 0;
int star_hp = 10;
int star_attack = 2;
int star_defense = 10;
int boss_hp = 10;
int boss_attack = 2;
int boss_defense = 10;


void round_1() {
	int menu_num;
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	printf("  --- 1 ROUND ---\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  먹구름 보스가 나타났습니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  1라운드 먹구름 보스의 공격 스킬은 안개입니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  안개 스킬은 별의 시야를 가려 타격을 줍니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  전투의 승패 여부와는 관계없이 이용할 수 있습니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  상점을 통해서 별의 체력, 공격력, 방어력을 업그레이드 시킬 수 있습니다.\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);




	while (1) {
		if ((star_hp || boss_hp) == 0) break;
		if ((star_hp && boss_hp) > 0) continue;
		printf("        _____ ___ ___ _ _        \n");
		printf(" ----- |     | -_|   | | | ----- \n");
		printf("       |_|_|_|___|_|_|___|       \n");
		printf("  1. boss를 공격한다.\n");
		printf("  2. 체력을 회복한다.\n");
		printf("  3. 도망간다.\n");

		printf("무엇을 선택하시겠습니까?........");
		scanf_s("%d", &menu_num);


		switch (menu_num) {
		case 1:
			printf("공격을 선택하였습니다.");
			boss_defense = boss_defense - star_attack;
			break;

		case 2:
			printf("체력 회복을 선택하였습니다.");
			break;

		case 3:
			printf("도망을 선택하였습니다.");
			break;

		default:
			printf("잘못 입력하였습니다. 다시 입력해주세요.");
		}

	}
	
	
	
}







int main() {

	char yn;



	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("  ################################################################################################################     \n"); Sleep(100);
	printf("  ##                                              ##                                                            ##     \n"); Sleep(100);
	printf("  ##   ######  ########   ###      ######        ##                                                             ##     \n"); Sleep(100);
	printf("  ##  ##          ##     ## ##     ##   ##      ##                                                              ##     \n"); Sleep(100);
	printf("  ##   ######     ##    ##   ##    #####       ##                                                               ##     \n"); Sleep(100);
	printf("  ##        ##    ##   #########   ##  ##     ##  #####        ###      ######    ##  ##                        ##     \n"); Sleep(100);
	printf("  ##   ######     ##  ##       ##  ##   ##   ##   ##   ##     ## ##     ##   ##   ## ##                         ##     \n"); Sleep(100);
	printf("  ##                                        ##    ##    ##   ##   ##    #####     ###                           ##     \n"); Sleep(100);
	printf("  ##                                       ##     ##   ##   #########   ##  ##    ## ##                         ##     \n"); Sleep(10);
	printf("  ##                                      ##      #####    ##       ##  ##   ##   ##  ##                        ##     \n"); Sleep(150);
	printf("  ##                                     ##                                                                     ##     \n"); Sleep(100);
	printf("  ##                                    ##                      ####   ##        ####     ##     ##  #####      ##     \n"); Sleep(100);
	printf("  ##                                   ##                     ##       ##      ##    ##   ##     ##  ##   ##    ##     \n"); Sleep(100);
	printf("  ##                                  ##                     ##        ##     #        #  ##     ##  ##    ##   ##     \n"); Sleep(100);
	printf("  ##                                 ##                       ##       ##      ##    ##   ##     ##  ##   ##    ##     \n"); Sleep(100);
	printf("  ##                                ##                          #####  #######   ####       #####    #####      ##     \n"); Sleep(100);
	printf("  ##                               ##                                                                           ##     \n"); Sleep(100);
	printf("  ################################################################################################################     \n"); Sleep(100);
	Sleep(100);  printf("\n");  Sleep(100); printf("\n");
	printf("		      >>>>>     소     원     달     구     출     대     작     전     <<<<< \n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  소원달 구출 대작전에 참여하신 여러분 환영합니다!\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  소원달이 먹구름에 가려져 보이지 않습니다\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  별을 도와 먹구름에게서 소원달을 구해주세요\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);

	printf("  --- 게임설명 ---\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  전투 난이도는 1단계부터 5단계까지 있으며 5단계까지 클리어하면 게임을 승리하게 됩니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  난이도마다 boss의 체력, 공격력, 방어력이 달라집니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  전투에서 승리시 코인을 얻을 수 있습니다.\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	printf("  --- 상점설명 ---\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  전투가 한번 끝날 때 마다 상점을 이용할 수 있습니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  전투의 승패 여부와는 관계없이 이용할 수 있습니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  상점을 통해서 별의 체력, 공격력, 방어력을 업그레이드 시킬 수 있습니다.\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);


	
	printf("  게임을 시작하시겠습니까? ( y/n )........... ");
	scanf_s(" %c", &yn);
	if (yn == 'y') {
		printf("                                 __           __      __  __\n"); Sleep(100);
		printf("    ___ ____ ___ _  ___     ___ / /____ _____/ /_    / / / /\n"); Sleep(100);
		printf("   / _ `/ _ `/  ' $/ -_)   (_-</ __/ _ `/ __/ __/   /_/ /_/ \n"); Sleep(100);
		printf("   $_, /$_,_/_/_/_/$__/   /___/$__/$_,_/_/  $__/   /_/ /_/  \n"); Sleep(100);
		printf("  /___/                                           (_) (_)   \n"); Sleep(100);
		printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	}
	

	
	
	char yn2;
	printf("  게임의 이해를 돕는 튜토리얼이 준비되어 있습니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  튜토리얼을 진행하지 않으면 바로 1round가 시작됩니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  튜토리얼을 시작하시겠습니까? ( y/n )........... ");
	scanf_s(" %c", &yn2);
	printf("\n");

	if (yn2 == 'y') {
		printf("  --- 튜토리얼 설명서 ---\n"); Sleep(100);
		printf("\n"); Sleep(100);
		printf("  튜토리얼의 boss는 공룡입니다.\n");
		printf("\n"); Sleep(100);
		printf("  메뉴를 보고 공격을 할 수 있습니다.\n");
		printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100);
		printf("         _____ ___ ___ _ _        \n");
		printf("  |---- |     | -_|   | | | -----|\n");
		printf("  |     |_|_|_|___|_|_|___|      |\n");
		printf("  |                              |\n");
		printf("  |     1. boss를 공격한다.      |\n");
		printf("  |     2. 체력을 회복한다.      |\n");
		printf("  |     3. 도망간다.             |\n");
		printf("  |                              |\n");
		printf("  |------------------------------|\n");

	}

	else {
		round_1();
	}



	
}
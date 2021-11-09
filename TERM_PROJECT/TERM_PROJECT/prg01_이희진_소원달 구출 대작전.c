#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int coin = 0;				// 코인 개수
int star_hp = 10;			// 별의 체력 (초기 체력은 10으로 지정)
int star_attack = 2;		// 별의 공격력 (초기 공격력은 2로 지정)
int star_defense = 10;		// 별의 방어력 (초기 방어력은 10으로 지정)
int boss_hp;				// 보스의 체력
int boss_attack;			// 보스의 공격력
int boss_defense;			// 보스의 방어력
int menu_num;				// 별의 메뉴 선택 
int boss_num;				// 보스의 메뉴 선택


void tutorial_main() {
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("  |                                                                                 ■                           |     \n"); Sleep(100);
	printf("  |                                                                             ■■■■                         |     \n"); Sleep(100);
	printf("  |                                                                          ■■■   ■■                       |     \n"); Sleep(100);
	printf("  |                                                                        ■■■■■■■■                      |     \n"); Sleep(100);
	printf("  |                                                                         ■■■■■■■■                     |     \n"); Sleep(100);
	printf("  |                                                                               ■■■■■                     |     \n"); Sleep(100);
	printf("  |                                                                         ■■■■■■■                       |     \n"); Sleep(100);
	printf("  |                                                                              ■■■■■               ■     |     \n"); Sleep(100);
	printf("  |                                                                           ■■■■■■■            ■■     |     \n"); Sleep(100);
	printf("  |                                                                         ■■■■■■■■■        ■■■     |     \n"); Sleep(100);
	printf("  |                                                                           ■■■■■■■■■■  ■■■       |     \n"); Sleep(100);
	printf("  |                                                                           ■■■■■■■■■■■■■         |     \n"); Sleep(100);
	printf("  |                                                                              ■■■■■■■                  |     \n"); Sleep(100);
	printf("  |        ■                                                                      ■■■■■                    |     \n"); Sleep(100);
	printf("  |      ■■■                                                                     ■     ■                    |     \n"); Sleep(100);
	printf("  |        ■                                                                     ■■   ■■                    |     \n"); Sleep(100);
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("   > STAR <                                                                                        > BOSS <            \n"); Sleep(100);
	printf("   체력   :  %d                                                                                    체력   :  %d        \n", star_hp, boss_hp); Sleep(100);
	printf("   공격력 :  %d                                                                                     공격력 :  %d        \n", star_attack, boss_attack); Sleep(100);
	printf("   방어력 :  %d                                                                                    방어력 :  %d        \n", star_defense, boss_defense); Sleep(100);
	printf("\n"); Sleep(100);
}

void tutorial_star_attack() {
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("  |                                                                                 ■                           |     \n"); Sleep(100);
	printf("  |                                                                             ■■■■                         |     \n"); Sleep(100);
	printf("  |                          □                                              ■■■   ■■                       |     \n"); Sleep(100);
	printf("  |                                    □           □                     ■■■■■■■■                      |     \n"); Sleep(100);
	printf("  |                                                                         ■■■■■■■■                     |     \n"); Sleep(100);
	printf("  |                                                                               ■■■■■                     |     \n"); Sleep(100);
	printf("  |                   □                                                    ■■■■■■■                       |     \n"); Sleep(100);
	printf("  |                                                       □                     ■■■■■               ■     |     \n"); Sleep(100);
	printf("  |                                          □                               ■■■■■■■            ■■     |     \n"); Sleep(100);
	printf("  |                                                                         ■■■■■■■■■        ■■■     |     \n"); Sleep(100);
	printf("  |                    □                                                     ■■■■■■■■■■  ■■■       |     \n"); Sleep(100);
	printf("  |                                                                           ■■■■■■■■■■■■■         |     \n"); Sleep(100);
	printf("  |                □          □                                                ■■■■■■■                  |     \n"); Sleep(100);
	printf("  |        ■                                                                      ■■■■■                    |     \n"); Sleep(100);
	printf("  |      ■■■           □                                                        ■     ■                    |     \n"); Sleep(100);
	printf("  |        ■                                                                     ■■   ■■                    |     \n"); Sleep(100);
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("   > STAR <                                                                                        > BOSS <            \n"); Sleep(100);
	printf("   체력   :  %d                                                                                    체력   :  %d        \n", star_hp, boss_hp); Sleep(100);
	printf("   공격력 :  %d                                                                                     공격력 :  %d        \n", star_attack, boss_attack); Sleep(100);
	printf("   방어력 :  %d                                                                                    방어력 :  %d        \n", star_defense, boss_defense); Sleep(100);
	printf("\n"); Sleep(100);
}

void tutorial_boss_attack() {
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("  |                                                                                 ■                           |     \n"); Sleep(100);
	printf("  |                                                                             ■■■■                         |     \n"); Sleep(100);
	printf("  |                                                            ■■          ■■■   ■■                       |     \n"); Sleep(100);
	printf("  |                                                              ■■■    ■■■■■■■■                      |     \n"); Sleep(100);
	printf("  |                                                                  ■■   ■■■■■■■■                     |     \n"); Sleep(100);
	printf("  |                                                          ■■■■■■■       ■■■■■                     |     \n"); Sleep(100);
	printf("  |                                                                  ■■   ■■■■■■■                       |     \n"); Sleep(100);
	printf("  |                                                              ■■■          ■■■■■               ■     |     \n"); Sleep(100);
	printf("  |                                                            ■■           ■■■■■■■            ■■     |     \n"); Sleep(100);
	printf("  |                                                                         ■■■■■■■■■        ■■■     |     \n"); Sleep(100);
	printf("  |                                                                           ■■■■■■■■■■  ■■■       |     \n"); Sleep(100);
	printf("  |                                                                           ■■■■■■■■■■■■■         |     \n"); Sleep(100);
	printf("  |                                                                              ■■■■■■■                  |     \n"); Sleep(100);
	printf("  |        ■                                                                      ■■■■■                    |     \n"); Sleep(100);
	printf("  |      ■■■                                                                     ■     ■                    |     \n"); Sleep(100);
	printf("  |        ■                                                                     ■■   ■■                    |     \n"); Sleep(100);
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("   > STAR <                                                                                        > BOSS <            \n"); Sleep(100);
	printf("   체력   :  %d                                                                                    체력   :  %d        \n", star_hp, boss_hp); Sleep(100);
	printf("   공격력 :  %d                                                                                     공격력 :  %d        \n", star_attack, boss_attack); Sleep(100);
	printf("   방어력 :  %d                                                                                    방어력 :  %d        \n", star_defense, boss_defense); Sleep(100);
	printf("\n"); Sleep(100);
}


void game_main() {
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("  |                                                                ■■■■■■                                  |     \n"); Sleep(100);
	printf("  |                                                              ■■■■■■■■                 ■■■■■■   |     \n"); Sleep(100);
	printf("  |                                                              ■■■■■■■■               ■■■■■■■■ |     \n"); Sleep(100);
	printf("  |                                                                ■■■■■■                 ■■■■■■■■ |     \n"); Sleep(100);
	printf("  |                                                                                               ■■■■■■   |     \n"); Sleep(100);
	printf("  |                                                                             ■■■■■■■                   |     \n"); Sleep(100);
	printf("  |                                                                           ■■■■■■■■■                 |     \n"); Sleep(100);
	printf("  |                                                                           ■■■■■■■■■                 |     \n"); Sleep(100);
	printf("  |                                                                             ■■■■■■■                   |     \n"); Sleep(100);
	printf("  |                                                                                                              |     \n"); Sleep(100);
	printf("  |                                                                                                              |     \n"); Sleep(100);
	printf("  |                                                                                                              |     \n"); Sleep(100);
	printf("  |                                                                                                              |     \n"); Sleep(100);
	printf("  |        ■                                                                                                    |     \n"); Sleep(100);
	printf("  |      ■■■                                                                                                  |     \n"); Sleep(100);
	printf("  |        ■                                                                                                    |     \n"); Sleep(100);
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("   > STAR <                                                                                        > BOSS <            \n"); Sleep(100);
	printf("   체력   :  %d                                                                                    체력   :  %d        \n", star_hp, boss_hp); Sleep(100);
	printf("   공격력 :  %d                                                                                     공격력 :  %d        \n", star_attack, boss_attack); Sleep(100);
	printf("   방어력 :  %d                                                                                    방어력 :  %d        \n", star_defense, boss_defense); Sleep(100);

}

void round1_star_attack() {
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("  |                                                                ■■■■■■                                  |     \n"); Sleep(100);
	printf("  |                                                    □        ■■■■■■■■                 ■■■■■■   |     \n"); Sleep(100);
	printf("  |                                     □                       ■■■■■■■■               ■■■■■■■■ |     \n"); Sleep(100);
	printf("  |                                                                ■■■■■■                 ■■■■■■■■ |     \n"); Sleep(100);
	printf("  |                  □                            □                                             ■■■■■■   |     \n"); Sleep(100);
	printf("  |                                                                             ■■■■■■■                   |     \n"); Sleep(100);
	printf("  |            □                □                                           ■■■■■■■■■                 |     \n"); Sleep(100);
	printf("  |                                        □         □                      ■■■■■■■■■                 |     \n"); Sleep(100);
	printf("  |                        □                                                   ■■■■■■■                   |     \n"); Sleep(100);
	printf("  |                                                                                                              |     \n"); Sleep(100);
	printf("  |                □                          □                                                                |     \n"); Sleep(100);
	printf("  |                              □                                                                              |     \n"); Sleep(100);
	printf("  |             □                                                                                               |     \n"); Sleep(100);
	printf("  |        ■             □                                                                                     |     \n"); Sleep(100);
	printf("  |      ■■■  □                                                                                              |     \n"); Sleep(100);
	printf("  |        ■                                                                                                    |     \n"); Sleep(100);
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("   > STAR <                                                                                        > BOSS <            \n"); Sleep(100);
	printf("   체력   :  %d                                                                                    체력   :  %d        \n", star_hp, boss_hp); Sleep(100);
	printf("   공격력 :  %d                                                                                     공격력 :  %d        \n", star_attack, boss_attack); Sleep(100);
	printf("   방어력 :  %d                                                                                    방어력 :  %d        \n", star_defense, boss_defense); Sleep(100);

}

void round1_bose_attack() {
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@■■■■■■@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@■■■■■■■■@@@@@@@@@@@@@@@@@■■■■■■@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@■■■■■■■■@@@@@@@@@@@@@@@■■■■■■■■@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@■■■■■■@@@@@@@@@@@@@@@@@■■■■■■■■@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@■■■■■■@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@■■■■■■■@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@■■■■■■■■■@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@■■■■■■■■■@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@■■■■■■■@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@■@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@■■■@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  |@@@@@@@@■@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|     \n"); Sleep(100);
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("   > STAR <                                                                                        > BOSS <            \n"); Sleep(100);
	printf("   체력   :  %d                                                                                    체력   :  %d        \n", star_hp, boss_hp); Sleep(100);
	printf("   공격력 :  %d                                                                                     공격력 :  %d        \n", star_attack, boss_attack); Sleep(100);
	printf("   방어력 :  %d                                                                                    방어력 :  %d        \n", star_defense, boss_defense); Sleep(100);

}

/*
void boss_random() {
	srand(time(NULL));
	boss_num = rand() % 2 + 1;
	if (boss_num == 1) {
		star_hp = star_hp - boss_attack;
		printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
		printf("  boss가 공격을 합니다 \n"); Sleep(500); printf("\n");
		printf("  ~~~~~공격중~~~~~공격중~~~~~공격중~~~~~\n"); Sleep(500); printf("\n");
		tutorial_boss_attact();
	}
	else if (boss_num == 2) {
		boss_hp = boss_hp + (boss_defense / 10);
		printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
		printf("  boss가 회복을 합니다 \n"); Sleep(500); printf("\n");
		printf("  ~~~~~회복중~~~~~회복중~~~~~회복중~~~~~\n"); Sleep(500); printf("\n");
		tutorial_main();
	}
}
*/

void store() {

	do {
		printf("\n");
		printf("         _____ ___ ___ _ _        \n"); Sleep(100);
		printf("  |---- |     | -_|   | | | -----|\n"); Sleep(100);
		printf("  |     |_|_|_|___|_|_|___|      |\n"); Sleep(100);
		printf("  |                              |\n"); Sleep(100);
		printf("  |     1. 공격력 업그레이드!    |\n"); Sleep(100);
		printf("  |     2. 체력   업그레이드!    |\n"); Sleep(100);
		printf("  |     3. 방어력 업그레이드!    |\n"); Sleep(100);
		printf("  |     4. 돌아가기              |\n"); Sleep(100);
		printf("  |                              |\n"); Sleep(100);
		printf("  |------------------------------|\n"); Sleep(100);
		printf("\n"); Sleep(100);
		printf("  무엇을 선택하시겠습니까?........");
		scanf_s("%d", &menu_num);
		printf("\n"); Sleep(100); printf("\n"); Sleep(100);

		switch (menu_num) {
		case 1:
			printf("  공격력 업그레이드를 선택하였습니다.\n"); Sleep(500); printf("\n");
			star_attack = star_attack + 2;
			break;

		case 2:
			printf("  체력 업그레이드를 선택하였습니다.\n"); Sleep(500); printf("\n");
			star_hp = star_hp + 5;
			break;

		case 3:
			printf("  방어력 업그레이드를 선택하였습니다.\n"); Sleep(500); printf("\n");
			star_defense = star_defense + 10;
			break;

		default:
			printf("  잘못 입력하였습니다. 다시 입력해주세요.\n");
		}
	} while ((star_hp && boss_hp) > 0);
	

}




void tutorial() {
	boss_hp = 6;			// 튜토리얼 보스의 체력, 공격력, 방어력 설정
	boss_attack = 1;
	boss_defense = 10;
	
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  --- 튜토리얼 설명서 ---\n"); Sleep(100); printf("\n"); Sleep(100);					// 튜토리얼에 대한 설명
	printf("  튜토리얼의 boss는 공룡입니다.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  메뉴를 보고 공격을 할 수 있습니다.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  별과 boss는 서로 번갈아가면서 공격 또는 회복을 할 수 있습니다.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  튜토리얼 boss의 체력은 6 입니다.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  튜토리얼 boss의 공격력은 1 입니다.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  튜토리얼 boss의 방어력은 10 입니다.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  별의 기본 체력은 10 입니다.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  별의 기본 공격력은 2 입니다.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  별의 기본 방어력은 10 입니다.\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(1000);

	// printf("\033[1;33m helloworld \033[0m\n"); // 색상지정방법 메모

	tutorial_main();
	do {
		printf("\n");
		printf("         _____ ___ ___ _ _        \n"); Sleep(100);
		printf("  |---- |     | -_|   | | | -----|\n"); Sleep(100);
		printf("  |     |_|_|_|___|_|_|___|      |\n"); Sleep(100);
		printf("  |                              |\n"); Sleep(100);
		printf("  |     1. boss를 공격한다.      |\n"); Sleep(100);
		printf("  |     2. 체력을 회복한다.      |\n"); Sleep(100);
		printf("  |                              |\n"); Sleep(100);
		printf("  |------------------------------|\n"); Sleep(100);
		printf("\n"); Sleep(100);
		printf("  무엇을 선택하시겠습니까?........");
		scanf_s("%d", &menu_num);
		printf("\n"); Sleep(100); printf("\n"); Sleep(100);

		switch (menu_num) {
		case 1:
			printf("  공격을 선택하였습니다.\n"); Sleep(500); printf("\n");
			printf("  ~~~~~공격중~~~~~공격중~~~~~공격중~~~~~\n"); Sleep(500); printf("\n");
			boss_hp = boss_hp - star_attack;
			tutorial_star_attack();
			boss_num = rand() % 2 + 1;
			if (boss_num == 1) {
				star_hp = star_hp - boss_attack;
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss가 공격을 합니다 \n"); Sleep(500); printf("\n");
				printf("  ~~~~~공격중~~~~~공격중~~~~~공격중~~~~~\n"); Sleep(500); printf("\n");
				tutorial_boss_attack();
			}
			else if (boss_num == 2) {
				boss_hp = boss_hp + (boss_defense / 10);
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss가 회복을 합니다 \n"); Sleep(500); printf("\n");
				printf("  ~~~~~회복중~~~~~회복중~~~~~회복중~~~~~\n"); Sleep(500); printf("\n");
				tutorial_main();
			}
			// boss_random();
			break;

		case 2:
			printf("  회복을 선택하였습니다.\n"); Sleep(500); printf("\n");
			printf("  ~~~~~회복중~~~~~회복중~~~~~회복중~~~~~\n"); Sleep(500); printf("\n");
			star_hp = star_hp + (star_defense / 10);
			tutorial_main();
			boss_num = rand() % 2 + 1;
			if (boss_num == 1) {
				star_hp = star_hp - boss_attack;
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss가 공격을 합니다 \n"); Sleep(500); printf("\n");
				printf("  ~~~~~공격중~~~~~공격중~~~~~공격중~~~~~\n"); Sleep(500); printf("\n");
				tutorial_boss_attack();
			}
			else if (boss_num == 2) {
				boss_hp = boss_hp + (boss_defense / 10);
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss가 회복을 합니다 \n"); Sleep(500); printf("\n");
				printf("  ~~~~~회복중~~~~~회복중~~~~~회복중~~~~~\n"); Sleep(500); printf("\n");
				tutorial_main();
			}
			// boss_random();
			break;

		default:
			printf("  잘못 입력하였습니다. 다시 입력해주세요.\n");
		}
	} while ((star_hp && boss_hp) > 0);


	if (star_hp > boss_hp) {
		printf("  튜토리얼을 CLEAR 하였습니다.");
	}
	else if (boss_hp > star_hp) {
		printf("  튜토리얼을 FAIL 하였습니다.");
	}
	printf("  튜토리얼이 끝났습니다.");
	printf("\n");
}


void round_1() {
	boss_hp = 10;			// 튜토리얼 보스의 체력, 공격력, 방어력 설정
	boss_attack = 2;
	boss_defense = 10;
	star_hp = 10;
	star_attack = 2;
	star_defense = 10;
	printf("\n");
	printf("    ___                        __         __           __      __  __\n"); Sleep(100);
	printf("   <  / _______  __ _____  ___/ /    ___ / /____ _____/ /_    / / / /\n"); Sleep(100);
	printf("   / / / __/ _ $/ // / _ $/ _  /    (_-</ __/ _ `/ __/ __/   /_/ /_/ \n"); Sleep(100);
	printf("  /_/ /_/  $___/$_,_/_//_/$_,_/    /___/$__/$_,_/_/  $__/   /_/ /_/  \n"); Sleep(100);
	printf("                                                           (_) (_)   \n"); Sleep(100);
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

	// printf("\033[1;33m helloworld \033[0m\n"); // 색상지정방법 메모

	game_main();
	do {
		printf("\n");
		printf("         _____ ___ ___ _ _        \n"); Sleep(100);
		printf("  |---- |     | -_|   | | | -----|\n"); Sleep(100);
		printf("  |     |_|_|_|___|_|_|___|      |\n"); Sleep(100);
		printf("  |                              |\n"); Sleep(100);
		printf("  |     1. boss를 공격한다.      |\n"); Sleep(100);
		printf("  |     2. 체력을 회복한다.      |\n"); Sleep(100);
		printf("  |                              |\n"); Sleep(100);
		printf("  |------------------------------|\n"); Sleep(100);
		printf("\n"); Sleep(100);
		printf("  무엇을 선택하시겠습니까?........");
		scanf_s("%d", &menu_num);
		printf("\n"); Sleep(100); printf("\n"); Sleep(100);

		switch (menu_num) {
		case 1:
			printf("  공격을 선택하였습니다.\n"); Sleep(500); printf("\n");
			printf("  ~~~~~공격중~~~~~공격중~~~~~공격중~~~~~\n"); Sleep(500); printf("\n");
			boss_hp = boss_hp - star_attack;
			round1_star_attack();
			boss_num = rand() % 2 + 1;
			if (boss_num == 1) {
				star_hp = star_hp - boss_attack;
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss가 공격을 합니다 \n"); Sleep(500); printf("\n");
				printf("  ~~~~~공격중~~~~~공격중~~~~~공격중~~~~~\n"); Sleep(500); printf("\n");
				round1_bose_attack();
			}
			else if (boss_num == 2) {
				boss_hp = boss_hp + (boss_defense / 10);
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss가 회복을 합니다 \n"); Sleep(500); printf("\n");
				printf("  ~~~~~회복중~~~~~회복중~~~~~회복중~~~~~\n"); Sleep(500); printf("\n");
				tutorial_main();
			}
			// boss_random();
			break;

		case 2:
			printf("  회복을 선택하였습니다.\n"); Sleep(500); printf("\n");
			printf("  ~~~~~회복중~~~~~회복중~~~~~회복중~~~~~\n"); Sleep(500); printf("\n");
			star_hp = star_hp + (star_defense / 10);
			tutorial_main();
			boss_num = rand() % 2 + 1;
			if (boss_num == 1) {
				star_hp = star_hp - boss_attack;
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss가 공격을 합니다 \n"); Sleep(500); printf("\n");
				printf("  ~~~~~공격중~~~~~공격중~~~~~공격중~~~~~\n"); Sleep(500); printf("\n");
				round1_bose_attack();
			}
			else if (boss_num == 2) {
				boss_hp = boss_hp + (boss_defense / 10);
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss가 회복을 합니다 \n"); Sleep(500); printf("\n");
				printf("  ~~~~~회복중~~~~~회복중~~~~~회복중~~~~~\n"); Sleep(500); printf("\n");
				tutorial_main();
			}
			// boss_random();
			break;

		default:
			printf("  잘못 입력하였습니다. 다시 입력해주세요.\n");
		}
	} while ((star_hp && boss_hp) > 0);


	if (star_hp > boss_hp) {
		printf("  1ROUND를 CLEAR 하였습니다.");
	}
	else if (boss_hp > star_hp) {
		printf("  1ROUND를 FAIL 하였습니다.");
		printf("\n");
		printf("    ___ ____ ___ _  ___   ___ _  _____ ____ \n"); Sleep(100);
		printf("   / _ `/ _ `/  ' $/ -_) / _ $ |/ / -_) __/ \n"); Sleep(100);
		printf("   $_, /$_,_/_/_/_/$__/  $___/___/$__/_/    \n"); Sleep(100);
		printf("  /___/                                     \n"); Sleep(100);
		printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	}
	printf("  1round가 끝났습니다.");
	printf("\n");
	printf("                               __            \n"); Sleep(100);
	printf("    ___ ____ ___ _  ___   ____/ /__ ___ _____\n"); Sleep(100);
	printf("   / _ `/ _ `/  ' $/ -_) / __/ / -_) _ `/ __/\n"); Sleep(100);
	printf("   $_, /$_,_/_/_/_/$__/  $__/_/$__/$_,_/_/   \n"); Sleep(100);
	printf("  /___/                                      \n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	printf("\n");
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
	printf("  ##                                       ##     ##   ##   #########   ##  ##    ## ##                         ##     \n"); Sleep(100);
	printf("  ##                                      ##      #####    ##       ##  ##   ##   ##  ##                        ##     \n"); Sleep(100);
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
		printf("\n");
		printf("                                 __           __      __  __\n"); Sleep(100);
		printf("    ___ ____ ___ _  ___     ___ / /____ _____/ /_    / / / /\n"); Sleep(100);
		printf("   / _ `/ _ `/  ' $/ -_)   (_-</ __/ _ `/ __/ __/   /_/ /_/ \n"); Sleep(100);
		printf("   $_, /$_,_/_/_/_/$__/   /___/$__/$_,_/_/  $__/   /_/ /_/  \n"); Sleep(100);
		printf("  /___/                                           (_) (_)   \n"); Sleep(100);
		printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	}
	
	printf("  게임의 이해를 돕는 튜토리얼이 준비되어 있습니다.\n"); Sleep(100);
	printf("\n"); Sleep(100); 
	printf("  튜토리얼을 진행합니다.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	tutorial();
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
	printf("  1ROUND를 진행합니다.\n"); Sleep(100);
	round_1();



	
}
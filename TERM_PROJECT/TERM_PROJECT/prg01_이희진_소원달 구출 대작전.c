#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int coin = 0;				// ���� ����
int star_hp = 10;			// ���� ü�� (�ʱ� ü���� 10���� ����)
int star_attack = 2;		// ���� ���ݷ� (�ʱ� ���ݷ��� 2�� ����)
int star_defense = 10;		// ���� ���� (�ʱ� ������ 10���� ����)
int boss_hp;				// ������ ü��
int boss_attack;			// ������ ���ݷ�
int boss_defense;			// ������ ����
int menu_num;				// ���� �޴� ���� 
int boss_num;				// ������ �޴� ����


void tutorial_main() {
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("  |                                                                                 ��                           |     \n"); Sleep(100);
	printf("  |                                                                             �����                         |     \n"); Sleep(100);
	printf("  |                                                                          ����   ���                       |     \n"); Sleep(100);
	printf("  |                                                                        ���������                      |     \n"); Sleep(100);
	printf("  |                                                                         ���������                     |     \n"); Sleep(100);
	printf("  |                                                                               ������                     |     \n"); Sleep(100);
	printf("  |                                                                         ��������                       |     \n"); Sleep(100);
	printf("  |                                                                              ������               ��     |     \n"); Sleep(100);
	printf("  |                                                                           ��������            ���     |     \n"); Sleep(100);
	printf("  |                                                                         ����������        ����     |     \n"); Sleep(100);
	printf("  |                                                                           �����������  ����       |     \n"); Sleep(100);
	printf("  |                                                                           ��������������         |     \n"); Sleep(100);
	printf("  |                                                                              ��������                  |     \n"); Sleep(100);
	printf("  |        ��                                                                      ������                    |     \n"); Sleep(100);
	printf("  |      ����                                                                     ��     ��                    |     \n"); Sleep(100);
	printf("  |        ��                                                                     ���   ���                    |     \n"); Sleep(100);
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("   > STAR <                                                                                        > BOSS <            \n"); Sleep(100);
	printf("   ü��   :  %d                                                                                    ü��   :  %d        \n", star_hp, boss_hp); Sleep(100);
	printf("   ���ݷ� :  %d                                                                                     ���ݷ� :  %d        \n", star_attack, boss_attack); Sleep(100);
	printf("   ���� :  %d                                                                                    ���� :  %d        \n", star_defense, boss_defense); Sleep(100);
	printf("\n"); Sleep(100);
}

void tutorial_star_attact() {
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("  |                                                                                 ��                           |     \n"); Sleep(100);
	printf("  |                                                                             �����                         |     \n"); Sleep(100);
	printf("  |                          ��                                              ����   ���                       |     \n"); Sleep(100);
	printf("  |                                    ��           ��                     ���������                      |     \n"); Sleep(100);
	printf("  |                                                                         ���������                     |     \n"); Sleep(100);
	printf("  |                                                                               ������                     |     \n"); Sleep(100);
	printf("  |                   ��                                                    ��������                       |     \n"); Sleep(100);
	printf("  |                                                       ��                     ������               ��     |     \n"); Sleep(100);
	printf("  |                                          ��                               ��������            ���     |     \n"); Sleep(100);
	printf("  |                                                                         ����������        ����     |     \n"); Sleep(100);
	printf("  |                    ��                                                     �����������  ����       |     \n"); Sleep(100);
	printf("  |                                                                           ��������������         |     \n"); Sleep(100);
	printf("  |                ��          ��                                                ��������                  |     \n"); Sleep(100);
	printf("  |        ��                                                                      ������                    |     \n"); Sleep(100);
	printf("  |      ����           ��                                                        ��     ��                    |     \n"); Sleep(100);
	printf("  |        ��                                                                     ���   ���                    |     \n"); Sleep(100);
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("   > STAR <                                                                                        > BOSS <            \n"); Sleep(100);
	printf("   ü��   :  %d                                                                                    ü��   :  %d        \n", star_hp, boss_hp); Sleep(100);
	printf("   ���ݷ� :  %d                                                                                     ���ݷ� :  %d        \n", star_attack, boss_attack); Sleep(100);
	printf("   ���� :  %d                                                                                    ���� :  %d        \n", star_defense, boss_defense); Sleep(100);
	printf("\n"); Sleep(100);
}

void tutorial_boss_attact() {
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("  |                                                                                 ��                           |     \n"); Sleep(100);
	printf("  |                                                                             �����                         |     \n"); Sleep(100);
	printf("  |                                                            ���          ����   ���                       |     \n"); Sleep(100);
	printf("  |                                                              ����    ���������                      |     \n"); Sleep(100);
	printf("  |                                                                  ���   ���������                     |     \n"); Sleep(100);
	printf("  |                                                          ��������       ������                     |     \n"); Sleep(100);
	printf("  |                                                                  ���   ��������                       |     \n"); Sleep(100);
	printf("  |                                                              ����          ������               ��     |     \n"); Sleep(100);
	printf("  |                                                            ���           ��������            ���     |     \n"); Sleep(100);
	printf("  |                                                                         ����������        ����     |     \n"); Sleep(100);
	printf("  |                                                                           �����������  ����       |     \n"); Sleep(100);
	printf("  |                                                                           ��������������         |     \n"); Sleep(100);
	printf("  |                                                                              ��������                  |     \n"); Sleep(100);
	printf("  |        ��                                                                      ������                    |     \n"); Sleep(100);
	printf("  |      ����                                                                     ��     ��                    |     \n"); Sleep(100);
	printf("  |        ��                                                                     ���   ���                    |     \n"); Sleep(100);
	printf("  ----------------------------------------------------------------------------------------------------------------     \n"); Sleep(100);
	printf("   > STAR <                                                                                        > BOSS <            \n"); Sleep(100);
	printf("   ü��   :  %d                                                                                    ü��   :  %d        \n", star_hp, boss_hp); Sleep(100);
	printf("   ���ݷ� :  %d                                                                                     ���ݷ� :  %d        \n", star_attack, boss_attack); Sleep(100);
	printf("   ���� :  %d                                                                                    ���� :  %d        \n", star_defense, boss_defense); Sleep(100);
	printf("\n"); Sleep(100);
}
/*
void boss_random() {
	srand(time(NULL));
	boss_num = rand() % 2 + 1;
	if (boss_num == 1) {
		star_hp = star_hp - boss_attack;
		printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
		printf("  boss�� ������ �մϴ� \n"); Sleep(500); printf("\n");
		printf("  ~~~~~������~~~~~������~~~~~������~~~~~\n"); Sleep(500); printf("\n");
		tutorial_boss_attact();
	}
	else if (boss_num == 2) {
		boss_hp = boss_hp + (boss_defense / 10);
		printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
		printf("  boss�� ȸ���� �մϴ� \n"); Sleep(500); printf("\n");
		printf("  ~~~~~ȸ����~~~~~ȸ����~~~~~ȸ����~~~~~\n"); Sleep(500); printf("\n");
		tutorial_main();
	}
}
*/

void tutorial() {
	boss_hp = 6;			// Ʃ�丮�� ������ ü��, ���ݷ�, ���� ����
	boss_attack = 1;
	boss_defense = 10;
	
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  --- Ʃ�丮�� ���� ---\n"); Sleep(100); printf("\n"); Sleep(100);					// Ʃ�丮�� ���� ����
	printf("  Ʃ�丮���� boss�� �����Դϴ�.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  �޴��� ���� ������ �� �� �ֽ��ϴ�.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  ���� boss�� ���� �����ư��鼭 ���� �Ǵ� ȸ���� �� �� �ֽ��ϴ�.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  Ʃ�丮�� boss�� ü���� 6 �Դϴ�.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  Ʃ�丮�� boss�� ���ݷ��� 1 �Դϴ�.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  Ʃ�丮�� boss�� ������ 10 �Դϴ�.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  ���� �⺻ ü���� 10 �Դϴ�.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  ���� �⺻ ���ݷ��� 2 �Դϴ�.\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  ���� �⺻ ������ 10 �Դϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(1000);

	// printf("\033[1;33m helloworld \033[0m\n"); // ����������� �޸�

	tutorial_main();

	do {
		printf("\n");
		printf("         _____ ___ ___ _ _        \n"); Sleep(100);
		printf("  |---- |     | -_|   | | | -----|\n"); Sleep(100);
		printf("  |     |_|_|_|___|_|_|___|      |\n"); Sleep(100);
		printf("  |                              |\n"); Sleep(100);
		printf("  |     1. boss�� �����Ѵ�.      |\n"); Sleep(100);
		printf("  |     2. ü���� ȸ���Ѵ�.      |\n"); Sleep(100);
		printf("  |                              |\n"); Sleep(100);
		printf("  |------------------------------|\n"); Sleep(100);
		printf("\n"); Sleep(100);
		printf("  ������ �����Ͻðڽ��ϱ�?........");
		scanf_s("%d", &menu_num);
		printf("\n"); Sleep(100); printf("\n"); Sleep(100);

		switch (menu_num) {
		case 1:
			printf("  ������ �����Ͽ����ϴ�.\n"); Sleep(500); printf("\n");
			printf("  ~~~~~������~~~~~������~~~~~������~~~~~\n"); Sleep(500); printf("\n");
			boss_hp = boss_hp - star_attack;
			tutorial_star_attact();
			boss_num = rand() % 2 + 1;
			if (boss_num == 1) {
				star_hp = star_hp - boss_attack;
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss�� ������ �մϴ� \n"); Sleep(500); printf("\n");
				printf("  ~~~~~������~~~~~������~~~~~������~~~~~\n"); Sleep(500); printf("\n");
				tutorial_boss_attact();
			}
			else if (boss_num == 2) {
				boss_hp = boss_hp + (boss_defense / 10);
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss�� ȸ���� �մϴ� \n"); Sleep(500); printf("\n");
				printf("  ~~~~~ȸ����~~~~~ȸ����~~~~~ȸ����~~~~~\n"); Sleep(500); printf("\n");
				tutorial_main();
			}
			// boss_random();
			break;

		case 2:
			printf("  ȸ���� �����Ͽ����ϴ�.\n"); Sleep(500); printf("\n");
			printf("  ~~~~~ȸ����~~~~~ȸ����~~~~~ȸ����~~~~~\n"); Sleep(500); printf("\n");
			star_hp = star_hp + (star_defense / 10);
			tutorial_main();
			boss_num = rand() % 2 + 1;
			if (boss_num == 1) {
				star_hp = star_hp - boss_attack;
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss�� ������ �մϴ� \n"); Sleep(500); printf("\n");
				printf("  ~~~~~������~~~~~������~~~~~������~~~~~\n"); Sleep(500); printf("\n");
				tutorial_boss_attact();
			}
			else if (boss_num == 2) {
				boss_hp = boss_hp + (boss_defense / 10);
				printf("\n"); Sleep(100); printf("\n"); Sleep(1000);
				printf("  boss�� ȸ���� �մϴ� \n"); Sleep(500); printf("\n");
				printf("  ~~~~~ȸ����~~~~~ȸ����~~~~~ȸ����~~~~~\n"); Sleep(500); printf("\n");
				tutorial_main();
			}
			// boss_random();
			break;

		default:
			printf("  �߸� �Է��Ͽ����ϴ�. �ٽ� �Է����ּ���.\n");
		}
	} while ((star_hp && boss_hp) > 0);


	if (star_hp > boss_hp) {
		printf("  Ʃ�丮���� CLEAR �Ͽ����ϴ�.");
	}
	else if (boss_hp > star_hp) {
		printf("  Ʃ�丮���� FAIL �Ͽ����ϴ�.");
	}
	printf("  Ʃ�丮���� �������ϴ�.");
	printf("\n");
}




void round_1() {
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	printf("  --- 1 ROUND ---\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  �Ա��� ������ ��Ÿ�����ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  1���� �Ա��� ������ ���� ��ų�� �Ȱ��Դϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  �Ȱ� ��ų�� ���� �þ߸� ���� Ÿ���� �ݴϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  ������ ���� ���οʹ� ������� �̿��� �� �ֽ��ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  ������ ���ؼ� ���� ü��, ���ݷ�, ������ ���׷��̵� ��ų �� �ֽ��ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	
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
	printf("		      >>>>>     ��     ��     ��     ��     ��     ��     ��     ��     <<<<< \n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100);
	printf("  �ҿ��� ���� �������� �����Ͻ� ������ ȯ���մϴ�!\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  �ҿ����� �Ա����� ������ ������ �ʽ��ϴ�\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  ���� ���� �Ա������Լ� �ҿ����� �����ּ���\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);

	printf("  --- ���Ӽ��� ---\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  ���� ���̵��� 1�ܰ���� 5�ܰ���� ������ 5�ܰ���� Ŭ�����ϸ� ������ �¸��ϰ� �˴ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  ���̵����� boss�� ü��, ���ݷ�, ������ �޶����ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  �������� �¸��� ������ ���� �� �ֽ��ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	printf("  --- �������� ---\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  ������ �ѹ� ���� �� ���� ������ �̿��� �� �ֽ��ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  ������ ���� ���οʹ� ������� �̿��� �� �ֽ��ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  ������ ���ؼ� ���� ü��, ���ݷ�, ������ ���׷��̵� ��ų �� �ֽ��ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);

	printf("  ������ �����Ͻðڽ��ϱ�? ( y/n )........... ");
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
	
	printf("  ������ ���ظ� ���� Ʃ�丮���� �غ�Ǿ� �ֽ��ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  Ʃ�丮���� �����մϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	tutorial();

	round_1();



	
}
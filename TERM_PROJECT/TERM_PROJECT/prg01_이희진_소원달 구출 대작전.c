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




	while (1) {
		if ((star_hp || boss_hp) == 0) break;
		if ((star_hp && boss_hp) > 0) continue;
		printf("        _____ ___ ___ _ _        \n");
		printf(" ----- |     | -_|   | | | ----- \n");
		printf("       |_|_|_|___|_|_|___|       \n");
		printf("  1. boss�� �����Ѵ�.\n");
		printf("  2. ü���� ȸ���Ѵ�.\n");
		printf("  3. ��������.\n");

		printf("������ �����Ͻðڽ��ϱ�?........");
		scanf_s("%d", &menu_num);


		switch (menu_num) {
		case 1:
			printf("������ �����Ͽ����ϴ�.");
			boss_defense = boss_defense - star_attack;
			break;

		case 2:
			printf("ü�� ȸ���� �����Ͽ����ϴ�.");
			break;

		case 3:
			printf("������ �����Ͽ����ϴ�.");
			break;

		default:
			printf("�߸� �Է��Ͽ����ϴ�. �ٽ� �Է����ּ���.");
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
		printf("                                 __           __      __  __\n"); Sleep(100);
		printf("    ___ ____ ___ _  ___     ___ / /____ _____/ /_    / / / /\n"); Sleep(100);
		printf("   / _ `/ _ `/  ' $/ -_)   (_-</ __/ _ `/ __/ __/   /_/ /_/ \n"); Sleep(100);
		printf("   $_, /$_,_/_/_/_/$__/   /___/$__/$_,_/_/  $__/   /_/ /_/  \n"); Sleep(100);
		printf("  /___/                                           (_) (_)   \n"); Sleep(100);
		printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(500);
	}
	

	
	
	char yn2;
	printf("  ������ ���ظ� ���� Ʃ�丮���� �غ�Ǿ� �ֽ��ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  Ʃ�丮���� �������� ������ �ٷ� 1round�� ���۵˴ϴ�.\n"); Sleep(100);
	printf("\n"); Sleep(100);
	printf("  Ʃ�丮���� �����Ͻðڽ��ϱ�? ( y/n )........... ");
	scanf_s(" %c", &yn2);
	printf("\n");

	if (yn2 == 'y') {
		printf("  --- Ʃ�丮�� ���� ---\n"); Sleep(100);
		printf("\n"); Sleep(100);
		printf("  Ʃ�丮���� boss�� �����Դϴ�.\n");
		printf("\n"); Sleep(100);
		printf("  �޴��� ���� ������ �� �� �ֽ��ϴ�.\n");
		printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100); printf("\n"); Sleep(100);
		printf("         _____ ___ ___ _ _        \n");
		printf("  |---- |     | -_|   | | | -----|\n");
		printf("  |     |_|_|_|___|_|_|___|      |\n");
		printf("  |                              |\n");
		printf("  |     1. boss�� �����Ѵ�.      |\n");
		printf("  |     2. ü���� ȸ���Ѵ�.      |\n");
		printf("  |     3. ��������.             |\n");
		printf("  |                              |\n");
		printf("  |------------------------------|\n");

	}

	else {
		round_1();
	}



	
}
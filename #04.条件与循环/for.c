#include <stdio.h>
int main()
{
	int atk;
	const int ATK10 = 10;
	int sumatk=0;
	int originalhp = 0;
	int hp = 0;
	int n = 0;
	int player = 0;

	printf("There have 10 players that will attack me.\nWe have known player3's attack is 10.\n\ninput my hp:");
	scanf("%d", &originalhp);
	while (originalhp <= 10)
	{
		printf("You're kidding me absolutely! I can't live with the hp of %d!!\nPlease input it again:", originalhp);

		scanf("%d", &originalhp);
	}
	printf("OK;\n");

	hp = originalhp;

	do
	{
		printf("Round %d begin!\n", n + 1);
		printf("I have %d hp now.\n",hp);
		sumatk = 0;
		for (player = 1; player <= 9; player++)
		{
			printf("input player%d's attack:",player);
			scanf("%d", &atk );
			for(;atk<0;)
			{
				printf("I know you don't want to hurt me,but now the attack %d is too ABNORMAL!\n",atk);
				printf("If you input this atk,it means you want to heal me!I refuse it!!\nPlease input it again:");
				scanf("%d", &atk);
			}
			sumatk += atk;
		}
		sumatk += ATK10;
		hp -= sumatk;
		printf("OK;You hurt me with the sum of %d attack in this round;\nNow I only have",sumatk);
		int level = hp * 10 / originalhp;
		
		if (hp >= originalhp - 10)
		printf(" %d hp;\nI guess you didn't want to hurt me.\nthank you very much!\n", hp);
		else if (level >= 6)
		printf(" %d hp;\nMy hp is still high now!\nThanks for your mercy!\n", hp);
		else if (level >= 1)
		printf(" %d hp.\nIt's really hurt... But I'm still alive!\n", hp);
		else if (hp > 0)
		printf(" %d hp;\nGood! I think I'm so lucky that I made it with such few hp!\n", hp);
		n++;

		if(hp > 0)
		printf("Although I don't want to die now,but I must help you succeed!\nKeep attacking!\n\n");
	} while (hp > 0);

	printf("...No!!My hp come to the bottom!\nOops!I DIED!\n");
	printf("You only take %d round(s) to defeat me!!\n", n);	
	printf("Congratulation to your success! Goodbye!!\n");

	return 0;

}
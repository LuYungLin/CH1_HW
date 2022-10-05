#include <stdio.h>

int main()
{
	float dkm, lmoney, lkm, dpmoney, drmoney;
	printf("一整天的總里程數:");
	scanf("%f", &dkm);
	printf("汽油一公升/加侖多少錢:");
	scanf("%f", &lmoney);
	printf("平均一公升/加侖能行駛多少公里:");
	scanf("%f", &lkm);
	printf("一天的停車費:");
	scanf("%f", &dpmoney);
	printf("一天的通行費(過路費):");
	scanf("%f", &drmoney);
	printf("一天下來開車去工作的花費:%f", (((dkm / lkm)*lmoney) + dpmoney + drmoney));


}

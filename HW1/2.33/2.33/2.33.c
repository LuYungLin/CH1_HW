#include <stdio.h>

int main()
{
	float dkm, lmoney, lkm, dpmoney, drmoney;
	printf("�@��Ѫ��`���{��:");
	scanf("%f", &dkm);
	printf("�T�o�@����/�[�ڦh�ֿ�:");
	scanf("%f", &lmoney);
	printf("�����@����/�[�گ��p�h�֤���:");
	scanf("%f", &lkm);
	printf("�@�Ѫ������O:");
	scanf("%f", &dpmoney);
	printf("�@�Ѫ��q��O(�L���O):");
	scanf("%f", &drmoney);
	printf("�@�ѤU�Ӷ}���h�u�@����O:%f", (((dkm / lkm)*lmoney) + dpmoney + drmoney));


}

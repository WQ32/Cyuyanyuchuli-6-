#include <stdio.h>

//���д�꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�
//ģ��ʵ��offsetof     - ͷ�ļ� <stddef.h> 

// #include <stddef.h>

//struct S
//{ 
//	char c1; // ƫ����Ϊ0
//	int a;   //ƫ����Ϊ4
//	char c2; // ƫ����Ϊ8 
//};
//
// ��1��
//#define OFFSETOF(struct_name,member_name) (int)&(((struct name*)0)->member_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1)); //��c1��ƫ����
//	printf("%d\n", OFFSETOF(struct S, a));    //��a��ƫ����
//	printf("%d\n", OFFSETOF(struct S, c2));   //��c2��ƫ����
//	return 0;
//}
//���ԣ�����δ�ҵ�����
//
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{ 
//		unsigned char ucPim1;        // 1���ֽ�
//		unsigned char ucData0 : 1;   //ռ1��bitΪλ
//		unsigned char ucData1 : 2;   //ռ2��bitΪλ
//		unsigned char ucData2 : 3;   //ռ3��bitΪλ    //�൱��ռ��2���ֽ�
//		// 00000000 00000000
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);       //��puc������ĸ�Ԫ�ظ�ֵΪ0
//	// 00000000 00000000 00000000 00000000
//	pstPimData->ucPim1 = 2;
//	// 00000010 00000000
//	pstPimData->ucData0 = 3;   // 0011   ȡһλ 1
//	// 00000010 00000001
//	pstPimData->ucData1 = 4;   // 0100   ȡ��λ 00
//	// 00000010 00000001
//	pstPimData->ucData2 = 5;   // 0101   ȡ��λ 101
//	// 00000010 00101011       
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	// 00000010 00101011 00000000 00000000
//	// p[0]  0000 0010     - 02
//	// p[1]  0010 1011     - 29
//	// p[2]  0000 0000     - 00
//	// p[3]  0000 0000     - 00
//	//%x,��16���ƴ�ӡ
//	//%02,��ʾ��ӡ��λ
//	return 0;
//}
//
// ��2��
//union Un
//{
//	short s[7];   //14   ÿ��Ԫ��2���ֽ�
//	int n;        //4    ÿ��Ԫ��4���ֽ�
//	//�����ܴ�СӦ����Ԫ���ֽڴ�ı��� 14+2=16=4*4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//		// i[0] i[1]  ��k���� ��k�����ľ��൱���� i�����ֵ
//	}*s,a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	// С�˴洢
//	// 0x38 39
//	printf("%x\n", a.k);
//	// 3839
//	return 0;
//}

//��3��
//malloc�������ڴ�����һ�������Ŀռ䣬��������ʼ��ַ
// malloc����ռ�ʧ�ܣ�����NULLָ��
// malloc���������ڴ�������0�ֽڵĿռ�
// malloc���ٵ��ڴ�ռ䣬�������ڴ��ͷŻ�Գ�����Ӱ��
//

//��4��
// malloc��calloc���������Ƶģ�������һ�������Ŀռ�
// malloc����Ŀռ䲻��ʼ����calloc�����Ҫ��ʼ��
// realloc�������Ե�����̬�����ڴ�Ĵ�С���ɴ��С
//

//��5��
//��̬�ڴ泣���Ĵ���
//�ԷǶ�̬�ڴ��free�ͷ�
//�Զ�̬�ڴ�Ķ���ͷ�
//�Զ�̬�ڴ��Խ�����

#include <stdio.h>

//请编写宏，计算结构体中某变量相对于首地址的偏移，
//模拟实现offsetof     - 头文件 <stddef.h> 

// #include <stddef.h>

//struct S
//{ 
//	char c1; // 偏移量为0
//	int a;   //偏移量为4
//	char c2; // 偏移量为8 
//};
//
// 题1：
//#define OFFSETOF(struct_name,member_name) (int)&(((struct name*)0)->member_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1)); //求c1的偏移量
//	printf("%d\n", OFFSETOF(struct S, a));    //求a的偏移量
//	printf("%d\n", OFFSETOF(struct S, c2));   //求c2的偏移量
//	return 0;
//}
//不对，出错，未找到错误
//
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{ 
//		unsigned char ucPim1;        // 1个字节
//		unsigned char ucData0 : 1;   //占1个bit为位
//		unsigned char ucData1 : 2;   //占2个bit为位
//		unsigned char ucData2 : 3;   //占3个bit为位    //相当于占了2个字节
//		// 00000000 00000000
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);       //将puc数组的四个元素赋值为0
//	// 00000000 00000000 00000000 00000000
//	pstPimData->ucPim1 = 2;
//	// 00000010 00000000
//	pstPimData->ucData0 = 3;   // 0011   取一位 1
//	// 00000010 00000001
//	pstPimData->ucData1 = 4;   // 0100   取两位 00
//	// 00000010 00000001
//	pstPimData->ucData2 = 5;   // 0101   取三位 101
//	// 00000010 00101011       
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	// 00000010 00101011 00000000 00000000
//	// p[0]  0000 0010     - 02
//	// p[1]  0010 1011     - 29
//	// p[2]  0000 0000     - 00
//	// p[3]  0000 0000     - 00
//	//%x,以16进制打印
//	//%02,表示打印两位
//	return 0;
//}
//
// 题2：
//union Un
//{
//	short s[7];   //14   每个元素2个字节
//	int n;        //4    每个元素4个字节
//	//所以总大小应该是元素字节大的倍数 14+2=16=4*4
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
//		// i[0] i[1]  与k共用 ，k里面存的就相当于是 i数组的值
//	}*s,a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	// 小端存储
//	// 0x38 39
//	printf("%x\n", a.k);
//	// 3839
//	return 0;
//}

//题3：
//malloc函数向内存申请一块连续的空间，并返回起始地址
// malloc申请空间失败，返回NULL指针
// malloc不可以向内存中申请0字节的空间
// malloc开辟的内存空间，不进行内存释放会对程序有影响
//

//题4：
// malloc和calloc函数是相似的，都申请一块连续的空间
// malloc申请的空间不初始化，calloc申请的要初始化
// realloc函数可以调整动态申请内存的大小，可大可小
//

//题5：
//动态内存常见的错误
//对非动态内存的free释放
//对动态内存的多次释放
//对动态内存的越界访问

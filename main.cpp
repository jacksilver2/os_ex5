int shmain() //TODO remove this function!
{
	std::cout << "shit, World!" << std::endl;
	int x1, x2, y1 = 17, y2 = 13;
	VMwrite(y1 * 16, 43);
	VMwrite(y2 * 16, 114);
//	PMread(0, &x);
//	std::cout << x << std::endl;
//	PMread(16, &x);
//	std::cout << x << std::endl;
//	PMread(2*16, &x);
//	std::cout << x << std::endl;
//	PMread(3*16+y, &x);
//	std::cout << x << std::endl;
//	PMread(4*16, &x);
//	std::cout << "x "<<x << std::endl;
	VMread(y1 * 16, &x1);
	VMread(y2 * 16, &x2);
	std::cout << "x1 is " << x1 << std::endl;
	std::cout << "x2 is " << x2 << std::endl;
//	unsigned long num = 15;
//
//	std::cout << ll2bs(num) << std::endl;
//
//	long long int i = std::stoll(ll2bs(num), nullptr, 2);
//	std::cout << i << std::endl;
//	std::cout << "------------------------" << std::endl;
//	u_int64_t virtAdd = static_cast<u_int64_t>(bs2ll("00111001110011011010"));
//	// 0011 1001 1100 1101 1010
//
//	std::cout << "------------------------" << std::endl;
////	std::cout << "table 0: " << ll2bs(entryOfTableInDepthN(virtAdd, 0)) << std::endl;
////	std::cout << "table 1: " << ll2bs(entryOfTableInDepthN(virtAdd, 1)) << std::endl;
////	std::cout << "table 2: " << ll2bs(entryOfTableInDepthN(virtAdd, 2)) << std::endl;
////	std::cout << "table 3: " << ll2bs(entryOfTableInDepthN(virtAdd, 3)) << std::endl;
////	std::cout << "fucking offset: " << ll2bs(offset(virtAdd)) << std::endl;
//
////	PMwrite(0+1,1);
////	PMwrite(1*16+6,7);
////	PMwrite(7*16+0,3);
////	PMwrite(3*16+9,4);
////	PMwrite(4*16+5,13); //13 is the value;
////	word_t x;
////	PMread(translateAddr(bs2ll("00010110000010010101")),&x);
////	std::cout<<x<<std::endl;
////	PMwrite(translateAddr(bs2ll("00010110000010010110")),117);
////	PMread(translateAddr(bs2ll("00010110000010010110")),&x);
////	PMread(4*16+6,&x);
////	std::cout<<x<<std::endl;
	return 0;
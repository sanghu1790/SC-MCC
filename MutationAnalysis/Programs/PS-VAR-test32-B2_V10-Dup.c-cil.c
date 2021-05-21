//This Program is Problem4-REACHABILITY-TRAINING-RERS18.c
//Modified seqshell.sh to format the test cases as per Bound=7
#include<stdio.h>

#define BOUND 7
int kappa;

int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>

	// inputs
	int inputs[] = {5,1,3,2,4};

	int errorCheck();
	int calculate_output(int);
	int calculate_outputm1(int);
	int calculate_outputm2(int);
	int calculate_outputm3(int);
	int calculate_outputm4(int);
	int calculate_outputm5(int);
	int calculate_outputm6(int);
	int calculate_outputm7(int);
	int calculate_outputm8(int);
	int calculate_outputm9(int);
	int calculate_outputm10(int);
	int calculate_outputm11(int);
	int calculate_outputm12(int);
	int calculate_outputm13(int);
	int calculate_outputm14(int);
	int calculate_outputm15(int);
	int calculate_outputm16(int);
	int calculate_outputm17(int);
	int calculate_outputm18(int);
	int calculate_outputm19(int);
	int calculate_outputm20(int);
	int calculate_outputm21(int);
	int calculate_outputm22(int);
	int calculate_outputm23(int);
	int calculate_outputm24(int);
	int calculate_outputm25(int);
	int calculate_outputm26(int);
	int calculate_outputm27(int);
	int calculate_outputm28(int);
	int calculate_outputm29(int);
	int calculate_outputm30(int);
	int calculate_outputm31(int);
	int calculate_outputm32(int);
	int calculate_outputm33(int);
	int calculate_outputm34(int);
	int calculate_outputm35(int);
	int calculate_outputm36(int);
	int calculate_outputm37(int);
	int calculate_outputm38(int);
	int calculate_outputm39(int);
	int calculate_outputm40(int);
	int calculate_outputm41(int);
	int calculate_outputm42(int);
	int calculate_outputm43(int);
	int calculate_outputm44(int);
	int calculate_outputm45(int);
	int calculate_outputm46(int);
	int calculate_outputm47(int);
	int calculate_outputm48(int);
	int calculate_outputm49(int);
	int calculate_outputm50(int);
	int calculate_outputm51(int);
	int calculate_outputm52(int);
	int calculate_outputm53(int);
	int calculate_outputm54(int);
	int calculate_outputm55(int);
	int calculate_outputm56(int);
	int calculate_outputm57(int);
	int calculate_outputm58(int);
	int calculate_outputm59(int);
	int calculate_outputm60(int);
	int calculate_outputm61(int);
	int calculate_outputm62(int);
	int calculate_outputm63(int);
	int calculate_outputm64(int);
	int calculate_outputm65(int);
	int calculate_outputm66(int);
	int calculate_outputm67(int);
	int calculate_outputm68(int);
	int calculate_outputm69(int);
	int calculate_outputm70(int);
	int calculate_outputm71(int);
	int calculate_outputm72(int);
	int calculate_outputm73(int);
	int calculate_outputm74(int);
	int calculate_outputm75(int);
	int calculate_outputm76(int);
	int calculate_outputm77(int);
	int calculate_outputm78(int);
	int calculate_outputm79(int);
	int calculate_outputm80(int);
	int calculate_outputm81(int);
	int calculate_outputm82(int);
	int calculate_outputm83(int);
	int calculate_outputm84(int);
	int calculate_outputm85(int);
	int calculate_outputm86(int);
	int calculate_outputm87(int);
	int calculate_outputm88(int);
	int calculate_outputm89(int);
	int calculate_outputm90(int);
	int calculate_outputm91(int);
	int calculate_outputm92(int);
	int calculate_outputm93(int);
	int calculate_outputm94(int);
	int calculate_outputm95(int);
	int calculate_outputm96(int);
	int calculate_outputm97(int);
	int calculate_outputm98(int);
	int calculate_outputm99(int);
	int calculate_outputm100(int);
	int calculate_outputm101(int);
	int calculate_outputm102(int);
	int calculate_outputm103(int);
	int calculate_outputm104(int);
	int calculate_outputm105(int);
	int calculate_outputm106(int);
	int calculate_outputm107(int);
	int calculate_outputm108(int);
	int calculate_outputm109(int);
	int calculate_outputm110(int);
	int calculate_outputm111(int);
	int calculate_outputm112(int);
	int calculate_outputm113(int);
	int calculate_outputm114(int);
	int calculate_outputm115(int);
	int calculate_outputm116(int);
	int calculate_outputm117(int);
	int calculate_outputm118(int);
	int calculate_outputm119(int);
	int calculate_outputm120(int);
	int calculate_outputm121(int);
	int calculate_outputm122(int);
	int calculate_outputm123(int);
	int calculate_outputm124(int);
	int calculate_outputm125(int);
	int calculate_outputm126(int);
	int calculate_outputm127(int);
	int calculate_outputm128(int);
	int calculate_outputm129(int);
	int calculate_outputm130(int);
	int calculate_outputm131(int);
	int calculate_outputm132(int);
	int calculate_outputm133(int);
	int calculate_outputm134(int);
	int calculate_outputm135(int);
	int calculate_outputm136(int);
	int calculate_outputm137(int);
	int calculate_outputm138(int);
	int calculate_outputm139(int);
	int calculate_outputm140(int);
	int calculate_outputm141(int);
	int calculate_outputm142(int);
	int calculate_outputm143(int);
	int calculate_outputm144(int);
	int calculate_outputm145(int);
	int calculate_outputm146(int);
	int calculate_outputm147(int);
	int calculate_outputm148(int);
	int calculate_outputm149(int);
	int calculate_outputm150(int);
	int calculate_outputm151(int);
	int calculate_outputm152(int);
	int calculate_outputm153(int);
	int calculate_outputm154(int);
	int calculate_outputm155(int);
	int calculate_outputm156(int);
	int calculate_outputm157(int);
	int calculate_outputm158(int);
	int calculate_outputm159(int);
	int calculate_outputm160(int);
	int calculate_outputm161(int);
	int calculate_outputm162(int);
	int calculate_outputm163(int);
	int calculate_outputm164(int);
	int calculate_outputm165(int);
	int calculate_outputm166(int);
	int calculate_outputm167(int);
	int calculate_outputm168(int);
	int calculate_outputm169(int);
	int calculate_outputm170(int);
	int calculate_outputm171(int);
	int calculate_outputm172(int);
	int calculate_outputm173(int);
	int calculate_outputm174(int);
	int calculate_outputm175(int);
	int calculate_outputm176(int);
	int calculate_outputm177(int);
	int calculate_outputm178(int);
	int calculate_outputm179(int);
	int calculate_outputm180(int);
	int calculate_outputm181(int);
	int calculate_outputm182(int);

	 int a661947676 = 4;
	 int cf = 1;
	 int a844248056  = 36;
	 int a1554431138  = 33;
	 int a527567549 = 3;
	 int a1881910084 = 9;
	 int a60637518 = 14;
	 int a2136827589 = 5;
	 int a281541075 = 8;
	 int a295725367 = 1;
	 int a724210693 = 7;
	 int a1207793402 = 15;
	 int a1796953699  = 34;
	 int a541609403  = 34;
	 int a1366985377  = 32;
	 int a219021671 = 8;
	 int a153564040 = 11;
	 int a1105863021 = 10;
	 int a1631914830 = 4;
	 int a707129805 = 12;
	 int a2019397104  = 34;
	 int a898461465 = 10;
	 int a653455892 = 4;
	 int a922488722 = 6;
	 int a923085816  = 36;
	 int a907731533 = 12;
	 int a1565774989  = 34;
	 int a832301293 = 11;
	 int a1650740897  = 32;
	 int a334820112 = 8;
	 int a1419680518  = 34;
	 int a875425738 = 7;
	 int a359609581 = 4;
	 int a426375774  = 36;
	 int a1913002755 = 17;
	 int a526521336 = 11;
	 int a1199458039  = 33;
	 int a1924020025 = 10;
	 int a1137288446  = 36;
	 int a1825173427 = 6;
	 int a1566461368  = 36;
	 int a1047305930 = 6;
	 int a282353883 = 14;
	 int a2132896467 = 5;
	 int a684835347 = 9;
	 int a2038894560  = 35;
	 int a1482795247 = 13;
	 int a1402042250 = 12;
	 int a137394525  = 34;
	 int a87830658 = 9;
	 int a920377687  = 32;
	 int a71493647  = 32;
	 int a625968089  = 35;


	int errorCheck() {
//printf("POINT: 1\n");

	    if(((a1565774989 == 32 && a1199458039 == 36) && a875425738 == 13)){
//printf("POINT: 2\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 3\n");

	    if(((a2019397104 == 32 && a625968089 == 35) && a875425738 == 9)){
//printf("POINT: 4\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 5\n");

	    if(((a282353883 == 10 && a526521336 == 6) && a875425738 == 8)){
//printf("POINT: 6\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 7\n");

	    if(((a707129805 == 12 && a1199458039 == 34) && a875425738 == 13)){
//printf("POINT: 8\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 9\n");

	    if(((a219021671 == 7 && a541609403 == 35) && a875425738 == 12)){
//printf("POINT: 10\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 11\n");

	    if(((a907731533 == 12 && a1482795247 == 13) && a875425738 == 11)){
//printf("POINT: 12\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 13\n");

	    if(((a87830658 == 14 && a1137288446 == 35) && a875425738 == 6)){
//printf("POINT: 14\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 15\n");

	    if(((a1366985377 == 34 && a625968089 == 34) && a875425738 == 9)){
//printf("POINT: 16\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 17\n");

	    if(((a1554431138 == 32 && a1137288446 == 33) && a875425738 == 6)){
//printf("POINT: 18\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 19\n");

	    if(((a2038894560 == 32 && a1199458039 == 33) && a875425738 == 13)){
//printf("POINT: 20\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 21\n");

	    if(((a1105863021 == 10 && a1924020025 == 4) && a875425738 == 7)){
//printf("POINT: 22\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 23\n");

	    if(((a87830658 == 13 && a1137288446 == 35) && a875425738 == 6)){
//printf("POINT: 24\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 25\n");

	    if(((a71493647 == 34 && a541609403 == 36) && a875425738 == 12)){
//printf("POINT: 26\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 27\n");

	    if(((a625968089 == 36 && a526521336 == 10) && a875425738 == 8)){
//printf("POINT: 28\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 29\n");

	    if(((a295725367 == 5 && a625968089 == 33) && a875425738 == 9)){
//printf("POINT: 30\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 31\n");

	    if(((a359609581 == 6 && a1482795247 == 7) && a875425738 == 11)){
//printf("POINT: 32\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 33\n");

	    if(((a832301293 == 4 && a1482795247 == 8) && a875425738 == 11)){
//printf("POINT: 34\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 35\n");

	    if(((a922488722 == 6 && a1482795247 == 11) && a875425738 == 11)){
//printf("POINT: 36\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 37\n");

	    if(((a1796953699 == 32 && a1924020025 == 6) && a875425738 == 7)){
//printf("POINT: 38\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 39\n");

	    if(((a1207793402 == 13 && a526521336 == 7) && a875425738 == 8)){
//printf("POINT: 40\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 41\n");

	    if(((a1105863021 == 14 && a1924020025 == 4) && a875425738 == 7)){
//printf("POINT: 42\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 43\n");

	    if(((a625968089 == 33 && a526521336 == 10) && a875425738 == 8)){
//printf("POINT: 44\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 45\n");

	    if(((a898461465 == 12 && a526521336 == 9) && a875425738 == 8)){
//printf("POINT: 46\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 47\n");

	    if(((a1796953699 == 34 && a1924020025 == 6) && a875425738 == 7)){
//printf("POINT: 48\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 49\n");

	    if(((a282353883 == 8 && a137394525 == 35) && a875425738 == 10)){
//printf("POINT: 50\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 51\n");

	    if(((a724210693 == 5 && a541609403 == 33) && a875425738 == 12)){
//printf("POINT: 52\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 53\n");

	    if(((a661947676 == 4 && a526521336 == 12) && a875425738 == 8)){
//printf("POINT: 54\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 55\n");

	    if(((a832301293 == 9 && a1482795247 == 8) && a875425738 == 11)){
//printf("POINT: 56\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 57\n");

	    if(((a1207793402 == 15 && a526521336 == 7) && a875425738 == 8)){
//printf("POINT: 58\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 59\n");

	    if(((a1566461368 == 35 && a137394525 == 32) && a875425738 == 10)){
//printf("POINT: 60\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 61\n");

	    if(((a898461465 == 15 && a526521336 == 9) && a875425738 == 8)){
//printf("POINT: 62\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 63\n");

	    if(((a920377687 == 33 && a1199458039 == 35) && a875425738 == 13)){
//printf("POINT: 64\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 65\n");

	    if(((a295725367 == 4 && a1924020025 == 9) && a875425738 == 7)){
//printf("POINT: 66\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 67\n");

	    if(((a920377687 == 36 && a1199458039 == 35) && a875425738 == 13)){
//printf("POINT: 68\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 69\n");

	    if(((a60637518 == 16 && a1199458039 == 32) && a875425738 == 13)){
//printf("POINT: 70\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 71\n");

	    if(((a2038894560 == 35 && a1199458039 == 33) && a875425738 == 13)){
//printf("POINT: 72\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 73\n");

	    if(((a87830658 == 9 && a1137288446 == 35) && a875425738 == 6)){
//printf("POINT: 74\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 75\n");

	    if(((a71493647 == 36 && a541609403 == 36) && a875425738 == 12)){
//printf("POINT: 76\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 77\n");

	    if(((a653455892 == 8 && a625968089 == 36) && a875425738 == 9)){
//printf("POINT: 78\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 79\n");

	    if(((a219021671 == 9 && a541609403 == 35) && a875425738 == 12)){
//printf("POINT: 80\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 81\n");

	    if(((a1913002755 == 12 && a625968089 == 32) && a875425738 == 9)){
//printf("POINT: 82\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 83\n");

	    if(((a1631914830 == 5 && a1137288446 == 34) && a875425738 == 6)){
//printf("POINT: 84\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 85\n");

	    if(((a898461465 == 13 && a526521336 == 9) && a875425738 == 8)){
//printf("POINT: 86\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 87\n");

	    if(((a1047305930 == 6 && a1924020025 == 7) && a875425738 == 7)){
//printf("POINT: 88\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 89\n");

	    if(((a359609581 == 10 && a1482795247 == 12) && a875425738 == 11)){
//printf("POINT: 90\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 91\n");

	    if(((a1554431138 == 36 && a1137288446 == 33) && a875425738 == 6)){
//printf("POINT: 92\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 93\n");

	    if(((a625968089 == 34 && a526521336 == 10) && a875425738 == 8)){
//printf("POINT: 94\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 95\n");

	    if(((a1402042250 == 8 && a137394525 == 36) && a875425738 == 10)){
//printf("POINT: 96\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 97\n");

	    if(((a923085816 == 33 && a1137288446 == 32) && a875425738 == 6)){
//printf("POINT: 98\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 99\n");

	    if(((a1565774989 == 33 && a1199458039 == 36) && a875425738 == 13)){
//printf("POINT: 100\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 101\n");

	    if(((a295725367 == 6 && a625968089 == 33) && a875425738 == 9)){
//printf("POINT: 102\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 103\n");

	    if(((a153564040 == 9 && a1924020025 == 11) && a875425738 == 7)){
//printf("POINT: 104\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 105\n");

	    if(((a1419680518 == 35 && a541609403 == 34) && a875425738 == 12)){
//printf("POINT: 106\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 107\n");

	    if(((a922488722 == 13 && a1482795247 == 11) && a875425738 == 11)){
//printf("POINT: 108\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 109\n");

	    if(((a2038894560 == 33 && a1199458039 == 33) && a875425738 == 13)){
//printf("POINT: 110\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 111\n");

	    if(((a1881910084 == 16 && a526521336 == 8) && a875425738 == 8)){
//printf("POINT: 112\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 113\n");

	    if(((a1881910084 == 10 && a526521336 == 8) && a875425738 == 8)){
//printf("POINT: 114\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 115\n");

	    if(((a844248056 == 35 && a1482795247 == 9) && a875425738 == 11)){
//printf("POINT: 116\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 117\n");

	    if(((a1565774989 == 36 && a1199458039 == 36) && a875425738 == 13)){
//printf("POINT: 118\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 119\n");

	    if(((a1825173427 == 6 && a137394525 == 34) && a875425738 == 10)){
//printf("POINT: 120\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 121\n");

	    if(((a1881910084 == 12 && a526521336 == 8) && a875425738 == 8)){
//printf("POINT: 122\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 123\n");

	    if(((a1650740897 == 35 && a1924020025 == 8) && a875425738 == 7)){
//printf("POINT: 124\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 125\n");

	    if(((a1650740897 == 32 && a1924020025 == 8) && a875425738 == 7)){
//printf("POINT: 126\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 127\n");

	    if(((a219021671 == 8 && a541609403 == 35) && a875425738 == 12)){
//printf("POINT: 128\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 129\n");

	    if(((a724210693 == 1 && a541609403 == 33) && a875425738 == 12)){
//printf("POINT: 130\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 131\n");

	    if(((a923085816 == 36 && a1137288446 == 32) && a875425738 == 6)){
//printf("POINT: 132\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 133\n");

	    if(((a1554431138 == 34 && a1137288446 == 33) && a875425738 == 6)){
//printf("POINT: 134\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 135\n");

	    if(((a1631914830 == 8 && a1137288446 == 34) && a875425738 == 6)){
//printf("POINT: 136\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 137\n");

	    if(((a1047305930 == 8 && a1924020025 == 7) && a875425738 == 7)){
//printf("POINT: 138\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 139\n");

	    if(((a334820112 == 12 && a526521336 == 11) && a875425738 == 8)){
//printf("POINT: 140\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 141\n");

	    if(((a707129805 == 11 && a1199458039 == 34) && a875425738 == 13)){
//printf("POINT: 142\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 143\n");

	    if(((a282353883 == 12 && a526521336 == 6) && a875425738 == 8)){
//printf("POINT: 144\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 145\n");

	    if(((a707129805 == 13 && a1199458039 == 34) && a875425738 == 13)){
//printf("POINT: 146\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 147\n");

	    if(((a1105863021 == 15 && a1924020025 == 4) && a875425738 == 7)){
//printf("POINT: 148\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 149\n");

	    if(((a1796953699 == 35 && a1924020025 == 6) && a875425738 == 7)){
//printf("POINT: 150\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 151\n");

	    if(((a1825173427 == 4 && a137394525 == 34) && a875425738 == 10)){
//printf("POINT: 152\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 153\n");

	    if(((a1419680518 == 36 && a541609403 == 34) && a875425738 == 12)){
//printf("POINT: 154\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 155\n");

	    if(((a832301293 == 7 && a1482795247 == 8) && a875425738 == 11)){
//printf("POINT: 156\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 157\n");

	    if(((a282353883 == 15 && a526521336 == 6) && a875425738 == 8)){
//printf("POINT: 158\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 159\n");

	    if(((a2132896467 == 4 && a1482795247 == 10) && a875425738 == 11)){
//printf("POINT: 160\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 161\n");

	    if(((a282353883 == 13 && a526521336 == 6) && a875425738 == 8)){
//printf("POINT: 162\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 163\n");

	    if(((a1207793402 == 10 && a526521336 == 7) && a875425738 == 8)){
//printf("POINT: 164\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 165\n");

	    if(((a1913002755 == 17 && a625968089 == 32) && a875425738 == 9)){
//printf("POINT: 166\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 167\n");

	    if(((a1796953699 == 36 && a1924020025 == 6) && a875425738 == 7)){
//printf("POINT: 168\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 169\n");

	    if(((a359609581 == 7 && a1482795247 == 7) && a875425738 == 11)){
//printf("POINT: 170\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 171\n");

	    if(((a844248056 == 33 && a1482795247 == 9) && a875425738 == 11)){
//printf("POINT: 172\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 173\n");

	    if(((a907731533 == 11 && a1482795247 == 13) && a875425738 == 11)){
//printf("POINT: 174\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 175\n");

	    if(((a684835347 == 7 && a541609403 == 32) && a875425738 == 12)){
//printf("POINT: 176\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 177\n");

	    if(((a527567549 == 4 && a1924020025 == 5) && a875425738 == 7)){
//printf("POINT: 178\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 179\n");

	    if(((a2136827589 == 6 && a1482795247 == 6) && a875425738 == 11)){
//printf("POINT: 180\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 181\n");

	    if(((a1825173427 == 9 && a137394525 == 34) && a875425738 == 10)){
//printf("POINT: 182\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 183\n");

	    if(((a359609581 == 5 && a1482795247 == 12) && a875425738 == 11)){
//printf("POINT: 184\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 185\n");

	    if(((a832301293 == 8 && a1482795247 == 8) && a875425738 == 11)){
//printf("POINT: 186\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 187\n");

	    if(((a334820112 == 7 && a526521336 == 11) && a875425738 == 8)){
//printf("POINT: 188\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 189\n");

	    if(((a359609581 == 5 && a1482795247 == 7) && a875425738 == 11)){
//printf("POINT: 190\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 191\n");

	    if(((a1913002755 == 15 && a1924020025 == 10) && a875425738 == 7)){
//printf("POINT: 192\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 193\n");

	    if(((a60637518 == 10 && a1199458039 == 32) && a875425738 == 13)){
//printf("POINT: 194\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 195\n");

	    if(((a844248056 == 32 && a1482795247 == 9) && a875425738 == 11)){
//printf("POINT: 196\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 197\n");

	    if(((a2132896467 == 3 && a1482795247 == 10) && a875425738 == 11)){
//printf("POINT: 198\n");
	    cf = 0;
	    return -1; 
	    }
//printf("POINT: 199\n");

	    if(((a359609581 == 9 && a1482795247 == 12) && a875425738 == 11)){
//printf("POINT: 200\n");
	    cf = 0;
	    return -1; 
	    }
	}
 int calculate_outputm53(int input) {
//printf("POINT: 201\n");

    if((a923085816 == 32 || ((a875425738 == 6 || ( cf==1  && a1137288446 == 32)) || (input == 1)))) {
//printf("POINT: 202\n");
    	cf = 0;
    	a875425738 = 8;
    	a526521336 = 6;
    	a282353883 = 14; 
    	 printf("%d\n", 26);  
    } 
//printf("POINT: 203\n");

    if((((a1137288446 == 32 || (a875425738 == 6 &&  cf==1 )) && a923085816 == 32) || (input == 4))) {
//printf("POINT: 204\n");
    	cf = 0;
    	a541609403 = 32 ;
    	a875425738 = 12;
    	a684835347 = 7; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 205\n");

    if((a875425738 == 6 || ((input == 5) || (a923085816 == 32 || (a1137288446 == 32 &&  cf==1 ))))) {
//printf("POINT: 206\n");
    	cf = 0;
    	a426375774 = 32 ;
    	a137394525 = 33 ;
    	a875425738 = 10; 
    	 printf("%d\n", 21);  
    } 
//printf("POINT: 207\n");

    if((a1137288446 == 32 || (((input == 2) || ( cf==1  && a875425738 == 6)) && a923085816 == 32))) {
//printf("POINT: 208\n");
    	cf = 0;
    	a1482795247 = 13;
    	a875425738 = 11;
    	a907731533 = 8; 
    	 printf("%d\n", 20);  
    } 
}
 int calculate_outputm54(int input) {
//printf("POINT: 209\n");

    if((a875425738 == 6 || ((((input == 1) &&  cf==1 ) && a923085816 == 34) && a1137288446 == 32))) {
//printf("POINT: 210\n");
    	cf = 0;
    	 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 211\n");

    if(((a923085816 == 34 || (a875425738 == 6 || ( cf==1  || (input == 3)))) && a1137288446 == 32)) {
//printf("POINT: 212\n");
    	cf = 0;
    	a1482795247 = 6;
    	a875425738 = 11;
    	a2136827589 = 6; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 213\n");

    if((((a923085816 == 34 || (a875425738 == 6 &&  cf==1 )) || (input == 2)) && a1137288446 == 32)) {
//printf("POINT: 214\n");
    	cf = 0;
    	a526521336 = 12;
    	a875425738 = 8;
    	a661947676 = 8; 
    	 printf("%d\n", 24);  
    } 
}
 int calculate_outputm2(int input) {
//printf("POINT: 215\n");

    if((a923085816 == 32 &&  cf==1 )) {
//printf("POINT: 216\n");
    	calculate_outputm53(input);
    } 
//printf("POINT: 217\n");

    if(( cf==1  && a923085816 == 34)) {
//printf("POINT: 218\n");
    	calculate_outputm54(input);
    } 
}
 int calculate_outputm56(int input) {
//printf("POINT: 219\n");

    if((((a1137288446 == 34 || (a875425738 == 6 &&  cf==1 )) && a1631914830 == 1) || (input == 2))) {
//printf("POINT: 220\n");
    	cf = 0;
    	a526521336 = 7;
    	a875425738 = 8;
    	a1207793402 = 15; 
    	 printf("%d\n", 23);  
    } 
//printf("POINT: 221\n");

    if((((((input == 5) &&  cf==1 ) && a1137288446 == 34) && a1631914830 == 1) && a875425738 == 6)) {
//printf("POINT: 222\n");
    	cf = 0;
    	a1566461368 = 33 ;
    	a137394525 = 32 ;
    	a875425738 = 10; 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 223\n");

    if((((a875425738 == 6 || (a1631914830 == 1 &&  cf==1 )) && a1137288446 == 34) || (input == 1))) {
//printf("POINT: 224\n");
    	cf = 0;
    	a625968089 = 36 ;
    	a875425738 = 9;
    	a653455892 = 2; 
    	 printf("%d\n", 24);  
    } 
}
 int calculate_outputm3(int input) {
//printf("POINT: 225\n");

    if((a1631914830 == 1 &&  cf==1 )) {
//printf("POINT: 226\n");
    	calculate_outputm56(input);
    } 
}
 int calculate_outputm60(int input) {
//printf("POINT: 227\n");

    if(((input == 4) || (a1137288446 == 35 || ((a875425738 == 6 &&  cf==1 ) && a87830658 == 11)))) {
//printf("POINT: 228\n");
    	cf = 0;
    	a526521336 = 6;
    	a875425738 = 8;
    	a282353883 = 14; 
    	 printf("%d\n", 25);  
    } 
//printf("POINT: 229\n");

    if((a1137288446 == 35 || (a87830658 == 11 || ((input == 1) || (a875425738 == 6 &&  cf==1 ))))) {
//printf("POINT: 230\n");
    	cf = 0;
    	a875425738 = 12;
    	a541609403 = 33 ;
    	a724210693 = 7; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 231\n");

    if(((a1137288446 == 35 || ((input == 3) || (a875425738 == 6 &&  cf==1 ))) && a87830658 == 11)) {
//printf("POINT: 232\n");
    	cf = 0;
    	a1137288446 = 33 ;
    	a1554431138 = 34 ; 
    	 printf("%d\n", 24);  
    } 
}
 int calculate_outputm61(int input) {
//printf("POINT: 233\n");

    if((((( cf==1  && a1137288446 == 35) || (input == 1)) && a875425738 == 6) && a87830658 == 12)) {
//printf("POINT: 234\n");
    	cf = 0;
    	a875425738 = 11;
    	a1482795247 = 10;
    	a2132896467 = 3; 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 235\n");

    if((a87830658 == 12 || ((input == 2) || (a1137288446 == 35 || (a875425738 == 6 &&  cf==1 ))))) {
//printf("POINT: 236\n");
    	cf = 0;
    	a1566461368 = 33 ;
    	a137394525 = 32 ;
    	a875425738 = 10; 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 237\n");

    if(((a1137288446 == 35 || ((input == 3) || ( cf==1  && a875425738 == 6))) && a87830658 == 12)) {
//printf("POINT: 238\n");
    	cf = 0;
    	 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 239\n");

    if(((input == 5) || (a1137288446 == 35 || (( cf==1  && a87830658 == 12) && a875425738 == 6)))) {
//printf("POINT: 240\n");
    	cf = 0;
    	a875425738 = 9;
    	a625968089 = 33 ;
    	a295725367 = 8; 
    	 printf("%d\n", 25);  
    } 
}
 int calculate_outputm4(int input) {
//printf("POINT: 241\n");

    if((a87830658 == 11 &&  cf==1 )) {
//printf("POINT: 242\n");
    	calculate_outputm60(input);
    } 
//printf("POINT: 243\n");

    if((a87830658 == 12 &&  cf==1 )) {
//printf("POINT: 244\n");
    	calculate_outputm61(input);
    } 
}
 int calculate_outputm65(int input) {
//printf("POINT: 245\n");

    if(((a875425738 == 7 || ((a1105863021 == 11 &&  cf==1 ) || (input == 2))) && a1924020025 == 4)) {
//printf("POINT: 246\n");
    	cf = 0;
    	a875425738 = 12;
    	a541609403 = 35 ;
    	a219021671 = 6; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 247\n");

    if(((a1105863021 == 11 || (a875425738 == 7 || ( cf==1  && a1924020025 == 4))) || (input == 1))) {
//printf("POINT: 248\n");
    	cf = 0;
    	a875425738 = 10;
    	a137394525 = 35 ;
    	a282353883 = 11; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 249\n");

    if(((((input == 5) || (a1924020025 == 4 &&  cf==1 )) && a875425738 == 7) && a1105863021 == 11)) {
//printf("POINT: 250\n");
    	cf = 0;
    	a541609403 = 34 ;
    	a1419680518 = 36 ;
    	a875425738 = 12; 
    	 printf("%d\n", 22);  
    } 
}
 int calculate_outputm5(int input) {
//printf("POINT: 251\n");

    if(( cf==1  && a1105863021 == 11)) {
//printf("POINT: 252\n");
    	calculate_outputm65(input);
    } 
}
 int calculate_outputm69(int input) {
//printf("POINT: 253\n");

    if(((input == 4) || ((a527567549 == 8 || (a1924020025 == 5 &&  cf==1 )) && a875425738 == 7))) {
//printf("POINT: 254\n");
    	cf = 0;
    	a875425738 = 12;
    	a541609403 = 33 ;
    	a724210693 = 6; 
    	 printf("%d\n", 23);  
    } 
//printf("POINT: 255\n");

    if(((a1924020025 == 5 || (( cf==1  || (input == 1)) && a875425738 == 7)) && a527567549 == 8)) {
//printf("POINT: 256\n");
    	cf = 0;
    	a1137288446 = 32 ;
    	a923085816 = 32 ;
    	a875425738 = 6; 
    	 printf("%d\n", 25);  
    } 
//printf("POINT: 257\n");

    if(((a1924020025 == 5 || ((a527567549 == 8 &&  cf==1 ) || (input == 3))) && a875425738 == 7)) {
//printf("POINT: 258\n");
    	cf = 0;
    	a1199458039 = 32 ;
    	a875425738 = 13;
    	a60637518 = 10; 
    	 printf("%d\n", 25);  
    } 
}
 int calculate_outputm6(int input) {
//printf("POINT: 259\n");

    if((a527567549 == 8 &&  cf==1 )) {
//printf("POINT: 260\n");
    	calculate_outputm69(input);
    } 
}
 int calculate_outputm76(int input) {
//printf("POINT: 261\n");

    if((((a1924020025 == 7 || (a1047305930 == 12 &&  cf==1 )) || (input == 1)) && a875425738 == 7)) {
//printf("POINT: 262\n");
    	cf = 0;
    	a875425738 = 9;
    	a625968089 = 36 ;
    	a653455892 = 2; 
    	 printf("%d\n", 23);  
    } 
//printf("POINT: 263\n");

    if((a1047305930 == 12 || ((input == 4) || ((a1924020025 == 7 &&  cf==1 ) && a875425738 == 7)))) {
//printf("POINT: 264\n");
    	cf = 0;
    	a1565774989 = 32 ;
    	a1199458039 = 36 ;
    	a875425738 = 13; 
    	 printf("%d\n", 22);  
    } 
}
 int calculate_outputm8(int input) {
//printf("POINT: 265\n");

    if((a1047305930 == 12 &&  cf==1 )) {
//printf("POINT: 266\n");
    	calculate_outputm76(input);
    } 
}
 int calculate_outputm80(int input) {
//printf("POINT: 267\n");

    if(((a1924020025 == 9 || (((input == 1) &&  cf==1 ) && a875425738 == 7)) && a295725367 == 5)) {
//printf("POINT: 268\n");
    	cf = 0;
    	a875425738 = 8;
    	a526521336 = 8;
    	a1881910084 = 11; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 269\n");

    if((((((input == 3) &&  cf==1 ) && a295725367 == 5) && a1924020025 == 9) && a875425738 == 7)) {
//printf("POINT: 270\n");
    	cf = 0;
    	a1137288446 = 35 ;
    	a875425738 = 6;
    	a87830658 = 9; 
    	 printf("%d\n", 23);  
    } 
//printf("POINT: 271\n");

    if(((input == 2) || ((( cf==1  && a875425738 == 7) && a295725367 == 5) && a1924020025 == 9))) {
//printf("POINT: 272\n");
    	cf = 0;
    	a625968089 = 32 ;
    	a875425738 = 8;
    	a526521336 = 10; 
    	 printf("%d\n", 22);  
    } 
}
 int calculate_outputm10(int input) {
//printf("POINT: 273\n");

    if((a295725367 == 5 &&  cf==1 )) {
//printf("POINT: 274\n");
    	calculate_outputm80(input);
    } 
}
 int calculate_outputm82(int input) {
//printf("POINT: 275\n");

    if((a875425738 == 7 || (((a1924020025 == 10 &&  cf==1 ) && a1913002755 == 17) || (input == 2)))) {
//printf("POINT: 276\n");
    	cf = 0;
    	a1137288446 = 34 ;
    	a875425738 = 6;
    	a1631914830 = 1; 
    	 printf("%d\n", 21);  
    } 
//printf("POINT: 277\n");

    if((((input == 1) || (a1924020025 == 10 || (a1913002755 == 17 &&  cf==1 ))) && a875425738 == 7)) {
//printf("POINT: 278\n");
    	cf = 0;
    	a1565774989 = 34 ;
    	a1199458039 = 36 ;
    	a875425738 = 13; 
    	 printf("%d\n", 25);  
    } 
//printf("POINT: 279\n");

    if((a875425738 == 7 || (((input == 4) || ( cf==1  && a1924020025 == 10)) && a1913002755 == 17))) {
//printf("POINT: 280\n");
    	cf = 0;
    	a875425738 = 10;
    	a137394525 = 34 ;
    	a1825173427 = 5; 
    	 printf("%d\n", 25);  
    } 
}
 int calculate_outputm11(int input) {
//printf("POINT: 281\n");

    if((a1913002755 == 17 &&  cf==1 )) {
//printf("POINT: 282\n");
    	calculate_outputm82(input);
    } 
}
 int calculate_outputm84(int input) {
//printf("POINT: 283\n");

    if(((a281541075 == 6 || (a875425738 == 8 || ((input == 5) &&  cf==1 ))) && a526521336 == 5)) {
//printf("POINT: 284\n");
    	cf = 0;
    	a1924020025 = 7;
    	a875425738 = 7;
    	a1047305930 = 12; 
    	 printf("%d\n", 21);  
    } 
//printf("POINT: 285\n");

    if(((((a875425738 == 8 &&  cf==1 ) && a281541075 == 6) && a526521336 == 5) || (input == 1))) {
//printf("POINT: 286\n");
    	cf = 0;
    	a875425738 = 13;
    	a1199458039 = 32 ;
    	a60637518 = 16; 
    	 printf("%d\n", 20);  
    } 
}
 int calculate_outputm13(int input) {
//printf("POINT: 287\n");

    if((a281541075 == 6 &&  cf==1 )) {
//printf("POINT: 288\n");
    	calculate_outputm84(input);
    } 
}
 int calculate_outputm88(int input) {
//printf("POINT: 289\n");

    if((a526521336 == 6 || ((input == 2) || (a875425738 == 8 || ( cf==1  && a282353883 == 14))))) {
//printf("POINT: 290\n");
    	cf = 0;
    	a137394525 = 34 ;
    	a875425738 = 10;
    	a1825173427 = 5; 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 291\n");

    if(((((a875425738 == 8 &&  cf==1 ) || (input == 4)) && a282353883 == 14) && a526521336 == 6)) {
//printf("POINT: 292\n");
    	cf = 0;
    	a526521336 = 8;
    	a1881910084 = 10; 
    	 printf("%d\n", 22);  
    } 
}
 int calculate_outputm14(int input) {
//printf("POINT: 293\n");

    if(( cf==1  && a282353883 == 14)) {
//printf("POINT: 294\n");
    	calculate_outputm88(input);
    } 
}
 int calculate_outputm91(int input) {
//printf("POINT: 295\n");

    if(((((input == 2) || (a1207793402 == 12 &&  cf==1 )) && a875425738 == 8) && a526521336 == 7)) {
//printf("POINT: 296\n");
    	cf = 0;
    	a526521336 = 6;
    	a282353883 = 14; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 297\n");

    if(((a1207793402 == 12 || (((input == 1) &&  cf==1 ) && a526521336 == 7)) && a875425738 == 8)) {
//printf("POINT: 298\n");
    	cf = 0;
    	a137394525 = 34 ;
    	a875425738 = 10;
    	a1825173427 = 5; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 299\n");

    if((a875425738 == 8 || ((input == 5) || (a1207793402 == 12 || (a526521336 == 7 &&  cf==1 ))))) {
//printf("POINT: 300\n");
    	cf = 0;
    	a920377687 = 36 ;
    	a1199458039 = 35 ;
    	a875425738 = 13; 
    	 printf("%d\n", 23);  
    } 
//printf("POINT: 301\n");

    if((((( cf==1  && a1207793402 == 12) || (input == 4)) && a526521336 == 7) && a875425738 == 8)) {
//printf("POINT: 302\n");
    	cf = 0;
    	a541609403 = 33 ;
    	a875425738 = 12;
    	a724210693 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 int calculate_outputm15(int input) {
//printf("POINT: 303\n");

    if(( cf==1  && a1207793402 == 12)) {
//printf("POINT: 304\n");
    	calculate_outputm91(input);
    } 
}
 int calculate_outputm95(int input) {
//printf("POINT: 305\n");

    if((((input == 1) || ((a875425738 == 8 &&  cf==1 ) && a1881910084 == 11)) && a526521336 == 8)) {
//printf("POINT: 306\n");
    	cf = 0;
    	a1924020025 = 7;
    	a875425738 = 7;
    	a1047305930 = 8; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 307\n");

    if((((a875425738 == 8 || ( cf==1  && a526521336 == 8)) || (input == 5)) && a1881910084 == 11)) {
//printf("POINT: 308\n");
    	cf = 0;
    	a526521336 = 5;
    	a281541075 = 6; 
    	 printf("%d\n", 23);  
    } 
}
 int calculate_outputm16(int input) {
//printf("POINT: 309\n");

    if(( cf==1  && a1881910084 == 11)) {
//printf("POINT: 310\n");
    	calculate_outputm95(input);
    } 
}
 int calculate_outputm102(int input) {
//printf("POINT: 311\n");

    if((a875425738 == 8 || ((input == 3) || ((a625968089 == 32 &&  cf==1 ) && a526521336 == 10)))) {
//printf("POINT: 312\n");
    	cf = 0;
    	a875425738 = 11;
    	a1482795247 = 12;
    	a359609581 = 9; 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 313\n");

    if((a625968089 == 32 || ((( cf==1  && a875425738 == 8) && a526521336 == 10) || (input == 2)))) {
//printf("POINT: 314\n");
    	cf = 0;
    	a875425738 = 7;
    	a1924020025 = 4;
    	a1105863021 = 11; 
    	 printf("%d\n", 21);  
    } 
}
 int calculate_outputm18(int input) {
//printf("POINT: 315\n");

    if((a625968089 == 32 &&  cf==1 )) {
//printf("POINT: 316\n");
    	calculate_outputm102(input);
    } 
}
 int calculate_outputm108(int input) {
//printf("POINT: 317\n");

    if((((a526521336 == 12 || ( cf==1  || (input == 5))) && a875425738 == 8) && a661947676 == 8)) {
//printf("POINT: 318\n");
    	cf = 0;
    	a875425738 = 9;
    	a625968089 = 33 ;
    	a295725367 = 8; 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 319\n");

    if((a526521336 == 12 || (a875425738 == 8 || (a661947676 == 8 || ((input == 2) &&  cf==1 ))))) {
//printf("POINT: 320\n");
    	cf = 0;
    	a923085816 = 34 ;
    	a1137288446 = 32 ;
    	a875425738 = 6; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 321\n");

    if((a526521336 == 12 || (a875425738 == 8 || ((a661947676 == 8 &&  cf==1 ) || (input == 3))))) {
//printf("POINT: 322\n");
    	cf = 0;
    	a1482795247 = 11;
    	a875425738 = 11;
    	a922488722 = 13; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 323\n");

    if(((input == 1) || (a875425738 == 8 || (a526521336 == 12 || (a661947676 == 8 &&  cf==1 ))))) {
//printf("POINT: 324\n");
    	cf = 0;
    	 
    	 printf("%d\n", 22);  
    } 
}
 int calculate_outputm20(int input) {
//printf("POINT: 325\n");

    if((a661947676 == 8 &&  cf==1 )) {
//printf("POINT: 326\n");
    	calculate_outputm108(input);
    } 
}
 int calculate_outputm109(int input) {
//printf("POINT: 327\n");

    if((a295725367 == 1 || (a625968089 == 33 || (a875425738 == 9 || ((input == 5) &&  cf==1 ))))) {
//printf("POINT: 328\n");
    	cf = 0;
    	a875425738 = 13;
    	a1199458039 = 34 ;
    	a707129805 = 13; 
    	 printf("%d\n", 21);  
    } 
//printf("POINT: 329\n");

    if((((input == 4) || ((a295725367 == 1 &&  cf==1 ) && a625968089 == 33)) && a875425738 == 9)) {
//printf("POINT: 330\n");
    	cf = 0;
    	a875425738 = 8;
    	a526521336 = 6;
    	a282353883 = 14; 
    	 printf("%d\n", 26);  
    } 
//printf("POINT: 331\n");

    if(((a625968089 == 33 || (a295725367 == 1 || ( cf==1  || (input == 1)))) && a875425738 == 9)) {
//printf("POINT: 332\n");
    	cf = 0;
    	 
    	 printf("%d\n", 22);  
    } 
}
 int calculate_outputm112(int input) {
//printf("POINT: 333\n");

    if((((a295725367 == 7 || (a875425738 == 9 &&  cf==1 )) || (input == 5)) && a625968089 == 33)) {
//printf("POINT: 334\n");
    	cf = 0;
    	a526521336 = 6;
    	a875425738 = 8;
    	a282353883 = 14; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 335\n");

    if(((input == 4) || (((a875425738 == 9 &&  cf==1 ) && a295725367 == 7) && a625968089 == 33))) {
//printf("POINT: 336\n");
    	cf = 0;
    	a137394525 = 34 ;
    	a875425738 = 10;
    	a1825173427 = 5; 
    	 printf("%d\n", 26);  
    } 
//printf("POINT: 337\n");

    if(((((a625968089 == 33 &&  cf==1 ) && a875425738 == 9) && a295725367 == 7) || (input == 2))) {
//printf("POINT: 338\n");
    	cf = 0;
    	a875425738 = 11;
    	a1482795247 = 13;
    	a907731533 = 9; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 339\n");

    if(((a625968089 == 33 || (((input == 3) &&  cf==1 ) && a295725367 == 7)) && a875425738 == 9)) {
//printf("POINT: 340\n");
    	cf = 0;
    	a625968089 = 36 ;
    	a653455892 = 8; 
    	 printf("%d\n", 24);  
    } 
}
 int calculate_outputm113(int input) {
//printf("POINT: 341\n");

    if(((input == 2) || ((a295725367 == 8 || ( cf==1  && a625968089 == 33)) && a875425738 == 9))) {
//printf("POINT: 342\n");
    	cf = 0;
    	 
    	 printf("%d\n", 23);  
    } 
//printf("POINT: 343\n");

    if((((a295725367 == 8 || ( cf==1  && a875425738 == 9)) && a625968089 == 33) || (input == 3))) {
//printf("POINT: 344\n");
    	cf = 0;
    	a844248056 = 33 ;
    	a875425738 = 11;
    	a1482795247 = 9; 
    	 printf("%d\n", 26);  
    } 
}
 int calculate_outputm21(int input) {
//printf("POINT: 345\n");

    if((a295725367 == 1 &&  cf==1 )) {
//printf("POINT: 346\n");
    	calculate_outputm109(input);
    } 
//printf("POINT: 347\n");

    if(( cf==1  && a295725367 == 7)) {
//printf("POINT: 348\n");
    	calculate_outputm112(input);
    } 
//printf("POINT: 349\n");

    if((a295725367 == 8 &&  cf==1 )) {
//printf("POINT: 350\n");
    	calculate_outputm113(input);
    } 
}
 int calculate_outputm118(int input) {
//printf("POINT: 351\n");

    if((((( cf==1  && a875425738 == 9) && a653455892 == 2) && a625968089 == 36) || (input == 2))) {
//printf("POINT: 352\n");
    	cf = 0;
    	a541609403 = 32 ;
    	a875425738 = 12;
    	a684835347 = 9; 
    	 printf("%d\n", 26);  
    } 
//printf("POINT: 353\n");

    if(((input == 5) || (a653455892 == 2 || (a875425738 == 9 || ( cf==1  && a625968089 == 36))))) {
//printf("POINT: 354\n");
    	cf = 0;
    	 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 355\n");

    if(((a625968089 == 36 || (a653455892 == 2 || ((input == 3) &&  cf==1 ))) && a875425738 == 9)) {
//printf("POINT: 356\n");
    	cf = 0;
    	a1566461368 = 35 ;
    	a137394525 = 32 ;
    	a875425738 = 10; 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 357\n");

    if((a653455892 == 2 || (((input == 1) || (a875425738 == 9 &&  cf==1 )) && a625968089 == 36))) {
//printf("POINT: 358\n");
    	cf = 0;
    	a875425738 = 8;
    	a526521336 = 12;
    	a661947676 = 8; 
    	 printf("%d\n", 24);  
    } 
}
 int calculate_outputm25(int input) {
//printf("POINT: 359\n");

    if(( cf==1  && a653455892 == 2)) {
//printf("POINT: 360\n");
    	calculate_outputm118(input);
    } 
}
 int calculate_outputm120(int input) {
//printf("POINT: 361\n");

    if(((input == 1) || ((a875425738 == 10 || (a137394525 == 33 &&  cf==1 )) && a426375774 == 32))) {
//printf("POINT: 362\n");
    	cf = 0;
    	a1137288446 = 32 ;
    	a923085816 = 32 ;
    	a875425738 = 6; 
    	 printf("%d\n", 25);  
    } 
//printf("POINT: 363\n");

    if((a875425738 == 10 || (a137394525 == 33 || (( cf==1  && a426375774 == 32) || (input == 2))))) {
//printf("POINT: 364\n");
    	cf = 0;
    	a875425738 = 7;
    	a1924020025 = 5;
    	a527567549 = 8; 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 365\n");

    if(((a426375774 == 32 || (a875425738 == 10 || ((input == 5) &&  cf==1 ))) && a137394525 == 33)) {
//printf("POINT: 366\n");
    	cf = 0;
    	a1199458039 = 33 ;
    	a2038894560 = 35 ;
    	a875425738 = 13; 
    	 printf("%d\n", 20);  
    } 
}
 int calculate_outputm26(int input) {
//printf("POINT: 367\n");

    if((a426375774 == 32 &&  cf==1 )) {
//printf("POINT: 368\n");
    	calculate_outputm120(input);
    } 
}
 int calculate_outputm121(int input) {
//printf("POINT: 369\n");

    if((a1566461368 == 33 || (((a137394525 == 32 &&  cf==1 ) && a875425738 == 10) || (input == 1)))) {
//printf("POINT: 370\n");
    	cf = 0;
    	 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 371\n");

    if((a875425738 == 10 || ((input == 3) || (a1566461368 == 33 || ( cf==1  && a137394525 == 32))))) {
//printf("POINT: 372\n");
    	cf = 0;
    	a137394525 = 34 ;
    	a1825173427 = 4; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 373\n");

    if((a875425738 == 10 || ((a1566461368 == 33 || ( cf==1  && a137394525 == 32)) || (input == 2)))) {
//printf("POINT: 374\n");
    	cf = 0;
    	a875425738 = 6;
    	a1137288446 = 35 ;
    	a87830658 = 12; 
    	 printf("%d\n", 20);  
    } 
}
 int calculate_outputm27(int input) {
//printf("POINT: 375\n");

    if(( cf==1  && a1566461368 == 33)) {
//printf("POINT: 376\n");
    	calculate_outputm121(input);
    } 
}
 int calculate_outputm124(int input) {
//printf("POINT: 377\n");

    if(((a1825173427 == 5 || (a137394525 == 34 || ( cf==1  && a875425738 == 10))) || (input == 1))) {
//printf("POINT: 378\n");
    	cf = 0;
    	a541609403 = 33 ;
    	a875425738 = 12;
    	a724210693 = 2; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 379\n");

    if((a1825173427 == 5 || ((input == 2) || (a137394525 == 34 || (a875425738 == 10 &&  cf==1 ))))) {
//printf("POINT: 380\n");
    	cf = 0;
    	a1924020025 = 4;
    	a875425738 = 7;
    	a1105863021 = 10; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 381\n");

    if((a875425738 == 10 || ((( cf==1  && a137394525 == 34) || (input == 4)) && a1825173427 == 5))) {
//printf("POINT: 382\n");
    	cf = 0;
    	a1482795247 = 6;
    	a875425738 = 11;
    	a2136827589 = 7; 
    	 printf("%d\n", 21);  
    } 
//printf("POINT: 383\n");

    if(((a875425738 == 10 || (a1825173427 == 5 || (a137394525 == 34 &&  cf==1 ))) || (input == 5))) {
//printf("POINT: 384\n");
    	cf = 0;
    	a923085816 = 32 ;
    	a1137288446 = 32 ;
    	a875425738 = 6; 
    	 printf("%d\n", 21);  
    } 
}
 int calculate_outputm28(int input) {
//printf("POINT: 385\n");

    if(( cf==1  && a1825173427 == 5)) {
//printf("POINT: 386\n");
    	calculate_outputm124(input);
    } 
}
 int calculate_outputm128(int input) {
//printf("POINT: 387\n");

    if((a137394525 == 35 || ((input == 3) || (a282353883 == 11 || ( cf==1  && a875425738 == 10))))) {
//printf("POINT: 388\n");
    	cf = 0;
    	a71493647 = 36 ;
    	a541609403 = 36 ;
    	a875425738 = 12; 
    	 printf("%d\n", 25);  
    } 
//printf("POINT: 389\n");

    if((a282353883 == 11 || ((a875425738 == 10 || ((input == 2) &&  cf==1 )) && a137394525 == 35))) {
//printf("POINT: 390\n");
    	cf = 0;
    	a526521336 = 12;
    	a875425738 = 8;
    	a661947676 = 8; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 391\n");

    if(((a282353883 == 11 || (( cf==1  && a137394525 == 35) || (input == 5))) && a875425738 == 10)) {
//printf("POINT: 392\n");
    	cf = 0;
    	a541609403 = 35 ;
    	a875425738 = 12;
    	a219021671 = 6; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 393\n");

    if(((a875425738 == 10 || (a282353883 == 11 || ( cf==1  && a137394525 == 35))) || (input == 1))) {
//printf("POINT: 394\n");
    	cf = 0;
    	a875425738 = 7;
    	a1924020025 = 9;
    	a295725367 = 5; 
    	 printf("%d\n", 23);  
    } 
}
 int calculate_outputm29(int input) {
//printf("POINT: 395\n");

    if((a282353883 == 11 &&  cf==1 )) {
//printf("POINT: 396\n");
    	calculate_outputm128(input);
    } 
}
 int calculate_outputm131(int input) {
//printf("POINT: 397\n");

    if((a1482795247 == 6 || (a875425738 == 11 || (( cf==1  || (input == 1)) && a2136827589 == 7)))) {
//printf("POINT: 398\n");
    	cf = 0;
    	a137394525 = 34 ;
    	a875425738 = 10;
    	a1825173427 = 5; 
    	 printf("%d\n", 20);  
    } 
//printf("POINT: 399\n");

    if(((input == 5) || (((a875425738 == 11 &&  cf==1 ) && a2136827589 == 7) && a1482795247 == 6))) {
//printf("POINT: 400\n");
    	cf = 0;
    	a875425738 = 8;
    	a526521336 = 6;
    	a282353883 = 13; 
    	 printf("%d\n", 23);  
    } 
//printf("POINT: 401\n");

    if(((input == 2) || ((a1482795247 == 6 || ( cf==1  && a875425738 == 11)) && a2136827589 == 7))) {
//printf("POINT: 402\n");
    	cf = 0;
    	a625968089 = 33 ;
    	a875425738 = 9;
    	a295725367 = 7; 
    	 printf("%d\n", 23);  
    } 
//printf("POINT: 403\n");

    if((((a875425738 == 11 || ((input == 4) &&  cf==1 )) && a1482795247 == 6) && a2136827589 == 7)) {
//printf("POINT: 404\n");
    	cf = 0;
    	a137394525 = 34 ;
    	a875425738 = 10;
    	a1825173427 = 5; 
    	 printf("%d\n", 24);  
    } 
}
 int calculate_outputm31(int input) {
//printf("POINT: 405\n");

    if(( cf==1  && a2136827589 == 7)) {
//printf("POINT: 406\n");
    	calculate_outputm131(input);
    } 
}
 int calculate_outputm149(int input) {
//printf("POINT: 407\n");

    if((a875425738 == 11 || (a1482795247 == 13 || (( cf==1  && a907731533 == 8) || (input == 3))))) {
//printf("POINT: 408\n");
    	cf = 0;
    	a1796953699 = 32 ;
    	a875425738 = 7;
    	a1924020025 = 6; 
    	 printf("%d\n", 26);  
    } 
//printf("POINT: 409\n");

    if(((a875425738 == 11 || (((input == 1) &&  cf==1 ) && a907731533 == 8)) && a1482795247 == 13)) {
//printf("POINT: 410\n");
    	cf = 0;
    	a923085816 = 32 ;
    	a1137288446 = 32 ;
    	a875425738 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 int calculate_outputm150(int input) {
//printf("POINT: 411\n");

    if((a907731533 == 9 || (a875425738 == 11 || ((a1482795247 == 13 &&  cf==1 ) || (input == 4))))) {
//printf("POINT: 412\n");
    	cf = 0;
    	a923085816 = 32 ;
    	a1137288446 = 32 ;
    	a875425738 = 6; 
    	 printf("%d\n", 26);  
    } 
//printf("POINT: 413\n");

    if(((input == 5) || (a1482795247 == 13 || (( cf==1  && a875425738 == 11) && a907731533 == 9)))) {
//printf("POINT: 414\n");
    	cf = 0;
    	a1137288446 = 35 ;
    	a875425738 = 6;
    	a87830658 = 11; 
    	 printf("%d\n", 21);  
    } 
//printf("POINT: 415\n");

    if((a875425738 == 11 || ((a907731533 == 9 || ((input == 1) &&  cf==1 )) && a1482795247 == 13))) {
//printf("POINT: 416\n");
    	cf = 0;
    	a1796953699 = 36 ;
    	a875425738 = 7;
    	a1924020025 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 int calculate_outputm38(int input) {
//printf("POINT: 417\n");

    if(( cf==1  && a907731533 == 8)) {
//printf("POINT: 418\n");
    	calculate_outputm149(input);
    } 
//printf("POINT: 419\n");

    if((a907731533 == 9 &&  cf==1 )) {
//printf("POINT: 420\n");
    	calculate_outputm150(input);
    } 
}
 int calculate_outputm154(int input) {
//printf("POINT: 421\n");

    if(((a541609403 == 33 || (a724210693 == 2 || ( cf==1  && a875425738 == 12))) || (input == 5))) {
//printf("POINT: 422\n");
    	cf = 0;
    	a1137288446 = 35 ;
    	a875425738 = 6;
    	a87830658 = 14; 
    	 printf("%d\n", 26);  
    } 
//printf("POINT: 423\n");

    if((a724210693 == 2 || (a875425738 == 12 || (( cf==1  && a541609403 == 33) || (input == 4))))) {
//printf("POINT: 424\n");
    	cf = 0;
    	a875425738 = 10;
    	a137394525 = 34 ;
    	a1825173427 = 5; 
    	 printf("%d\n", 26);  
    } 
}
 int calculate_outputm156(int input) {
//printf("POINT: 425\n");

    if((a875425738 == 12 || ((a724210693 == 6 || ((input == 2) &&  cf==1 )) && a541609403 == 33))) {
//printf("POINT: 426\n");
    	cf = 0;
    	a625968089 = 33 ;
    	a875425738 = 9;
    	a295725367 = 1; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 427\n");

    if((a724210693 == 6 || ((a541609403 == 33 || (a875425738 == 12 &&  cf==1 )) || (input == 1)))) {
//printf("POINT: 428\n");
    	cf = 0;
    	a526521336 = 7;
    	a875425738 = 8;
    	a1207793402 = 12; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 429\n");

    if(((a541609403 == 33 || (( cf==1  && a724210693 == 6) && a875425738 == 12)) || (input == 4))) {
//printf("POINT: 430\n");
    	cf = 0;
    	a1199458039 = 35 ;
    	a920377687 = 35 ;
    	a875425738 = 13; 
    	 printf("%d\n", 23);  
    } 
//printf("POINT: 431\n");

    if((a724210693 == 6 || (((input == 3) || (a875425738 == 12 &&  cf==1 )) && a541609403 == 33))) {
//printf("POINT: 432\n");
    	cf = 0;
    	a1482795247 = 8;
    	a875425738 = 11;
    	a832301293 = 9; 
    	 printf("%d\n", 24);  
    } 
}
 int calculate_outputm157(int input) {
//printf("POINT: 433\n");

    if((a724210693 == 7 || (((a541609403 == 33 &&  cf==1 ) && a875425738 == 12) || (input == 2)))) {
//printf("POINT: 434\n");
    	cf = 0;
    	a875425738 = 9;
    	a625968089 = 33 ;
    	a295725367 = 1; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 435\n");

    if((((a724210693 == 7 || (a875425738 == 12 &&  cf==1 )) && a541609403 == 33) || (input == 4))) {
//printf("POINT: 436\n");
    	cf = 0;
    	a137394525 = 35 ;
    	a875425738 = 10;
    	a282353883 = 8; 
    	 printf("%d\n", 20);  
    } 
}
 int calculate_outputm39(int input) {
//printf("POINT: 437\n");

    if((a724210693 == 2 &&  cf==1 )) {
//printf("POINT: 438\n");
    	calculate_outputm154(input);
    } 
//printf("POINT: 439\n");

    if((a724210693 == 6 &&  cf==1 )) {
//printf("POINT: 440\n");
    	calculate_outputm156(input);
    } 
//printf("POINT: 441\n");

    if(( cf==1  && a724210693 == 7)) {
//printf("POINT: 442\n");
    	calculate_outputm157(input);
    } 
}
 int calculate_outputm159(int input) {
//printf("POINT: 443\n");

    if((a684835347 == 9 || (a875425738 == 12 || ((a541609403 == 32 &&  cf==1 ) || (input == 4))))) {
//printf("POINT: 444\n");
    	cf = 0;
    	a875425738 = 7;
    	a1796953699 = 34 ;
    	a1924020025 = 6; 
    	 printf("%d\n", 21);  
    } 
//printf("POINT: 445\n");

    if(((input == 1) || (a875425738 == 12 || (( cf==1  && a684835347 == 9) && a541609403 == 32)))) {
//printf("POINT: 446\n");
    	cf = 0;
    	a541609403 = 35 ;
    	a219021671 = 6; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 447\n");

    if((((a684835347 == 9 || ( cf==1  && a875425738 == 12)) && a541609403 == 32) || (input == 5))) {
//printf("POINT: 448\n");
    	cf = 0;
    	a875425738 = 8;
    	a526521336 = 12;
    	a661947676 = 8; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 449\n");

    if((a684835347 == 9 || (a541609403 == 32 || (((input == 2) &&  cf==1 ) && a875425738 == 12)))) {
//printf("POINT: 450\n");
    	cf = 0;
    	a1924020025 = 4;
    	a875425738 = 7;
    	a1105863021 = 11; 
    	 printf("%d\n", 21);  
    } 
}
 int calculate_outputm40(int input) {
//printf("POINT: 451\n");

    if(( cf==1  && a684835347 == 9)) {
//printf("POINT: 452\n");
    	calculate_outputm159(input);
    } 
}
 int calculate_outputm162(int input) {
//printf("POINT: 453\n");

    if((a875425738 == 12 || (((a541609403 == 35 &&  cf==1 ) || (input == 1)) && a219021671 == 6))) {
//printf("POINT: 454\n");
    	cf = 0;
    	 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 455\n");

    if((((( cf==1  && a875425738 == 12) && a541609403 == 35) || (input == 4)) && a219021671 == 6)) {
//printf("POINT: 456\n");
    	cf = 0;
    	a1482795247 = 12;
    	a875425738 = 11;
    	a359609581 = 10; 
    	 printf("%d\n", 26);  
    } 
}
 int calculate_outputm42(int input) {
//printf("POINT: 457\n");

    if(( cf==1  && a219021671 == 6)) {
//printf("POINT: 458\n");
    	calculate_outputm162(input);
    } 
}
 int calculate_outputm177(int input) {
//printf("POINT: 459\n");

    if(((input == 5) || (a1199458039 == 35 || (( cf==1  && a875425738 == 13) && a920377687 == 35)))) {
//printf("POINT: 460\n");
    	cf = 0;
    	a137394525 = 34 ;
    	a875425738 = 10;
    	a1825173427 = 5; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 461\n");

    if((a1199458039 == 35 || ((a875425738 == 13 || ( cf==1  || (input == 1))) && a920377687 == 35))) {
//printf("POINT: 462\n");
    	cf = 0;
    	a1924020025 = 5;
    	a875425738 = 7;
    	a527567549 = 8; 
    	 printf("%d\n", 25);  
    } 
//printf("POINT: 463\n");

    if((a1199458039 == 35 || (a920377687 == 35 || (((input == 4) &&  cf==1 ) && a875425738 == 13)))) {
//printf("POINT: 464\n");
    	cf = 0;
    	a875425738 = 8;
    	a526521336 = 6;
    	a282353883 = 15; 
    	 printf("%d\n", 21);  
    } 
}
 int calculate_outputm47(int input) {
//printf("POINT: 465\n");

    if((a920377687 == 35 &&  cf==1 )) {
//printf("POINT: 466\n");
    	calculate_outputm177(input);
    } 
}
 int calculate_outputm181(int input) {
//printf("POINT: 467\n");

    if((a1565774989 == 34 || (((a1199458039 == 36 &&  cf==1 ) || (input == 2)) && a875425738 == 13))) {
//printf("POINT: 468\n");
    	cf = 0;
    	a526521336 = 12;
    	a875425738 = 8;
    	a661947676 = 8; 
    	 printf("%d\n", 22);  
    } 
//printf("POINT: 469\n");

    if((a1199458039 == 36 || (a1565774989 == 34 || (a875425738 == 13 || ((input == 1) &&  cf==1 ))))) {
//printf("POINT: 470\n");
    	cf = 0;
    	a541609403 = 35 ;
    	a875425738 = 12;
    	a219021671 = 6; 
    	 printf("%d\n", 26);  
    } 
//printf("POINT: 471\n");

    if((a1199458039 == 36 || ((a875425738 == 13 || ((input == 3) &&  cf==1 )) && a1565774989 == 34))) {
//printf("POINT: 472\n");
    	cf = 0;
    	a875425738 = 11;
    	a1482795247 = 10;
    	a2132896467 = 4; 
    	 printf("%d\n", 24);  
    } 
//printf("POINT: 473\n");

    if((a1565774989 == 34 || (((a1199458039 == 36 &&  cf==1 ) || (input == 5)) && a875425738 == 13))) {
//printf("POINT: 474\n");
    	cf = 0;
    	a875425738 = 9;
    	a625968089 = 33 ;
    	a295725367 = 8; 
    	 printf("%d\n", 23);  
    } 
}
 int calculate_outputm48(int input) {
//printf("POINT: 475\n");

    if((a1565774989 == 34 &&  cf==1 )) {
//printf("POINT: 476\n");
    	calculate_outputm181(input);
    } 
}

 int calculate_output(int input) {
        cf = 1;

//printf("POINT: 477\n");

    if((a875425738 == 6 &&  cf==1 )) {
//printf("POINT: 478\n");
//printf("POINT: 479\n");

    	if(( cf==1  && a1137288446 == 32)) {
//printf("POINT: 480\n");
    		calculate_outputm2(input);
    	} 
//printf("POINT: 481\n");

    	if(( cf==1  && a1137288446 == 34)) {
//printf("POINT: 482\n");
    		calculate_outputm3(input);
    	} 
//printf("POINT: 483\n");

    	if(( cf==1  && a1137288446 == 35)) {
//printf("POINT: 484\n");
    		calculate_outputm4(input);
    	} 
    } 
//printf("POINT: 485\n");

    if((a875425738 == 7 &&  cf==1 )) {
//printf("POINT: 486\n");
//printf("POINT: 487\n");

    	if(( cf==1  && a1924020025 == 4)) {
//printf("POINT: 488\n");
    		calculate_outputm5(input);
    	} 
//printf("POINT: 489\n");

    	if((a1924020025 == 5 &&  cf==1 )) {
//printf("POINT: 490\n");
    		calculate_outputm6(input);
    	} 
//printf("POINT: 491\n");

    	if(( cf==1  && a1924020025 == 7)) {
//printf("POINT: 492\n");
    		calculate_outputm8(input);
    	} 
//printf("POINT: 493\n");

    	if((a1924020025 == 9 &&  cf==1 )) {
//printf("POINT: 494\n");
    		calculate_outputm10(input);
    	} 
//printf("POINT: 495\n");

    	if((a1924020025 == 10 &&  cf==1 )) {
//printf("POINT: 496\n");
    		calculate_outputm11(input);
    	} 
    } 
//printf("POINT: 497\n");

    if(( cf==1  && a875425738 == 8)) {
//printf("POINT: 498\n");
//printf("POINT: 499\n");

    	if((a526521336 == 5 &&  cf==1 )) {
//printf("POINT: 500\n");
    		calculate_outputm13(input);
    	} 
//printf("POINT: 501\n");

    	if(( cf==1  && a526521336 == 6)) {
//printf("POINT: 502\n");
    		calculate_outputm14(input);
    	} 
//printf("POINT: 503\n");

    	if(( cf==1  && a526521336 == 7)) {
//printf("POINT: 504\n");
    		calculate_outputm15(input);
    	} 
//printf("POINT: 505\n");

    	if(( cf==1  && a526521336 == 8)) {
//printf("POINT: 506\n");
    		calculate_outputm16(input);
    	} 
//printf("POINT: 507\n");

    	if(( cf==1  && a526521336 == 10)) {
//printf("POINT: 508\n");
    		calculate_outputm18(input);
    	} 
//printf("POINT: 509\n");

    	if(( cf==1  && a526521336 == 12)) {
//printf("POINT: 510\n");
    		calculate_outputm20(input);
    	} 
    } 
//printf("POINT: 511\n");

    if((a875425738 == 9 &&  cf==1 )) {
//printf("POINT: 512\n");
//printf("POINT: 513\n");

    	if(( cf==1  && a625968089 == 33)) {
//printf("POINT: 514\n");
    		calculate_outputm21(input);
    	} 
//printf("POINT: 515\n");

    	if((a625968089 == 36 &&  cf==1 )) {
//printf("POINT: 516\n");
    		calculate_outputm25(input);
    	} 
    } 
//printf("POINT: 517\n");

    if((a875425738 == 10 &&  cf==1 )) {
//printf("POINT: 518\n");
//printf("POINT: 519\n");

    	if((a137394525 == 33 &&  cf==1 )) {
//printf("POINT: 520\n");
    		calculate_outputm26(input);
    	} 
//printf("POINT: 521\n");

    	if(( cf==1  && a137394525 == 32)) {
//printf("POINT: 522\n");
    		calculate_outputm27(input);
    	} 
//printf("POINT: 523\n");

    	if(( cf==1  && a137394525 == 34)) {
//printf("POINT: 524\n");
    		calculate_outputm28(input);
    	} 
//printf("POINT: 525\n");

    	if((a137394525 == 35 &&  cf==1 )) {
//printf("POINT: 526\n");
    		calculate_outputm29(input);
    	} 
    } 
//printf("POINT: 527\n");

    if(( cf==1  && a875425738 == 11)) {
//printf("POINT: 528\n");
//printf("POINT: 529\n");

    	if(( cf==1  && a1482795247 == 6)) {
//printf("POINT: 530\n");
    		calculate_outputm31(input);
    	} 
//printf("POINT: 531\n");

    	if((a1482795247 == 13 &&  cf==1 )) {
//printf("POINT: 532\n");
    		calculate_outputm38(input);
    	} 
    } 
//printf("POINT: 533\n");

    if((a875425738 == 12 &&  cf==1 )) {
//printf("POINT: 534\n");
//printf("POINT: 535\n");

    	if(( cf==1  && a541609403 == 33)) {
//printf("POINT: 536\n");
    		calculate_outputm39(input);
    	} 
//printf("POINT: 537\n");

    	if(( cf==1  && a541609403 == 32)) {
//printf("POINT: 538\n");
    		calculate_outputm40(input);
    	} 
//printf("POINT: 539\n");

    	if(( cf==1  && a541609403 == 35)) {
//printf("POINT: 540\n");
    		calculate_outputm42(input);
    	} 
    } 
//printf("POINT: 541\n");

    if((a875425738 == 13 &&  cf==1 )) {
//printf("POINT: 542\n");
//printf("POINT: 543\n");

    	if((a1199458039 == 35 &&  cf==1 )) {
//printf("POINT: 544\n");
    		calculate_outputm47(input);
    	} 
//printf("POINT: 545\n");

    	if((a1199458039 == 36 &&  cf==1 )) {
//printf("POINT: 546\n");
    		calculate_outputm48(input);
    	} 
    } 
    errorCheck();

//printf("POINT: 547\n");

    if( cf==1 ) {
//printf("POINT: 548\n");

	}
	printf("NEW: %d\n", input);	
	printf("NEW: %d\n",a661947676);
	printf("NEW: %d\n",cf);
	printf("NEW: %d\n",a844248056);
	printf("NEW: %d\n",a1554431138);
	printf("NEW: %d\n",a527567549);
	printf("NEW: %d\n",a1881910084);
	printf("NEW: %d\n",a60637518);
	printf("NEW: %d\n",a2136827589);
	printf("NEW: %d\n",a281541075);
	printf("NEW: %d\n",a295725367);
	printf("NEW: %d\n",a724210693);
	printf("NEW: %d\n",a1207793402);
	printf("NEW: %d\n",a1796953699);
	printf("NEW: %d\n",a541609403);
	printf("NEW: %d\n",a1366985377);
	printf("NEW: %d\n",a219021671);
	printf("NEW: %d\n",a153564040);
	printf("NEW: %d\n",a1105863021);
	printf("NEW: %d\n",a1631914830);
	printf("NEW: %d\n",a707129805);
	printf("NEW: %d\n",a2019397104);
	printf("NEW: %d\n",a898461465);
	printf("NEW: %d\n",a653455892);
	printf("NEW: %d\n",a922488722);
	printf("NEW: %d\n",a923085816);
	printf("NEW: %d\n",a907731533);
	printf("NEW: %d\n",a1565774989);
	printf("NEW: %d\n",a832301293);
	printf("NEW: %d\n",a1650740897);
	printf("NEW: %d\n",a334820112);
	printf("NEW: %d\n",a1419680518);
	printf("NEW: %d\n",a875425738);
	printf("NEW: %d\n",a359609581);
	printf("NEW: %d\n",a426375774);
	printf("NEW: %d\n",a1913002755);
	printf("NEW: %d\n",a526521336);
	printf("NEW: %d\n",a1199458039);
	printf("NEW: %d\n",a1924020025);
	printf("NEW: %d\n",a1137288446);
	printf("NEW: %d\n",a1825173427);
	printf("NEW: %d\n",a1566461368);
	printf("NEW: %d\n",a1047305930);
	printf("NEW: %d\n",a282353883);
	printf("NEW: %d\n",a2132896467);
	printf("NEW: %d\n",a684835347);
	printf("NEW: %d\n",a2038894560);
	printf("NEW: %d\n",a1482795247);
	printf("NEW: %d\n",a1402042250);
	printf("NEW: %d\n",a137394525);
	printf("NEW: %d\n",a87830658);
	printf("NEW: %d\n",a920377687);
	printf("NEW: %d\n",a71493647);
	printf("NEW: %d\n",a625968089);
	
 }

int input,output;

int main()
{
kappa = 0;
    // main i/o-loop
    int symb;
//printf("POINT: 549\n");
int FLAG;
   for (FLAG=0;FLAG < BOUND;FLAG++) {
//printf("POINT: 550\n");
   
        // read input
scanf("%d",&symb);
               
        // operate eca engine
//printf("POINT: 551\n");

        calculate_output(symb);
    }
 return 0;

}

/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Lab1/lab1.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2047U, 0U};
static int ng4[] = {1, 0};



static void Cont_28_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 11);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 11);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 3192);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 3096);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_30_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t15[8];
    char t42[8];
    char t43[8];
    char t44[8];
    char t55[8];
    char t87[8];
    char t88[8];
    char t109[8];
    char t114[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t110 = *((unsigned int *)t4);
    t111 = (~(t110));
    t112 = *((unsigned int *)t38);
    t113 = (t111 || t112);
    if (t113 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t114, 8);

LAB20:    t124 = (t0 + 3256);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    memset(t128, 0, 8);
    t129 = 2047U;
    t130 = t129;
    t131 = (t3 + 4);
    t132 = *((unsigned int *)t3);
    t129 = (t129 & t132);
    t133 = *((unsigned int *)t131);
    t130 = (t130 & t133);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t135 | t129);
    t136 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t136 | t130);
    xsi_driver_vfirst_trans(t124, 0, 10);
    t137 = (t0 + 3112);
    *((int *)t137) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t45 = (t0 + 1048U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t47 = (t46 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 0);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 2047U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 2047U);
    t54 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t56 = (t44 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB24;

LAB21:    if (t67 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t55) = 1;

LAB24:    memset(t43, 0, 8);
    t71 = (t55 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t55);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t71) != 0)
        goto LAB27;

LAB28:    t78 = (t43 + 4);
    t79 = *((unsigned int *)t43);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB29;

LAB30:    t83 = *((unsigned int *)t43);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t78) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t43) > 0)
        goto LAB35;

LAB36:    memcpy(t42, t109, 8);

LAB37:    goto LAB13;

LAB14:    t115 = (t0 + 1048U);
    t116 = *((char **)t115);
    memset(t114, 0, 8);
    t115 = (t114 + 4);
    t117 = (t116 + 4);
    t118 = *((unsigned int *)t116);
    t119 = (t118 >> 0);
    *((unsigned int *)t114) = t119;
    t120 = *((unsigned int *)t117);
    t121 = (t120 >> 0);
    *((unsigned int *)t115) = t121;
    t122 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t122 & 2047U);
    t123 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t123 & 2047U);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t42, 32, t114, 32);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

LAB23:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t43) = 1;
    goto LAB28;

LAB27:    t77 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB28;

LAB29:    t82 = ((char*)((ng3)));
    goto LAB30;

LAB31:    t89 = (t0 + 1048U);
    t90 = *((char **)t89);
    memset(t88, 0, 8);
    t89 = (t88 + 4);
    t91 = (t90 + 4);
    t92 = *((unsigned int *)t90);
    t93 = (t92 >> 0);
    *((unsigned int *)t88) = t93;
    t94 = *((unsigned int *)t91);
    t95 = (t94 >> 0);
    *((unsigned int *)t89) = t95;
    t96 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t96 & 2047U);
    t97 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t97 & 2047U);
    memset(t87, 0, 8);
    t98 = (t87 + 4);
    t99 = (t88 + 4);
    t100 = *((unsigned int *)t88);
    t101 = (~(t100));
    *((unsigned int *)t87) = t101;
    *((unsigned int *)t98) = 0;
    if (*((unsigned int *)t99) != 0)
        goto LAB39;

LAB38:    t106 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t106 & 4294967295U);
    t107 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t107 & 4294967295U);
    t108 = ((char*)((ng4)));
    memset(t109, 0, 8);
    xsi_vlog_unsigned_add(t109, 32, t87, 32, t108, 32);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t42, 32, t82, 32, t109, 32);
    goto LAB37;

LAB35:    memcpy(t42, t82, 8);
    goto LAB37;

LAB39:    t102 = *((unsigned int *)t87);
    t103 = *((unsigned int *)t99);
    *((unsigned int *)t87) = (t102 | t103);
    t104 = *((unsigned int *)t98);
    t105 = *((unsigned int *)t99);
    *((unsigned int *)t98) = (t104 | t105);
    goto LAB38;

}


extern void work_m_00000000002342377882_2397652457_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Cont_30_1};
	xsi_register_didat("work_m_00000000002342377882_2397652457", "isim/tbS_isim_beh.exe.sim/work/m_00000000002342377882_2397652457.didat");
	xsi_register_executes(pe);
}

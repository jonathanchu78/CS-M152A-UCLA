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
static const char *ng0 = "C:/Users/152/Downloads/Lab2/tb.v";
static const char *ng1 = "%d ... Running instruction %08b";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static const char *ng8 = "fibonacci.code";
static const char *ng9 = "%d ... instruction %08b executed";
static const char *ng10 = "%d ... led output changed to %08b";



static int sp_tskRunInst(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    *((int *)t5) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t6 = (t5 + 4);
    *((int *)t6) = 0;
    t7 = (t1 + 4888);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 3, t10, (char)118, t5, 32, (char)118, t9, 8);
    xsi_set_current_line(87, ng0);
    t4 = (t1 + 4888);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(88, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1500000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(88, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 4248);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 3000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(89, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 4248);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB4;

}

static int sp_tskRunPUSH(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t7 = (t1 + 5208);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 15U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 15U);
    t19 = (t1 + 5048);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t30 = ((char*)((ng4)));
    xsi_vlogtype_concat(t5, 8, 8, 3U, t30, 2, t18, 2, t6, 4);
    t31 = (t1 + 5368);
    xsi_vlogvar_assign_value(t31, t5, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 5368);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t30 = (t1 + 4888);
    xsi_vlogvar_assign_value(t30, t8, 0, 0, 8);

LAB8:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = ((int  (*)(char *, char *))t38)(t1, t32);
    if (t39 == -1)
        goto LAB9;

LAB10:    if (t39 != 0)
        goto LAB11;

LAB6:    t32 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t32);

LAB7:    t40 = (t2 + 64U);
    t41 = *((char **)t40);
    t40 = (t1 + 848);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_delete_subprogram_invocation(t40, t41, t1, t43, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t31 = (t2 + 48U);
    *((char **)t31) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunSEND(char *t1, char *t2)
{
    char t5[8];
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t6 = ((char*)((ng4)));
    t8 = (t1 + 5528);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 3U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 3U);
    t19 = ((char*)((ng5)));
    xsi_vlogtype_concat(t5, 8, 8, 3U, t19, 2, t7, 2, t6, 4);
    t20 = (t1 + 5688);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 8);
    xsi_set_current_line(108, ng0);
    t4 = (t1 + 5688);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB6);
    t19 = (t2 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 848);
    t22 = xsi_create_subprogram_invocation(t20, 0, t1, t21, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t23 = (t1 + 4888);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 8);

LAB8:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t1, t25);
    if (t32 == -1)
        goto LAB9;

LAB10:    if (t32 != 0)
        goto LAB11;

LAB6:    t25 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t25);

LAB7:    t33 = (t2 + 64U);
    t34 = *((char **)t33);
    t33 = (t1 + 848);
    t35 = (t2 + 56U);
    t36 = *((char **)t35);
    xsi_delete_subprogram_invocation(t33, t34, t1, t36, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t24 = (t2 + 48U);
    *((char **)t24) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunADD(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    char t30[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(117, ng0);

LAB5:    xsi_set_current_line(118, ng0);
    t7 = (t1 + 6168);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    t19 = (t1 + 6008);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t31 = (t1 + 5848);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 3U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    t42 = ((char*)((ng6)));
    xsi_vlogtype_concat(t5, 8, 8, 4U, t42, 2, t30, 2, t18, 2, t6, 2);
    t43 = (t1 + 6328);
    xsi_vlogvar_assign_value(t43, t5, 0, 0, 8);
    xsi_set_current_line(119, ng0);
    t4 = (t1 + 6328);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t31 = (t1 + 4888);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);

LAB8:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t42 = (t35 + 272U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t46 = ((int  (*)(char *, char *))t45)(t1, t33);
    if (t46 == -1)
        goto LAB9;

LAB10:    if (t46 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB7:    t47 = (t2 + 64U);
    t48 = *((char **)t47);
    t47 = (t1 + 848);
    t49 = (t2 + 56U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t47, t48, t1, t50, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunMULT(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    char t30[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(128, ng0);

LAB5:    xsi_set_current_line(129, ng0);
    t7 = (t1 + 6808);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    t19 = (t1 + 6648);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t31 = (t1 + 6488);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 3U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    t42 = ((char*)((ng7)));
    xsi_vlogtype_concat(t5, 8, 8, 4U, t42, 2, t30, 2, t18, 2, t6, 2);
    t43 = (t1 + 6968);
    xsi_vlogvar_assign_value(t43, t5, 0, 0, 8);
    xsi_set_current_line(130, ng0);
    t4 = (t1 + 6968);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t31 = (t1 + 4888);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);

LAB8:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t42 = (t35 + 272U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t46 = ((int  (*)(char *, char *))t45)(t1, t33);
    if (t46 == -1)
        goto LAB9;

LAB10:    if (t46 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB7:    t47 = (t2 + 64U);
    t48 = *((char **)t47);
    t47 = (t1 + 848);
    t49 = (t2 + 56U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t47, t48, t1, t50, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static void Initial_21_0(char *t0)
{
    char t8[8];
    char t16[8];
    char t29[8];
    char t39[8];
    char t53[8];
    char t63[8];
    char t75[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;

LAB0:    t1 = (t0 + 7888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);

LAB4:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 7696);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 7696);
    xsi_process_wait(t2, 1500000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4728);
    xsi_vlogfile_readmemb(ng8, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 4568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 4728);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 4728);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t7, t11, t14, 2, 1, t15, 32, 1);
    memset(t16, 0, 8);
    t17 = (t4 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB9;

LAB8:    t18 = (t8 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB9;

LAB12:    if (*((unsigned int *)t4) > *((unsigned int *)t8))
        goto LAB11;

LAB10:    *((unsigned int *)t16) = 1;

LAB11:    t20 = (t16 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 7696);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB9:    t19 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB13:    xsi_set_current_line(36, ng0);

LAB15:    xsi_set_current_line(37, ng0);
    t26 = (t0 + 4728);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t0 + 4728);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 4728);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 4568);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t29, 8, t28, t32, t35, 2, 1, t38, 32, 1);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t41 = (t29 + 4);
    t42 = *((unsigned int *)t29);
    t43 = (t42 >> 6);
    *((unsigned int *)t39) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 6);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 3U);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 & 3U);

LAB16:    t48 = ((char*)((ng4)));
    t49 = xsi_vlog_unsigned_case_compare(t39, 2, t48, 2);
    if (t49 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t49 = xsi_vlog_unsigned_case_compare(t39, 2, t2, 2);
    if (t49 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t49 = xsi_vlog_unsigned_case_compare(t39, 2, t2, 2);
    if (t49 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t49 = xsi_vlog_unsigned_case_compare(t39, 2, t2, 2);
    if (t49 == 1)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 4568);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB7;

LAB17:    xsi_set_current_line(38, ng0);
    t50 = (t0 + 4728);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t54 = (t0 + 4728);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 4728);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t60 = (t0 + 4568);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    xsi_vlog_generic_get_array_select_value(t53, 8, t52, t56, t59, 2, 1, t62, 32, 1);
    memset(t63, 0, 8);
    t64 = (t63 + 4);
    t65 = (t53 + 4);
    t66 = *((unsigned int *)t53);
    t67 = (t66 >> 4);
    *((unsigned int *)t63) = t67;
    t68 = *((unsigned int *)t65);
    t69 = (t68 >> 4);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t70 & 3U);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t71 & 3U);
    t72 = (t0 + 4728);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t76 = (t0 + 4728);
    t77 = (t76 + 72U);
    t78 = *((char **)t77);
    t79 = (t0 + 4728);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t82 = (t0 + 4568);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    xsi_vlog_generic_get_array_select_value(t75, 8, t74, t78, t81, 2, 1, t84, 32, 1);
    memset(t85, 0, 8);
    t86 = (t85 + 4);
    t87 = (t75 + 4);
    t88 = *((unsigned int *)t75);
    t89 = (t88 >> 0);
    *((unsigned int *)t85) = t89;
    t90 = *((unsigned int *)t87);
    t91 = (t90 >> 0);
    *((unsigned int *)t86) = t91;
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t92 & 15U);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t93 & 15U);
    t94 = (t0 + 7696);
    t95 = (t0 + 1280);
    t96 = xsi_create_subprogram_invocation(t94, 0, t0, t95, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t95, t96);
    t97 = (t0 + 5048);
    xsi_vlogvar_assign_value(t97, t63, 0, 0, 2);
    t98 = (t0 + 5208);
    xsi_vlogvar_assign_value(t98, t85, 0, 0, 4);

LAB28:    t99 = (t0 + 7792);
    t100 = *((char **)t99);
    t101 = (t100 + 80U);
    t102 = *((char **)t101);
    t103 = (t102 + 272U);
    t104 = *((char **)t103);
    t105 = (t104 + 0U);
    t106 = *((char **)t105);
    t107 = ((int  (*)(char *, char *))t106)(t0, t100);

LAB30:    if (t107 != 0)
        goto LAB31;

LAB26:    t100 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t100);

LAB27:    t108 = (t0 + 7792);
    t109 = *((char **)t108);
    t108 = (t0 + 1280);
    t110 = (t0 + 7696);
    t111 = 0;
    xsi_delete_subprogram_invocation(t108, t109, t0, t110, t111);
    goto LAB25;

LAB19:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 4728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 4728);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = (t0 + 4728);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 4568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t8, 8, t5, t9, t12, 2, 1, t15, 32, 1);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t18 = (t8 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (t21 >> 4);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 3U);
    t42 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t42 & 3U);
    t19 = (t0 + 4728);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    t27 = (t0 + 4728);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t0 + 4728);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = (t0 + 4568);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t29, 8, t26, t30, t33, 2, 1, t36, 32, 1);
    memset(t53, 0, 8);
    t37 = (t53 + 4);
    t38 = (t29 + 4);
    t43 = *((unsigned int *)t29);
    t44 = (t43 >> 2);
    *((unsigned int *)t53) = t44;
    t45 = *((unsigned int *)t38);
    t46 = (t45 >> 2);
    *((unsigned int *)t37) = t46;
    t47 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t47 & 3U);
    t66 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t66 & 3U);
    t40 = (t0 + 4728);
    t41 = (t40 + 56U);
    t48 = *((char **)t41);
    t50 = (t0 + 4728);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t54 = (t0 + 4728);
    t55 = (t54 + 64U);
    t56 = *((char **)t55);
    t57 = (t0 + 4568);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    xsi_vlog_generic_get_array_select_value(t63, 8, t48, t52, t56, 2, 1, t59, 32, 1);
    memset(t75, 0, 8);
    t60 = (t75 + 4);
    t61 = (t63 + 4);
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 0);
    *((unsigned int *)t75) = t68;
    t69 = *((unsigned int *)t61);
    t70 = (t69 >> 0);
    *((unsigned int *)t60) = t70;
    t71 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t71 & 3U);
    t88 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t88 & 3U);
    t62 = (t0 + 7696);
    t64 = (t0 + 2144);
    t65 = xsi_create_subprogram_invocation(t62, 0, t0, t64, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t64, t65);
    t72 = (t0 + 5848);
    xsi_vlogvar_assign_value(t72, t16, 0, 0, 2);
    t73 = (t0 + 6008);
    xsi_vlogvar_assign_value(t73, t53, 0, 0, 2);
    t74 = (t0 + 6168);
    xsi_vlogvar_assign_value(t74, t75, 0, 0, 2);

LAB34:    t76 = (t0 + 7792);
    t77 = *((char **)t76);
    t78 = (t77 + 80U);
    t79 = *((char **)t78);
    t80 = (t79 + 272U);
    t81 = *((char **)t80);
    t82 = (t81 + 0U);
    t83 = *((char **)t82);
    t107 = ((int  (*)(char *, char *))t83)(t0, t77);

LAB36:    if (t107 != 0)
        goto LAB37;

LAB32:    t77 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t77);

LAB33:    t84 = (t0 + 7792);
    t86 = *((char **)t84);
    t84 = (t0 + 2144);
    t87 = (t0 + 7696);
    t94 = 0;
    xsi_delete_subprogram_invocation(t84, t86, t0, t87, t94);
    goto LAB25;

LAB21:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 4728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 4728);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = (t0 + 4728);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 4568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t8, 8, t5, t9, t12, 2, 1, t15, 32, 1);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t18 = (t8 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (t21 >> 4);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 3U);
    t42 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t42 & 3U);
    t19 = (t0 + 4728);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    t27 = (t0 + 4728);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t0 + 4728);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = (t0 + 4568);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t29, 8, t26, t30, t33, 2, 1, t36, 32, 1);
    memset(t53, 0, 8);
    t37 = (t53 + 4);
    t38 = (t29 + 4);
    t43 = *((unsigned int *)t29);
    t44 = (t43 >> 2);
    *((unsigned int *)t53) = t44;
    t45 = *((unsigned int *)t38);
    t46 = (t45 >> 2);
    *((unsigned int *)t37) = t46;
    t47 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t47 & 3U);
    t66 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t66 & 3U);
    t40 = (t0 + 4728);
    t41 = (t40 + 56U);
    t48 = *((char **)t41);
    t50 = (t0 + 4728);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t54 = (t0 + 4728);
    t55 = (t54 + 64U);
    t56 = *((char **)t55);
    t57 = (t0 + 4568);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    xsi_vlog_generic_get_array_select_value(t63, 8, t48, t52, t56, 2, 1, t59, 32, 1);
    memset(t75, 0, 8);
    t60 = (t75 + 4);
    t61 = (t63 + 4);
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 0);
    *((unsigned int *)t75) = t68;
    t69 = *((unsigned int *)t61);
    t70 = (t69 >> 0);
    *((unsigned int *)t60) = t70;
    t71 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t71 & 3U);
    t88 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t88 & 3U);
    t62 = (t0 + 7696);
    t64 = (t0 + 2576);
    t65 = xsi_create_subprogram_invocation(t62, 0, t0, t64, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t64, t65);
    t72 = (t0 + 6488);
    xsi_vlogvar_assign_value(t72, t16, 0, 0, 2);
    t73 = (t0 + 6648);
    xsi_vlogvar_assign_value(t73, t53, 0, 0, 2);
    t74 = (t0 + 6808);
    xsi_vlogvar_assign_value(t74, t75, 0, 0, 2);

LAB40:    t76 = (t0 + 7792);
    t77 = *((char **)t76);
    t78 = (t77 + 80U);
    t79 = *((char **)t78);
    t80 = (t79 + 272U);
    t81 = *((char **)t80);
    t82 = (t81 + 0U);
    t83 = *((char **)t82);
    t107 = ((int  (*)(char *, char *))t83)(t0, t77);

LAB42:    if (t107 != 0)
        goto LAB43;

LAB38:    t77 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t77);

LAB39:    t84 = (t0 + 7792);
    t86 = *((char **)t84);
    t84 = (t0 + 2576);
    t87 = (t0 + 7696);
    t94 = 0;
    xsi_delete_subprogram_invocation(t84, t86, t0, t87, t94);
    goto LAB25;

LAB23:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 4728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 4728);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = (t0 + 4728);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 4568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t8, 8, t5, t9, t12, 2, 1, t15, 32, 1);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t18 = (t8 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (t21 >> 4);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 3U);
    t42 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t42 & 3U);
    t19 = (t0 + 7696);
    t20 = (t0 + 1712);
    t26 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t20, t26);
    t27 = (t0 + 5528);
    xsi_vlogvar_assign_value(t27, t16, 0, 0, 2);

LAB46:    t28 = (t0 + 7792);
    t30 = *((char **)t28);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t33 = (t32 + 272U);
    t34 = *((char **)t33);
    t35 = (t34 + 0U);
    t36 = *((char **)t35);
    t107 = ((int  (*)(char *, char *))t36)(t0, t30);

LAB48:    if (t107 != 0)
        goto LAB49;

LAB44:    t30 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t30);

LAB45:    t37 = (t0 + 7792);
    t38 = *((char **)t37);
    t37 = (t0 + 1712);
    t40 = (t0 + 7696);
    t41 = 0;
    xsi_delete_subprogram_invocation(t37, t38, t0, t40, t41);
    goto LAB25;

LAB29:;
LAB31:    t99 = (t0 + 7888U);
    *((char **)t99) = &&LAB28;
    goto LAB1;

LAB35:;
LAB37:    t76 = (t0 + 7888U);
    *((char **)t76) = &&LAB34;
    goto LAB1;

LAB41:;
LAB43:    t76 = (t0 + 7888U);
    *((char **)t76) = &&LAB40;
    goto LAB1;

LAB47:;
LAB49:    t28 = (t0 + 7888U);
    *((char **)t28) = &&LAB46;
    goto LAB1;

LAB50:    xsi_set_current_line(57, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_60_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 8136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 7944);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 4088);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_134_2(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 8384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 8952);
    *((int *)t2) = 1;
    t3 = (t0 + 8416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(135, ng0);
    t4 = (t0 + 11176);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(136, ng0);
    *((int *)t14) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t15 = (t14 + 4);
    *((int *)t15) = 0;
    t16 = (t0 + 11200);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 56U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)118, t14, 32, (char)118, t19, 8);
    goto LAB7;

}

static void Always_138_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 8968);
    *((int *)t2) = 1;
    t3 = (t0 + 8664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng0);
    *((int *)t4) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 3528U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)118, t4, 32, (char)118, t7, 8);
    goto LAB2;

}


extern void work_m_00000000003645924815_3671711236_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_60_1,(void *)Always_134_2,(void *)Always_138_3};
	static char *se[] = {(void *)sp_tskRunInst,(void *)sp_tskRunPUSH,(void *)sp_tskRunSEND,(void *)sp_tskRunADD,(void *)sp_tskRunMULT};
	xsi_register_didat("work_m_00000000003645924815_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000003645924815_3671711236.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

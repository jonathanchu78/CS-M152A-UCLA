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
static const char *ng0 = "C:/Users/152/Documents/Lab3/display.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {7U, 0U};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {11U, 0U};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {13U, 0U};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {14U, 0U};
static int ng9[] = {0, 0};
static unsigned int ng10[] = {0U, 0U};
static unsigned int ng11[] = {192U, 0U};
static unsigned int ng12[] = {1U, 0U};
static unsigned int ng13[] = {249U, 0U};
static unsigned int ng14[] = {2U, 0U};
static unsigned int ng15[] = {164U, 0U};
static unsigned int ng16[] = {3U, 0U};
static unsigned int ng17[] = {176U, 0U};
static unsigned int ng18[] = {4U, 0U};
static unsigned int ng19[] = {153U, 0U};
static unsigned int ng20[] = {5U, 0U};
static unsigned int ng21[] = {146U, 0U};
static unsigned int ng22[] = {6U, 0U};
static unsigned int ng23[] = {130U, 0U};
static unsigned int ng24[] = {248U, 0U};
static unsigned int ng25[] = {8U, 0U};
static unsigned int ng26[] = {128U, 0U};
static unsigned int ng27[] = {9U, 0U};
static unsigned int ng28[] = {144U, 0U};
static unsigned int ng29[] = {255U, 0U};



static void Always_37_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 4, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB20:    t5 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB16:    xsi_set_current_line(40, ng0);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = (t0 + 2408);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(41, ng0);

LAB17:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(42, ng0);

LAB18:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB13:    xsi_set_current_line(43, ng0);

LAB19:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB21:    xsi_set_current_line(47, ng0);
    t7 = ((char*)((ng11)));
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB43;

LAB23:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB25:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB27:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB29:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB31:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB33:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB35:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB37:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB39:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB41:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

}

static void Cont_81_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 4640);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_82_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 4656);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000710642232_1411027795_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Cont_81_1,(void *)Cont_82_2};
	xsi_register_didat("work_m_00000000000710642232_1411027795", "isim/stopwatch_tb_isim_beh.exe.sim/work/m_00000000000710642232_1411027795.didat");
	xsi_register_executes(pe);
}

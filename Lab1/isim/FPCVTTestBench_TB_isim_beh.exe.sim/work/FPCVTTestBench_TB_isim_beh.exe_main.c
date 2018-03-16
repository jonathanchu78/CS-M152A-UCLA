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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002342377882_2397652457_init();
    work_m_00000000002824964380_2690751058_init();
    work_m_00000000000914983362_0522167413_init();
    work_m_00000000003285489999_0644182429_init();
    work_m_00000000003853563406_1078114509_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003853563406_1078114509");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

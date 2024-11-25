/*
 * main.c
 *
 * Author:
 * Copyright (c) 2022, Ashwin Kandheri Jayaraman (akandhe1@binghamton.edu), Srinidhi Sasidharan (ssasidh1@binghamton.edu)
 * State University of New York at Binghamton
 */
#include <stdio.h>
#include <stdlib.h>

#include "apex_cpu.c"
#include "apex_cpu.h"

int
main(int argc, char const *argv[])
{
    APEX_CPU *cpu;

    //fprintf(stderr, "APEX CPU Pipeline Simulator v%0.1lf\n", VERSION);

    // if (argc != 2)
    // {
    //     fprintf(stderr, "APEX_Help: Usage %s <input_file>\n", argv[0]);
    //     exit(1);
    // }

    cpu = APEX_cpu_init(argv[1]);
    //cpu = APEX_cpu_init("/Users/ash/Downloads/binghamton/CAO/finalProject/apex_core/input.asm");
    if (!cpu)
    {
        fprintf(stderr, "APEX_Error: Unable to initialize CPU\n");
        exit(1);
    }

    APEX_cpu_run(cpu);
    APEX_cpu_stop(cpu);
    return 0;
}
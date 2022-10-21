/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-10-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "./includes.h"

static struct pt pt_cmd;    // pt_time, pt_input, pt_output, pt_DMA_output ;


static PT_THREAD (protothread_cmd(struct pt *pt))
{
    PT_BEGIN(pt);
      while(1) {

      }
    PT_END(pt);
}

int main(void) {


    PT_INIT(&pt_cmd);
    while(1) {
        PT_SCHEDULE(protothread_cmd(&pt_cmd));
    }
}
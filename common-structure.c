/*
 * =====================================================================================
 *
 *       Filename:  commnon-structure.c
 *
 *    Description:  j
 *
 *        Version:  1.0
 *        Created:  08/06/2014 04:54:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Milannic (), milannic.cheng.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "common-structure.h"

uint64_t vstol(view_stamp* vs){
    uint64_t result = vs->req_id;
    result += (vs->view_id.view_id)<<31;
    return result;
};


int timeval_comp(struct timeval *op1,struct timeval *op2){
    if(op1->tv_sec>op2->tv_sec){
        return 1;
    }
    if(op1->tv_sec==op2->tv_sec){
        if(op1->tv_usec>op2->tv_usec){
            return 1;
        }else if(op1->tv_usec == op2->tv_usec){
            return 0;
        }
    }
    return -1;
}

void timeval_add(struct timeval*op1,struct timeval* op2,struct timeval* res){
    res->tv_sec = op1->tv_sec + op2->tv_sec;
    res->tv_usec = op1->tv_usec + op2->tv_usec;
    return;
}

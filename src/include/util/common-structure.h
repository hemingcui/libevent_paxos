/*
 * =====================================================================================
 *
 *       Filename:  commnon-structure.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/04/2014 04:10:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Milannic, milannic.cheng.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef COMMON_STRUCTURE_H
#define COMMON_STRUCTURE_H
#include <stdint.h>
#include <sys/time.h>

typedef uint32_t node_id_t;
typedef uint32_t req_id_t;
typedef uint32_t view_id_t;

typedef struct view_t{
    view_id_t view_id;
    node_id_t leader_id;
}view;

typedef struct view_stamp_t{
    view_id_t view_id;
    req_id_t req_id;
}view_stamp;

uint64_t viewtol(view_id_t);

view_id_t ltoview(uint64_t);

uint64_t vstol(view_stamp* vs);
view_stamp ltovs(uint64_t);
int view_stamp_comp(view_stamp* op1,view_stamp* op2);

int timeval_comp(struct timeval *op1,struct timeval *op2);
void timeval_add(struct timeval*op1,struct timeval* op2,struct timeval* res);

#endif 

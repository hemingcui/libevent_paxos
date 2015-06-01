#ifndef CONFIG_CLIENT_H
#define CONFIG_CLIENT_H
#include "../src/include/util/common-header.h"
#include "../src/include/replica-sys/node.h"
#include <libconfig.h>


int group_size = -1;
peer* peer_pool = NULL;

int client_read_config();

#endif


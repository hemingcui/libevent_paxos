#include <netinet/in.h>
#include <netinet/tcp.h>
#include <sys/stat.h>
#include "config-client.h"

int client_read_config() {
  //TBD.
  //Init group size and peer_pool, get IPs.
  group_size = 0;
  peer_pool = NULL;
  return 0;
}

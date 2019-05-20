#include <stdint.h>
#include <stdio.h>
#include "pkt/pkt.h"
#include "ipprotos.h"

extern struct ipproto ipproto_tcp;
extern struct ipproto ipproto_udp;
extern struct ipproto ipproto_icmp;
struct ipproto *ipprotos_list[] = {
  &ipproto_tcp,
  &ipproto_udp,
  &ipproto_icmp,
  NULL
};

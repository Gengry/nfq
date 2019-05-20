#include <stdint.h>
#include <stdio.h>
#include "pkt.h"
#include "pkts_hdlrs.h"

extern struct pkt_hdlrs pkt_hdlrs_nfq;
extern struct pkt_hdlrs pkt_hdlrs_ip;
extern struct pkt_hdlrs pkt_hdlrs_icmp;
extern struct pkt_hdlrs pkt_hdlrs_tcp;
extern struct pkt_hdlrs pkt_hdlrs_udp;
extern struct pkt_hdlrs pkt_hdlrs_http;
extern struct pkt_hdlrs pkt_hdlrs_dns;
extern struct pkt_hdlrs pkt_hdlrs_tls;
struct pkt_hdlrs *pkts_list[] = {
  &pkt_hdlrs_nfq,
  &pkt_hdlrs_ip,
  &pkt_hdlrs_icmp,
  &pkt_hdlrs_tcp,
  &pkt_hdlrs_udp,
  &pkt_hdlrs_http,
  &pkt_hdlrs_dns,
  &pkt_hdlrs_tls,
  NULL
};

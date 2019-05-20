#ifndef __PKTS_TYPES_H__
#define __PKTS_TYPES_H__
enum pkt_type {
  pkt_type_nfq,
  pkt_type_ip,
  pkt_type_icmp,
  pkt_type_tcp,
  pkt_type_udp,
  pkt_type_http,
  pkt_type_dns,
  pkt_type_tls,
  pkt_type__
};
#endif  /* __PKTS_TYPES_H__ */

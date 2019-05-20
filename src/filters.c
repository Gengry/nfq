#include <stdint.h>
#include <stdio.h>
#include "pkt/pkt.h"
#include "filters.h"

extern struct filter filter_f_ipsrv;
extern struct filter filter_f_domain;
extern struct filter filter_f_domaintree;
extern struct filter filter_f_uri;
struct filter *filters[] = {
  &filter_f_ipsrv,
  &filter_f_domain,
  &filter_f_domaintree,
  &filter_f_uri,
  NULL
};

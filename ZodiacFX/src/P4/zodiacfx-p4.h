/* Automatically generated by p4c-zodiacfx from test_parser.p4 on Wed Jul 24 16:15:54 2019
 */
#ifndef _P4_GEN_HEADER_
#define _P4_GEN_HEADER_
#include <asf.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"
#include "switch.h"


void packet_in(uint8_t *p_uc_data, uint16_t zodiacfx_ul_size, uint8_t port);

struct zodiacfx_input {
    uint32_t input_port; /* bit<32> */
};

struct zodiacfx_output {
    uint32_t output_port; /* bit<32> */
};

struct ethernet_t {
    uint64_t dstAddr; /* macAddr_t */
    uint64_t srcAddr; /* macAddr_t */
    uint16_t etherType; /* bit<16> */
    uint8_t zodiacfx_valid;
};

struct ipv4_t {
    uint8_t version; /* bit<4> */
    uint8_t ihl; /* bit<4> */
    uint8_t diffserv; /* bit<8> */
    uint16_t totalLen; /* bit<16> */
    uint16_t identification; /* bit<16> */
    uint8_t flags; /* bit<3> */
    uint16_t fragOffset; /* bit<13> */
    uint8_t ttl; /* bit<8> */
    uint8_t protocol; /* bit<8> */
    uint16_t hdrChecksum; /* bit<16> */
    uint32_t srcAddr; /* ip4Addr_t */
    uint32_t dstAddr; /* ip4Addr_t */
    uint8_t zodiacfx_valid;
};

struct Headers_t {
    struct ethernet_t ethernet; /* ethernet_t */
    struct ipv4_t ipv4; /* ipv4_t */
};

#endif

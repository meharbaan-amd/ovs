// {C} Copyright 2021 Pensando Systems Inc. All rights reserved
#ifndef __IPC_RAW__HPP__
#define __IPC_RAW__HPP__

#define SHM_NAME "/conn_shared_memory" // Shared memory name
#define SHM_SIZE 524288              // Shared memory size 512*1024

typedef struct operd_flow_key_v4 {
    uint32_t src;
    uint32_t dst;
    uint16_t sport;
    uint16_t dport;
    uint8_t proto;
} operd_flow_key_v4_t;

typedef struct operd_flow {
    operd_flow_key_v4_t v4_tuple;
    uint64_t time;
    uint8_t state;
} operd_flow_t;

#endif

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct NSArray {
    Class _field1;
};

struct NSDictionary {
    Class _field1;
};

struct in6_addr {
    union {
        unsigned char __u6_addr8[16];
        unsigned short __u6_addr16[8];
        unsigned int __u6_addr32[4];
    } __u6_addr;
};

struct in_addr {
    unsigned int s_addr;
};

struct sockaddr {
    unsigned char sa_len;
    unsigned char sa_family;
    char sa_data[14];
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct sockaddr_in6 {
    unsigned char sin6_len;
    unsigned char sin6_family;
    unsigned short sin6_port;
    unsigned int sin6_flowinfo;
    struct in6_addr sin6_addr;
    unsigned int sin6_scope_id;
};

#pragma mark Typedef'd Unions

typedef union {
    struct sockaddr sa;
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
} CDUnion_fab80606;


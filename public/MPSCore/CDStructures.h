//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CacheFrame {
    struct CacheFrame *_field1;
    struct HeapNode *_field2;
    struct ResourceNode *_field3;
};

struct HeapNode {
    struct HeapNode *_field1;
    id _field2;
    unsigned long long _field3;
};

struct MPSAutoCache {
    id _field1;
    id _field2;
};

struct MPSDeviceBehaviors;

struct MPSDeviceSpecificInfo {
    struct MPSKernelInfo *_field1;
    CDUnknownFunctionPointerType _field2;
    unsigned long long _field3;
};

struct MPSKernelInfo;

struct MPSKey_data;

struct MPSLibrary {
    id _field1;
    struct atomic<MPSKey_data *> *_field2;
    unsigned long long _field3;
    union {
        struct MPSDeviceSpecificInfo *_field1;
        struct MPSDeviceBehaviors *_field2;
    } _field4;
    unsigned long long _field5;
    struct MPSKey_data *_field6[64];
    struct _opaque_pthread_rwlock_t {
        long long _field1;
        char _field2[192];
    } _field7;
    struct *_field8;
};

struct MPSLibraryInfo {
    int _field1;
    unsigned int _field2;
    char *_field3;
    struct MPSDeviceSpecificInfo _field4;
    struct MPSDeviceSpecificInfo _field5;
    struct MPSDeviceSpecificInfo _field6;
    struct MPSDeviceSpecificInfo _field7;
    struct MPSDeviceSpecificInfo _field8;
    struct MPSDeviceSpecificInfo _field9;
    struct MPSDeviceSpecificInfo _field10;
    struct MPSDeviceSpecificInfo _field11;
    struct MPSDeviceSpecificInfo _field12;
    struct MPSDeviceSpecificInfo _field13;
    struct MPSDeviceSpecificInfo _field14;
    struct MPSDeviceSpecificInfo _field15;
    struct MPSDeviceSpecificInfo _field16;
    struct MPSDeviceSpecificInfo _field17;
    struct MPSDeviceSpecificInfo _field18;
    struct MPSDeviceSpecificInfo _field19;
    struct MPSDeviceSpecificInfo _field20;
};

struct MPSPixelInfo {
    unsigned int pixelFormat:10;
    unsigned int chunkSize:6;
    unsigned int chunkWidth:4;
    unsigned int chunkHeight:4;
    unsigned int pixelStyle:4;
    unsigned int colorModel:4;
    unsigned int bitDepth:8;
    unsigned int isSigned:1;
    unsigned int isClamped:1;
    unsigned int isInteger:1;
    unsigned int canFilter:1;
    unsigned int canRender:1;
    unsigned int canWrite:1;
    unsigned int canMultisample:1;
    unsigned int isSupported:1;
    unsigned int isCompressed:1;
    unsigned int chunkSizePlane2:6;
    unsigned int log2MinAlignment:4;
    unsigned int _padding:5;
};

struct MPSStateTextureInfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8[4];
};

struct NSArray {
    Class _field1;
};

struct ResourceListNode {
    CDUnknownFunctionPointerType *_field1;
    struct ResourceListNode *_field2;
};

struct ResourceNode {
    struct ResourceNode *_field1;
    id _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic<MPSKey_data *>;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

#pragma mark Typedef'd Unions

typedef union {
    unsigned int bits;
    struct {
        unsigned int mpsKernelVersion:8;
        unsigned int intermediateObjectVersion:8;
        unsigned int version:16;
    } ;
} CDUnion_cbb8185c;


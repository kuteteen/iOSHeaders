//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __UniformBinding {
    int location;
    char *name;
};

struct __UniformBindings {
    struct __UniformBinding viewProjectionMatrix;
    struct __UniformBinding modelMatrix;
    struct __UniformBinding environmentMatrix;
    struct __UniformBinding cameraPosition;
    struct __UniformBinding useTexture;
    struct __UniformBinding useTextureShine;
    struct __UniformBinding useFullColorEnamel;
    struct __UniformBinding color;
    struct __UniformBinding enamelColor;
    struct __UniformBinding colorSampler;
    struct __UniformBinding environmentSampler;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long section;
    unsigned long long item;
} CDStruct_f943eba4;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    CDStruct_f943eba4 first;
    CDStruct_f943eba4 last;
} CDStruct_c4ec18df;

typedef struct {
    CDStruct_c3b9c2ee _field1;
    CDStruct_c3b9c2ee _field2;
} CDStruct_90e2a262;

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

union _GLKVector3 {
    struct {
        float x;
        float y;
        float z;
    } ;
    struct {
        float r;
        float g;
        float b;
    } ;
    struct {
        float s;
        float t;
        float p;
    } ;
    float v[3];
};

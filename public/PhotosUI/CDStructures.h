//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

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

struct NSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct NSHashTable {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSObject {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct PHDisplayVelocity {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct PUAlbumListCellContentView {
    Class _field1;
};

struct PUBarAnimationSettings {
    long long _field1;
    double _field2;
};

struct PUDisplayVelocity {
    double x;
    double y;
    double scale;
    double rotation;
};

struct PUFeedSeparatorMetrics {
    struct CGSize _field1;
    struct UIEdgeInsets _field2;
};

struct PUGridCoordinates {
    long long row;
    long long column;
};

struct PUSimpleIndexPath {
    long long _field1;
    long long _field2;
};

struct PXAssetBadgeInfo {
    unsigned long long badges;
    double duration;
    long long count;
};

struct PXSimpleIndexPath {
    unsigned long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PUSectionedTilingLayoutSectionInfo {
    _Bool _field1;
    long long _field2;
    struct CGRect _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    double _field6;
    int _field7;
} CDStruct_e950349b;

typedef struct {
    double left;
    double right;
    double top;
    double bottom;
} CDStruct_6c514524;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;


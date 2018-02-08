//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, _MRColorProtobuf;

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying>
{
    NSString *_bundleIdentifier;
    NSMutableArray *_bundleIdentifierHierarchys;
    NSString *_displayName;
    int _nowPlayingVisibility;
    NSString *_parentApplicationBundleIdentifier;
    int _processIdentifier;
    int _processUserIdentifier;
    _MRColorProtobuf *_tintColor;
    _Bool _isEmptyDeprecated;
    struct {
        unsigned int nowPlayingVisibility:1;
        unsigned int processIdentifier:1;
        unsigned int processUserIdentifier:1;
        unsigned int isEmptyDeprecated:1;
    } _has;
}

+ (Class)bundleIdentifierHierarchyType;
@property(nonatomic) _Bool isEmptyDeprecated; // @synthesize isEmptyDeprecated=_isEmptyDeprecated;
@property(retain, nonatomic) NSMutableArray *bundleIdentifierHierarchys; // @synthesize bundleIdentifierHierarchys=_bundleIdentifierHierarchys;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) _MRColorProtobuf *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) int processUserIdentifier; // @synthesize processUserIdentifier=_processUserIdentifier;
@property(retain, nonatomic) NSString *parentApplicationBundleIdentifier; // @synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsEmptyDeprecated;
- (id)bundleIdentifierHierarchyAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIdentifierHierarchysCount;
- (void)addBundleIdentifierHierarchy:(id)arg1;
- (void)clearBundleIdentifierHierarchys;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasTintColor;
- (int)StringAsNowPlayingVisibility:(id)arg1;
- (id)nowPlayingVisibilityAsString:(int)arg1;
@property(nonatomic) _Bool hasNowPlayingVisibility;
@property(nonatomic) int nowPlayingVisibility; // @synthesize nowPlayingVisibility=_nowPlayingVisibility;
@property(nonatomic) _Bool hasProcessUserIdentifier;
@property(readonly, nonatomic) _Bool hasParentApplicationBundleIdentifier;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(nonatomic) _Bool hasProcessIdentifier;

@end


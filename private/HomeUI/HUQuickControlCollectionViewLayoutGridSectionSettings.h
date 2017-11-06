//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NAIdentifiable.h"
#import "NSCopying.h"

@class NSString;

@interface HUQuickControlCollectionViewLayoutGridSectionSettings : NSObject <NSCopying, NAIdentifiable>
{
    double _rowSpacing;
    double _interitemSpacing;
    unsigned long long _preferredLayoutStyle;
    struct CGSize _preferredItemSize;
}

+ (id)na_identity;
@property(nonatomic) unsigned long long preferredLayoutStyle; // @synthesize preferredLayoutStyle=_preferredLayoutStyle;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property(nonatomic) struct CGSize preferredItemSize; // @synthesize preferredItemSize=_preferredItemSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


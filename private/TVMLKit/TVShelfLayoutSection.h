//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVShelfLayoutSection : NSObject
{
    long long _numberOfItems;
    struct CGRect *_itemFrames;
    double _sectionHeaderHorizontalOffset;
    double _sectionHeaderVerticalBump;
    struct CGRect _itemsBoundingFrame;
    struct CGRect _sectionHeaderFrame;
    struct UIEdgeInsets _sectionInset;
}

@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double sectionHeaderVerticalBump; // @synthesize sectionHeaderVerticalBump=_sectionHeaderVerticalBump;
@property(nonatomic) double sectionHeaderHorizontalOffset; // @synthesize sectionHeaderHorizontalOffset=_sectionHeaderHorizontalOffset;
@property(nonatomic) struct CGRect sectionHeaderFrame; // @synthesize sectionHeaderFrame=_sectionHeaderFrame;
@property(nonatomic) struct CGRect itemsBoundingFrame; // @synthesize itemsBoundingFrame=_itemsBoundingFrame;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (struct CGRect)lastItemFrame;
- (struct CGRect)firstItemFrame;
- (void)setItemFrame:(struct CGRect)arg1 atIndex:(long long)arg2;
- (struct CGRect)itemFrameAtIndex:(long long)arg1;
- (void)dealloc;

@end


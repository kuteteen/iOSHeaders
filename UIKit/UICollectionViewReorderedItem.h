//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, UICollectionViewCell;

__attribute__((visibility("hidden")))
@interface UICollectionViewReorderedItem : NSObject
{
    UICollectionViewCell *_cell;
    NSIndexPath *_originalIndexPath;
    NSIndexPath *_targetIndexPath;
    _Bool _pinned;
    CDUnknownBlockType _pinningTest;
    struct CGPoint _pinnedPreviousContentOffset;
}

@property(copy, nonatomic) CDUnknownBlockType pinningTest; // @synthesize pinningTest=_pinningTest;
@property(nonatomic) struct CGPoint pinnedPreviousContentOffset; // @synthesize pinnedPreviousContentOffset=_pinnedPreviousContentOffset;
@property(nonatomic) _Bool pinned; // @synthesize pinned=_pinned;
@property(retain, nonatomic) NSIndexPath *targetIndexPath; // @synthesize targetIndexPath=_targetIndexPath;
@property(retain, nonatomic) NSIndexPath *originalIndexPath; // @synthesize originalIndexPath=_originalIndexPath;
@property(readonly, nonatomic) UICollectionViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (_Bool)isNOOP;
- (id)description;
- (id)initWithCell:(id)arg1 indexPath:(id)arg2;

@end


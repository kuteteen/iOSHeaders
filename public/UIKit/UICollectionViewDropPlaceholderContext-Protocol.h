//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDragAnimating.h"

@class UIDragItem;

@protocol UICollectionViewDropPlaceholderContext <UIDragAnimating>
@property(readonly, nonatomic) UIDragItem *dragItem;
- (void)setNeedsCellUpdate;
- (_Bool)deletePlaceholder;
- (_Bool)commitInsertionWithDataSourceUpdates:(void (^)(NSIndexPath *))arg1;
@end


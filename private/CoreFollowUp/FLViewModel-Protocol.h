//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLFollowUpItem, NSArray, NSString;

@protocol FLViewModel <NSObject>
- (void)setItemChangeHandler:(void (^)(void))arg1;
- (void)refreshItemsForItem:(FLFollowUpItem *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)refreshItems:(NSArray *)arg1 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (NSArray *)groups;
- (NSArray *)allPendingItems;
- (id)initWithIdentifier:(NSString *)arg1;
@end


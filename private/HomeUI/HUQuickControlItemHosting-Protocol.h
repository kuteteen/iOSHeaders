//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol HUQuickControlItemHosting <NSObject>
@property(readonly, copy, nonatomic) NSSet *controlItems;
@property(readonly, nonatomic) id <HUQuickControlItemUpdating> itemUpdater;
- (void)quickControlItemUpdater:(id <HUQuickControlItemUpdating>)arg1 didUpdateResultsForControlItems:(NSSet *)arg2;
@end


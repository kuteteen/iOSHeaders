//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_DUIClientSessionCommon-Protocol.h>

@class BKSAnimationFenceHandle, NSArray;

@protocol _DUIClientSessionSource <_DUIClientSessionCommon>
- (oneway void)dataTransferSessionFinished;
- (oneway void)dragFailed;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)handOffCancelledItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;
- (oneway void)checkCanHandOffCancelledItemsWithReply:(void (^)(_Bool))arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class _DUIItemDetail;

@protocol _DUIClientSessionCommon
- (oneway void)updateDetail:(_DUIItemDetail *)arg1 forItemIndex:(unsigned long long)arg2;
- (oneway void)requestDetailForItemIndex:(unsigned long long)arg1 reply:(void (^)(_DUIItemDetail *))arg2;
- (oneway void)requestImageForItemIndex:(unsigned long long)arg1 reply:(void (^)(NSArray *, BKSAnimationFenceHandle *, long long))arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AttentionAwareness/NSObject-Protocol.h>

@class AWAttentionEvent;
@protocol AWUnitTestSampler;

@protocol AWFrameworkClient <NSObject>
- (id <AWUnitTestSampler>)unitTestSampler;
- (void)useUnitTestSampling:(_Bool)arg1;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(AWAttentionEvent *)arg2;
- (void)notifyEvent:(AWAttentionEvent *)arg1;
@end


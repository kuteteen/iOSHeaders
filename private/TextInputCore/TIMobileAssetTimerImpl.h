//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject
{
    CDUnknownBlockType _expirationHandler;
    NSTimer *_assetTimer;
}

+ (id)nextFireDateForDate:(id)arg1;
- (void)updateAssetTimer;
- (void)assetTimerFired;
- (void)invalidate;
- (void)dealloc;
- (id)initWithExpirationHandler:(CDUnknownBlockType)arg1;

@end


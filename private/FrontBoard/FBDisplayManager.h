//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSDisplayMonitor.h"

@class FBSDisplayConfiguration;

@interface FBDisplayManager : FBSDisplayMonitor
{
    _Bool _mainConnected;
}

+ (id)mainDisplay;
+ (id)mainConfiguration;
+ (id)mainIdentity;
+ (id)sharedInstance;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;
- (void)postMainDisplayConnection;
- (void)dealloc;
- (id)_init;
- (void)invalidate;
- (id)init;

@end


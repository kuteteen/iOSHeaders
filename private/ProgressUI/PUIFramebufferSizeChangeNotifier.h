//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProgressUI/FBSDisplayObserving-Protocol.h>

@class FBSDisplayMonitor, NSMutableArray, NSString;

@interface PUIFramebufferSizeChangeNotifier : NSObject <FBSDisplayObserving>
{
    NSMutableArray *_listeners;
    FBSDisplayMonitor *_displayMonitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)_onMainQueue_notifyListeners;
- (void)removeListener:(id)arg1;
- (id)addListener:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

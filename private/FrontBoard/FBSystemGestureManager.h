//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate>
{
    NSMutableDictionary *_displayIdentityToManagerMap;
}

+ (id)sharedInstance;
- (void)removeGestureRecognizer:(id)arg1 fromDisplay:(id)arg2;
- (void)addGestureRecognizer:(id)arg1 toDisplay:(id)arg2;
- (id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg1;
- (void)_defaultsDidChange:(id)arg1;
- (id)windowForSystemGesturesForDisplayWithIdentity:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1 fromDisplayWithIdentity:(id)arg2;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 toDisplayWithIdentity:(id)arg3;
- (void)addGestureRecognizer:(id)arg1 toDisplayWithIdentity:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


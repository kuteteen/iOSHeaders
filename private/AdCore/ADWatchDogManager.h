//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface ADWatchDogManager : ADSingleton
{
    NSObject<OS_dispatch_queue> *_watchdogQueue;
    NSNumber *_currentToken;
    NSMutableDictionary *_tokenCollection;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *tokenCollection; // @synthesize tokenCollection=_tokenCollection;
@property(retain, nonatomic) NSNumber *currentToken; // @synthesize currentToken=_currentToken;
- (void).cxx_destruct;
- (id)getNextToken;
- (void)incrementToken;
- (void)simulateCrash:(id)arg1 becauseOf:(unsigned long long)arg2 actuallyTook:(double)arg3;
- (_Bool)updateReason:(id)arg1 forToken:(id)arg2;
- (_Bool)removeWatchdogWithToken:(id)arg1;
- (id)createNewWatchdog:(id)arg1 withTimer:(unsigned long long)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSWPChangeSessionManager-Protocol.h>

@class TSWPChangeSession;

@interface TSWPTestChangeSessionManager : NSObject <TSWPChangeSessionManager>
{
    TSWPChangeSession *_currentSession;
}

@property(readonly, nonatomic) _Bool isTrackingChanges;
- (void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id *)arg1;
- (id)changeSessionAuthorCreatedWithCommand:(id *)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

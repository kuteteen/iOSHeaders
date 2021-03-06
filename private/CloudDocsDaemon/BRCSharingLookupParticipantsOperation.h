//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import "BRCOperationSubclass.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingLookupParticipantsOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    NSArray *_userIdentities;
    NSMutableArray *_shareParticipants;
}

- (void).cxx_destruct;
- (void)main;
- (id)createActivity;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithUserIdentities:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


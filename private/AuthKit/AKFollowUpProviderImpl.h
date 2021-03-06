//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AKFollowUpProvider.h"

@class NSString;

@interface AKFollowUpProviderImpl : NSObject <AKFollowUpProvider>
{
}

- (_Bool)clearNotificationsForItem:(id)arg1 error:(id *)arg2;
- (_Bool)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)removeFollowUpItems:(id)arg1 error:(id *)arg2;
- (_Bool)addFollowUpItems:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllAuthKitFollowUpItems:(id *)arg1;
- (id)pendingAuthKitFollowUpUniqueIdentifiers:(id *)arg1;
- (id)pendingAuthKitFollowUpItems:(id *)arg1;
- (id)sharedFollowUpController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


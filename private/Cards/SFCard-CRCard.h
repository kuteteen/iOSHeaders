//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFCard.h>

#import <Cards/CRCard-Protocol.h>

@class NSArray, NSSet, NSString;

@interface SFCard (CRCard) <CRCard>
+ (id)_interactionsByIntentDataHashes;
- (id)_interactionDataKey;
- (id)interaction;
@property(readonly, nonatomic) NSSet *interactions;
@property(readonly, nonatomic) SFCard *backingCard;
- (void)loadCardWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool asynchronous;

// Remaining properties
@property(readonly, nonatomic) NSArray *cardSections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *dismissalCommands;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

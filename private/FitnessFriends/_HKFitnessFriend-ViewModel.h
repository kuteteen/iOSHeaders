//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKFitnessFriend.h>

@class NSString, _HKFitnessFriendActivitySnapshot;

@interface _HKFitnessFriend (ViewModel)
- (id)_emptySnapshotWithGoalsCarriedForwardForIndex:(long long)arg1;
- (id)snapshotWithGoalsCarriedForwardForIndex:(id)arg1;
@property(readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshotWithGoalsCarriedForward;
@property(readonly, nonatomic, getter=isMe) _Bool me;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *name;
@end

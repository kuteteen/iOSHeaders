//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCTodayPrivateData.h"

@class NSArray, NSDictionary, NSNumber, NSSet, NSString;

@protocol FCMutableTodayPrivateData <FCTodayPrivateData>
@property(copy, nonatomic) NSNumber *onboardingVersion;
@property(copy, nonatomic) NSString *feldsparID;
@property(copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property(copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property(copy, nonatomic) NSArray *rankedPersonalSubscribedTagIDs;
@property(copy, nonatomic) NSSet *purchasedTagIDs;
@property(copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property(copy, nonatomic) NSSet *mutedTagIDs;
@property(copy, nonatomic) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@end


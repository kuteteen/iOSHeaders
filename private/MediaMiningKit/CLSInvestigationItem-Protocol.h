//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSData, NSDate, NSDateComponents, NSDictionary, NSSet;

@protocol CLSInvestigationItem <NSObject>
+ (NSDictionary *)contextForItems:(NSArray *)arg1;
@property(readonly, nonatomic) NSDate *localDate;
@property(readonly, nonatomic) NSDate *universalDate;
@property(readonly, nonatomic) NSDateComponents *dateComponents;
@property(readonly, nonatomic) NSData *clsDistanceIdentity;
@property(readonly, copy, nonatomic) NSSet *clsSceneClassifications;
@property(readonly, nonatomic) _Bool clsIsHDR;
@property(readonly, nonatomic) _Bool clsIsSDOF;
@property(readonly, nonatomic) _Bool isBlurry;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) _Bool isScreenshot;
@property(readonly, nonatomic) _Bool isUtility;
@property(readonly, nonatomic) float clsSharpnessScore;
@property(readonly, nonatomic) float clsExposureScore;
@property(readonly, nonatomic) double clsContentScore;
@property(readonly, nonatomic) long long clsShareCount;
@property(readonly, nonatomic) long long clsPlayCount;
@property(readonly, nonatomic) long long clsViewCount;
@property(readonly, nonatomic) NSArray *peopleNames;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
@property(readonly, nonatomic) NSArray *clsUnprefetchedPeopleNames;
@property(readonly, nonatomic) NSArray *clsPeopleNames;
@property(readonly, nonatomic) CLLocation *clsLocation;
@property(readonly, nonatomic) NSDate *clsDate;
- (double)scoreWithContext:(NSDictionary *)arg1;
- (struct CGImage *)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(_Bool)arg2 networkAllowed:(_Bool)arg3;
@end


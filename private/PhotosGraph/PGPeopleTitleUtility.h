//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PGPeopleTitleUtility : NSObject
{
}

+ (id)_placeDisplayNameForPeopleAddressNodeLabel:(id)arg1;
+ (id)_nameFromPeopleNode:(id)arg1;
+ (id)peopleGroupNameForPeopleNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2;
+ (id)_ageStringWithStartAge:(long long)arg1 endAge:(long long)arg2;
+ (id)ageStringForPeopleNode:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)ageStringForPeopleNode:(id)arg1 date:(id)arg2;
+ (id)nameStringForPeopleNodes:(id)arg1 includeMe:(_Bool)arg2 allowUnnamed:(_Bool)arg3 allowedGroupsFormat:(unsigned long long)arg4 insertLineBreaks:(_Bool)arg5;
+ (id)nameStringForPeopleNodes:(id)arg1 includeMe:(_Bool)arg2 insertLineBreaks:(_Bool)arg3;
+ (id)beautifiedLocationStringWithPeopleNode:(id)arg1 peopleAddressEdge:(id)arg2 insertLineBreak:(_Bool)arg3;

@end


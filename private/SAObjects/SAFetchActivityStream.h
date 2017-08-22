//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SAFetchActivityStream : SABaseClientBoundCommand <SAAceSerializable>
{
}

+ (id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2;
+ (id)fetchActivityStream;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *visibility;
@property(copy, nonatomic) NSDate *toDate;
@property(copy, nonatomic) NSString *taskType;
@property(copy, nonatomic) NSArray *streamTypes;
@property(copy, nonatomic) NSString *sortBy;
@property(copy, nonatomic) NSDictionary *matchingMetadataKeysAndStringValues;
@property(copy, nonatomic) NSArray *matchingMetadataKeys;
@property(copy, nonatomic) NSNumber *limit;
@property(copy, nonatomic) NSDate *fromDate;
@property(nonatomic) _Bool ascending;
@property(copy, nonatomic) NSString *activityType;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


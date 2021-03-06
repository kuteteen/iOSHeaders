//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSDate, NSUUID;

@protocol HDSensorDatum <NSObject, NSSecureCoding>
- (NSDate *)endDate;
- (NSDate *)startDate;

@optional
- (NSUUID *)sourceId;
- (long long)recordID;
@end


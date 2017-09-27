//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDate, NSNumber, NSString;

@interface SFAppleIDValidationRecord : NSObject <NSSecureCoding>
{
    NSData *_data;
    NSString *_identifier;
    NSDate *_nextCheckDate;
    NSDate *_startDate;
    double _suggestedValidInterval;
    NSNumber *_version;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(nonatomic) double suggestedValidInterval; // @synthesize suggestedValidInterval=_suggestedValidInterval;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSDate *nextCheckDate; // @synthesize nextCheckDate=_nextCheckDate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needsUpdate;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToValidationRecord:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


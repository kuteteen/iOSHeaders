//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableArray, NSNumber, NSString;

@interface ASDJobManifest : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_activities;
    long long _manifestType;
    NSNumber *_purchaseID;
    NSString *_storeCorrelationID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
@property(copy, nonatomic) NSNumber *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(readonly, nonatomic) long long manifestType; // @synthesize manifestType=_manifestType;
- (void).cxx_destruct;
- (id)_generateIdentifier;
- (void)_addActivity:(id)arg1 withIdentifier:(id)arg2 persistentID:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)addActivity:(id)arg1 withIdentifier:(id)arg2;
- (void)enumerateActivitiesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)count;
- (id)addActivity:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithManifestType:(long long)arg1;
- (id)init;

@end


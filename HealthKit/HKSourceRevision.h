//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKSource, NSString;

@interface HKSourceRevision : NSObject <NSSecureCoding, NSCopying>
{
    HKSource *_source;
    NSString *_version;
    NSString *_productType;
    CDStruct_f6aba300 _operatingSystemVersion;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, copy) NSString *productType; // @synthesize productType=_productType;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) HKSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (void)_setVersion:(id)arg1;
- (void)_setSource:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSource:(id)arg1 version:(id)arg2;
- (id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(CDStruct_f6aba300)arg4;
- (id)_initWithSource:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSUUID;

@interface VNObservation : NSObject <NSCopying, NSSecureCoding>
{
    float _confidence;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


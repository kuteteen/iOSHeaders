//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLPlacemark;

@interface INSpatialEventTrigger : NSObject
{
    CLPlacemark *_placemark;
    long long _event;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) long long event; // @synthesize event=_event;
@property(readonly) CLPlacemark *placemark; // @synthesize placemark=_placemark;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPlacemark:(id)arg1 event:(long long)arg2;

@end

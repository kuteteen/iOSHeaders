//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@interface DMFSetInterfaceOrientationRequest : CATTaskRequest
{
    _Bool _lockOrientation;
    unsigned long long _interfaceOrientation;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) _Bool lockOrientation; // @synthesize lockOrientation=_lockOrientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


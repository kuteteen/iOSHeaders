//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class DMFOSUpdate;

@interface DMFFetchAvailableOSUpdatesResultObject : CATTaskResultObject
{
    DMFOSUpdate *_update;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) DMFOSUpdate *update; // @synthesize update=_update;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdate:(id)arg1;
- (id)init;

@end


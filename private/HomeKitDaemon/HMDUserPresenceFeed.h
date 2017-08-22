//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDUser, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMDUserPresenceFeed : HMFObject
{
    HMDUser *_user;
    HMDDevice *_residentDevice;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    HMUserPresenceCompute *_presenceComputeStatus;
    HMDUserPresenceRegion *_presenceRegion;
    HMDUserPresenceUpdateReason *_reason;
}

@property(readonly, nonatomic) HMDUserPresenceUpdateReason *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDUserPresenceRegion *presenceRegion; // @synthesize presenceRegion=_presenceRegion;
@property(readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // @synthesize presenceComputeStatus=_presenceComputeStatus;
@property(readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property(readonly, nonatomic) __weak HMDDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
@property(readonly, nonatomic) __weak HMDUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithUser:(id)arg1 residentDevice:(id)arg2 presenceAuthStatus:(id)arg3 presenceComputeStatus:(id)arg4 presenceRegion:(id)arg5 reason:(id)arg6;

@end


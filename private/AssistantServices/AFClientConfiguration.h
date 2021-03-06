//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AFAudioPlaybackRequest;

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isDeviceInSetupFlow;
    _Bool _isDeviceInCarDNDMode;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest; // @synthesize twoShotAudioPlaybackRequest=_twoShotAudioPlaybackRequest;
@property(readonly, copy, nonatomic) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest; // @synthesize tapToSiriAudioPlaybackRequest=_tapToSiriAudioPlaybackRequest;
@property(readonly, nonatomic) _Bool isDeviceInCarDNDMode; // @synthesize isDeviceInCarDNDMode=_isDeviceInCarDNDMode;
@property(readonly, nonatomic) _Bool isDeviceInSetupFlow; // @synthesize isDeviceInSetupFlow=_isDeviceInSetupFlow;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithIsDeviceInSetupFlow:(_Bool)arg1 isDeviceInCarDNDMode:(_Bool)arg2 tapToSiriAudioPlaybackRequest:(id)arg3 twoShotAudioPlaybackRequest:(id)arg4;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlaybackRequestEnvironment.h>

@class MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, NSString;

@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment
{
}

@property(copy, nonatomic) NSString *requestingBundleVersion; // @dynamic requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @dynamic requestingBundleIdentifier;
@property(copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // @dynamic privateListeningStateSource;
@property(copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties; // @dynamic delegationProperties;
@property(copy, nonatomic) NSString *clientVersion; // @dynamic clientVersion;
@property(copy, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


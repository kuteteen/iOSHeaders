//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HKProfileIdentifier, NSString;

__attribute__((visibility("hidden")))
@interface HKServerConfiguration : NSObject <NSSecureCoding>
{
    unsigned int _applicationSDKVersion;
    NSString *_debugIdentifier;
    HKProfileIdentifier *_profileIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) HKProfileIdentifier *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(nonatomic) unsigned int applicationSDKVersion; // @synthesize applicationSDKVersion=_applicationSDKVersion;
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


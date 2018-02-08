//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFInstallAppRequest.h>

@class NSDictionary, NSString;

@interface DMFMDMv1InstallAppRequest : DMFInstallAppRequest
{
    _Bool _manage;
    NSString *_redemptionCode;
    NSString *_originator;
    unsigned long long _managementOptions;
    NSString *_VPNUUIDString;
    NSDictionary *_configuration;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *VPNUUIDString; // @synthesize VPNUUIDString=_VPNUUIDString;
@property(nonatomic) unsigned long long managementOptions; // @synthesize managementOptions=_managementOptions;
@property(nonatomic) _Bool manage; // @synthesize manage=_manage;
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(copy, nonatomic) NSString *redemptionCode; // @synthesize redemptionCode=_redemptionCode;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


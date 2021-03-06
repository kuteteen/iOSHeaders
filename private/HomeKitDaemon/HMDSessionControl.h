//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraTLVBase.h>

#import "HMDCameraTLVCreateParse.h"
#import "NSSecureCoding.h"

@class NSUUID;

@interface HMDSessionControl : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding>
{
    unsigned long long _controlCommand;
    NSUUID *_sessionID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) unsigned long long controlCommand; // @synthesize controlCommand=_controlCommand;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithCommand:(unsigned long long)arg1 sessionIdentifier:(id)arg2;

@end


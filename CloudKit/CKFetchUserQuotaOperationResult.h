//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperationResult.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@interface CKFetchUserQuotaOperationResult : CKOperationResult <NSSecureCoding>
{
    unsigned long long _quotaAvailable;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)CKPropertiesDescription;

@end


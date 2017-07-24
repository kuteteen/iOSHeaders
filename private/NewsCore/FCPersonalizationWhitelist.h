//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NTPBPersonalizationWhitelist;

@interface FCPersonalizationWhitelist : NSObject <NSSecureCoding, NSCopying>
{
    NTPBPersonalizationWhitelist *_pbWhitelist;
    NSSet *_portraitDisabledTagIDs;
    NSDictionary *_whitelist;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *whitelist; // @synthesize whitelist=_whitelist;
@property(retain, nonatomic) NSSet *portraitDisabledTagIDs; // @synthesize portraitDisabledTagIDs=_portraitDisabledTagIDs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSDictionary *optionalTags;
@property(readonly, nonatomic) NSDictionary *defaultTags;
- (id)init;
- (id)initWithPBPersonalizationWhitelist:(id)arg1;

@end

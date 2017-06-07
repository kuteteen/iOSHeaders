//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray;

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    _Bool _enabled;
    long long _cellularFallbackFlags;
    NSArray *_pathRules;
    NSArray *_payloadAppRules;
}

+ (id)copyAggregatePathRules;
+ (_Bool)supportsSecureCoding;
@property(copy) NSArray *payloadAppRules; // @synthesize payloadAppRules=_payloadAppRules;
@property(copy) NSArray *pathRules; // @synthesize pathRules=_pathRules;
@property long long cellularFallbackFlags; // @synthesize cellularFallbackFlags=_cellularFallbackFlags;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
@property(readonly) _Bool hasNonDefaultRules;
- (id)copyPathRuleSigningIdentifiers;
- (_Bool)removePathRuleBySigningIdentifier:(id)arg1;
- (id)copyPathRuleBySigningIdentifier:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


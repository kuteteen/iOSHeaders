//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AFAccount, NSNumber, NSString;

@interface AFUISiriSessionInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_assistantVersion;
    AFAccount *_activeAccount;
    NSNumber *_userAccountCount;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *userAccountCount; // @synthesize userAccountCount=_userAccountCount;
@property(copy, nonatomic) AFAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
@property(copy, nonatomic) NSString *assistantVersion; // @synthesize assistantVersion=_assistantVersion;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;
- (id)_strippedInfo;
- (_Bool)applyInfo:(id)arg1;
- (id)_setPropertyValue:(id)arg1 withSelector:(SEL)arg2;
- (id)setUserAccountCountGenerateLightweightInfo:(long long)arg1;
- (id)setActiveAccountAndGenerateLightweightInfo:(id)arg1;
- (id)setAssistantVersionAndGenerateLightweightInfo:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray, NSString, NSURL;

@interface SPApplication : NSObject <NSSecureCoding>
{
    _Bool _isWebClip;
    NSString *_displayName;
    NSString *_displayIdentifier;
    NSString *_longDisplayName;
    NSMutableArray *_keywords;
    NSURL *_URL;
    NSString *_shortVersion;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isWebClip; // @synthesize isWebClip=_isWebClip;
@property(retain, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *longDisplayName; // @synthesize longDisplayName=_longDisplayName;
@property(retain, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
- (void).cxx_destruct;
- (void)copySearchFoundationResult:(id)arg1;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) _Bool displayNameLoaded;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


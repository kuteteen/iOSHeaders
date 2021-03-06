//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding>
{
    _Bool _shouldCache;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDate *_expiresAt;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache=_shouldCache;
@property(retain, nonatomic) NSDate *expiresAt; // @synthesize expiresAt=_expiresAt;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end


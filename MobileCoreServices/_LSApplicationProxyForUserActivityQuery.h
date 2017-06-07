//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/_LSBundleQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyForUserActivityQuery : _LSBundleQuery
{
    NSString *_domainName;
    NSString *_activityType;
}

+ (_Bool)supportsSecureCoding;
+ (id)queryWithActivityType:(id)arg1;
+ (id)queryWithDomainName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/_LSBundleQuery.h>

__attribute__((visibility("hidden")))
@interface _LSCurrentBundleProxyQuery : _LSBundleQuery
{
}

+ (_Bool)supportsSecureCoding;
+ (id)currentBundleProxyQuery;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end


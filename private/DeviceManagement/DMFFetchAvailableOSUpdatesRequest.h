//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSString;

@interface DMFFetchAvailableOSUpdatesRequest : CATTaskRequest
{
    NSString *_productVersion;
}

+ (Class)whitelistedClassForResultObject;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


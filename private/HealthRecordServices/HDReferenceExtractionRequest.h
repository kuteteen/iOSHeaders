//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSURL;

@interface HDReferenceExtractionRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_resources;
    NSArray *_FHIRResourceData;
    NSURL *_serverBaseURL;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSURL *serverBaseURL; // @synthesize serverBaseURL=_serverBaseURL;
@property(readonly, copy, nonatomic) NSArray *FHIRResourceData; // @synthesize FHIRResourceData=_FHIRResourceData;
@property(readonly, copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResources:(id)arg1 FHIRResourceData:(id)arg2 serverBaseURL:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


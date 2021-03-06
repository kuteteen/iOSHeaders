//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "NWPrettyDescription.h"

@class NSData, NSObject<OS_nw_endpoint>, NSString, NWInterface;

@interface NWEndpoint : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>
{
    NSObject<OS_nw_endpoint> *_internalEndpoint;
}

+ (id)endpointWithProtocolBufferData:(id)arg1;
+ (_Bool)supportsResolverCallback;
+ (id)endpointWithCEndpoint:(id)arg1;
+ (id)endpointWithInternalEndpoint:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (Class)copyClassForEndpointType:(int)arg1;
+ (unsigned int)endpointType;
@property(retain, nonatomic) NSObject<OS_nw_endpoint> *internalEndpoint; // @synthesize internalEndpoint=_internalEndpoint;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)createProtocolBufferObject;
@property(nonatomic) unsigned short alternatePort;
@property(retain, nonatomic) NSString *parentEndpointDomain;
@property(retain, nonatomic) NSData *txtRecord;
@property(retain, nonatomic) NWInterface *interface;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)copyCEndpoint;
- (id)encodedData;
- (id)initWithEncodedData:(id)arg1;
- (void)resolveEndpointWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


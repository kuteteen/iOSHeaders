//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNFaceprintModel-Protocol.h>

@class NSData, NSString;

@interface VNFaceprint : NSObject <VNFaceprintModel, NSSecureCoding, NSCopying>
{
    unsigned int _platform;
    unsigned int _profile;
    NSData *_faceprint;
    NSString *_key;
    NSString *_faceprintInputPath;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *faceprintInputPath; // @synthesize faceprintInputPath=_faceprintInputPath;
@property(nonatomic) unsigned int profile; // @synthesize profile=_profile;
@property(nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSData *faceprint; // @synthesize faceprint=_faceprint;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)computeDistanceToFaceprint:(id)arg1 withDistanceFunction:(long long)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init_CVML_MIGRATION_ONLY_WithData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


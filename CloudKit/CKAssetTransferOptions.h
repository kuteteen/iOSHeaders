//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_sparseAware;
    NSNumber *_shouldFetchAssetContent;
    NSNumber *_shouldFetchAssetContentInMemory;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(copy, nonatomic) NSNumber *shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(copy, nonatomic) NSNumber *sparseAware; // @synthesize sparseAware=_sparseAware;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


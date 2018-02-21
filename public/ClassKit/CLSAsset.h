//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import "CLSRelationable.h"

@class NSString, NSURL;

@interface CLSAsset : CLSObject <CLSRelationable>
{
    NSURL *_url;
    _Bool _original;
    _Bool __uploaded;
    NSString *_ownerPersonID;
    NSString *_brItemID;
    NSString *_brOwnerName;
    NSString *_brZoneName;
    NSString *_brShareName;
    NSString *_ubiquitousContainerName;
    NSString *_relativePathWithinContainer;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
@property(nonatomic) _Bool _uploaded; // @synthesize _uploaded=__uploaded;
@property(retain, nonatomic) NSString *relativePathWithinContainer; // @synthesize relativePathWithinContainer=_relativePathWithinContainer;
@property(retain, nonatomic) NSString *ubiquitousContainerName; // @synthesize ubiquitousContainerName=_ubiquitousContainerName;
@property(retain, nonatomic) NSString *brShareName; // @synthesize brShareName=_brShareName;
@property(retain, nonatomic) NSString *brZoneName; // @synthesize brZoneName=_brZoneName;
@property(retain, nonatomic) NSString *brOwnerName; // @synthesize brOwnerName=_brOwnerName;
@property(retain, nonatomic) NSString *brItemID; // @synthesize brItemID=_brItemID;
@property(nonatomic, getter=isOriginal) _Bool original; // @synthesize original=_original;
@property(retain, nonatomic) NSString *ownerPersonID; // @synthesize ownerPersonID=_ownerPersonID;
- (void).cxx_destruct;
- (void)urlSuitableForOpeningWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)deleteFile:(id *)arg1;
- (_Bool)createShareIfNeeded:(id *)arg1;
- (_Bool)fetchUsersAndAddToShare:(id)arg1 error:(id *)arg2;
- (id)uploadFileIfNeeded:(id *)arg1;
- (void)willSaveObject;
- (_Bool)validateObject:(id *)arg1;
@property(nonatomic, getter=isUploaded) _Bool uploaded;
@property(retain, nonatomic) NSURL *url;
- (void)mergeWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/_UTConcreteType.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UTDeclaredType : _UTConcreteType
{
    NSObject<OS_dispatch_queue> *_additionalInfoQueue;
    unsigned int _flags;
    unsigned int _unit;
    NSNumber *_version;
    NSString *_unlocalizedDescription;
    NSString *_localizedDescription;
    NSDictionary *_localizedDescriptionDictionary;
    NSData *_declaringBundleBookmark;
    NSString *_declaringBundleDelegate;
    NSURL *_declaringBundleURL;
    NSString *_kextName;
    NSDictionary *_tagSpecification;
    NSArray *_conformsTo;
    NSArray *_iconFiles;
    NSURL *_parentIconURL;
    NSString *_referenceURLString;
}

+ (_Bool)supportsSecureCoding;
- (id)_kernelExtensionName;
- (id)_unlocalizedDescription;
- (id)parentIdentifiers;
- (id)tagSpecification;
- (id)version;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 checkingParents:(_Bool)arg2;
- (_Bool)_isWildcard;
- (id)referenceURL;
- (id)_iconURL;
- (id)_localizedDescriptionDictionary;
- (_Bool)_isAppleInternal;
- (_Bool)_isPublic;
- (_Bool)_isActive;
- (_Bool)isDeclared;
- (id)declaration;
- (id)declaringBundleURL;
- (id)initWithContext:(struct LSContext *)arg1 UTTypeID:(unsigned int)arg2 UTTypeData:(const CDStruct_b8194125 *)arg3;
- (id)_iconURLCheckingParents:(_Bool)arg1;
- (_Bool)validateCollectionTypes;
- (_Bool)needsWorkaroundFor22092605;

@end


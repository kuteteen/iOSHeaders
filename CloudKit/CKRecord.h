//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordKeyValueSetting-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKEncryptedData, CKEncryptedRecordValueStore, CKRecordID, CKRecordValueStore, CKReference, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSURL;
@protocol CKRecordKeyValueSetting;

@interface CKRecord : NSObject <CKRecordKeyValueSetting, NSSecureCoding, NSCopying>
{
    _Bool _hasUpdatedShare;
    _Bool _hasUpdatedParent;
    _Bool _trackChanges;
    _Bool _knownToServer;
    _Bool _wasCached;
    _Bool _serializeProtectionData;
    _Bool _wantsPublicSharingKey;
    _Bool _wantsChainPCS;
    _Bool _useLightweightPCS;
    NSString *_recordType;
    CKRecordID *_recordID;
    CKRecordID *_creatorUserRecordID;
    NSDate *_creationDate;
    CKRecordID *_lastModifiedUserRecordID;
    NSDate *_modificationDate;
    CKReference *_share;
    CKReference *_parent;
    CKContainerID *_containerID;
    CKReference *_previousShare;
    CKReference *_previousParent;
    CKEncryptedData *_chainPrivateKey;
    CKEncryptedData *_mutableEncryptedPSK;
    NSData *_chainProtectionInfo;
    NSData *_chainParentPublicKeyID;
    NSArray *_tombstonedPublicKeyIDs;
    NSURL *_mutableURL;
    CKRecordValueStore *_valueStore;
    CKEncryptedRecordValueStore *_encryptedValueStore;
    NSString *_modifiedByDevice;
    NSString *_etag;
    NSArray *_conflictLoserEtags;
    NSData *_zoneishKeyID;
    NSData *_protectionData;
    NSString *_previousProtectionEtag;
    NSString *_protectionEtag;
    NSString *_zoneProtectionEtag;
    NSString *_shareEtag;
    NSString *_routingKey;
    NSString *_baseToken;
    long long _permission;
    NSDictionary *_pluginFields;
    NSString *_previousProtectionEtagFromUnitTest;
    NSData *_pcsKeyID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)accessInstanceVariablesDirectly;
+ (id)shareURLWithShortToken:(id)arg1 shareTitle:(id)arg2 shareType:(id)arg3 containerID:(id)arg4;
+ (id)decryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)encryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)fullTokenFromBaseToken:(id)arg1 privateToken:(id)arg2;
+ (id)recordWithDuplicatedPackagesOfRecord:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSData *pcsKeyID; // @synthesize pcsKeyID=_pcsKeyID;
@property(retain, nonatomic) NSString *previousProtectionEtagFromUnitTest; // @synthesize previousProtectionEtagFromUnitTest=_previousProtectionEtagFromUnitTest;
@property(copy, nonatomic) NSDictionary *pluginFields; // @synthesize pluginFields=_pluginFields;
@property long long permission; // @synthesize permission=_permission;
@property(nonatomic) _Bool useLightweightPCS; // @synthesize useLightweightPCS=_useLightweightPCS;
@property(nonatomic) _Bool wantsChainPCS; // @synthesize wantsChainPCS=_wantsChainPCS;
@property(nonatomic) _Bool wantsPublicSharingKey; // @synthesize wantsPublicSharingKey=_wantsPublicSharingKey;
@property(retain, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property(retain, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property(retain, nonatomic) NSString *zoneProtectionEtag; // @synthesize zoneProtectionEtag=_zoneProtectionEtag;
@property(retain, nonatomic) NSString *protectionEtag; // @synthesize protectionEtag=_protectionEtag;
@property(retain, nonatomic) NSString *previousProtectionEtag; // @synthesize previousProtectionEtag=_previousProtectionEtag;
@property(retain, nonatomic) NSData *protectionData; // @synthesize protectionData=_protectionData;
@property(retain, nonatomic) NSData *zoneishKeyID; // @synthesize zoneishKeyID=_zoneishKeyID;
@property(nonatomic) _Bool serializeProtectionData; // @synthesize serializeProtectionData=_serializeProtectionData;
@property(nonatomic) _Bool wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic, getter=isKnownToServer) _Bool knownToServer; // @synthesize knownToServer=_knownToServer;
@property(retain, nonatomic) NSArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(copy, nonatomic) NSString *modifiedByDevice; // @synthesize modifiedByDevice=_modifiedByDevice;
@property(nonatomic) _Bool trackChanges; // @synthesize trackChanges=_trackChanges;
@property(retain, nonatomic) CKEncryptedRecordValueStore *encryptedValueStore; // @synthesize encryptedValueStore=_encryptedValueStore;
@property(retain, nonatomic) CKRecordValueStore *valueStore; // @synthesize valueStore=_valueStore;
@property(copy, nonatomic) NSURL *mutableURL; // @synthesize mutableURL=_mutableURL;
@property(retain, nonatomic) NSArray *tombstonedPublicKeyIDs; // @synthesize tombstonedPublicKeyIDs=_tombstonedPublicKeyIDs;
@property(retain, nonatomic) NSData *chainParentPublicKeyID; // @synthesize chainParentPublicKeyID=_chainParentPublicKeyID;
@property(retain, nonatomic) NSData *chainProtectionInfo; // @synthesize chainProtectionInfo=_chainProtectionInfo;
@property(retain, nonatomic) CKEncryptedData *mutableEncryptedPSK; // @synthesize mutableEncryptedPSK=_mutableEncryptedPSK;
@property(retain, nonatomic) CKEncryptedData *chainPrivateKey; // @synthesize chainPrivateKey=_chainPrivateKey;
@property(nonatomic) _Bool hasUpdatedParent; // @synthesize hasUpdatedParent=_hasUpdatedParent;
@property(retain, nonatomic) CKReference *previousParent; // @synthesize previousParent=_previousParent;
@property(nonatomic) _Bool hasUpdatedShare; // @synthesize hasUpdatedShare=_hasUpdatedShare;
@property(retain, nonatomic) CKReference *previousShare; // @synthesize previousShare=_previousShare;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(copy, nonatomic) CKReference *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) CKReference *share; // @synthesize share=_share;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) CKRecordID *lastModifiedUserRecordID; // @synthesize lastModifiedUserRecordID=_lastModifiedUserRecordID;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) CKRecordID *creatorUserRecordID; // @synthesize creatorUserRecordID=_creatorUserRecordID;
@property(copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (void).cxx_destruct;
- (void)claimPackagesWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removePackages;
- (void)releasePackages;
@property(readonly, nonatomic) unsigned long long assetDiskSize;
@property(readonly, nonatomic) unsigned long long assetCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (void)setParentReferenceFromRecordID:(id)arg1;
- (void)setParentReferenceFromRecord:(id)arg1;
- (void)CKAssignToContainerWithID:(id)arg1;
@property(readonly, nonatomic) _Bool hasModifiedEncryptedData;
@property(readonly, nonatomic) _Bool hasEncryptedData;
@property(readonly, nonatomic) _Bool hasPropertiesRequiringDecryption;
@property(readonly, nonatomic) _Bool hasModifiedPropertiesRequiringEncryption;
@property(readonly, nonatomic) _Bool hasPropertiesRequiringEncryption;
@property(readonly, nonatomic) _Bool containsPackageValues;
@property(readonly, nonatomic) _Bool containsAssetValues;
- (_Bool)_checkProperties:(_Bool)arg1 encryptedStore:(_Bool)arg2 withValueCheckBlock:(CDUnknownBlockType)arg3;
- (id)allTokens;
- (id)_allStrings;
- (id)allKeys;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)_validateRecordType:(id)arg1;
- (void)_validateRecordName:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, copy, nonatomic) NSString *recordChangeTag;
- (void)resetChangedKeys;
- (id)changedKeys;
@property(readonly, nonatomic) id <CKRecordKeyValueSetting> valuesByKey;
@property(readonly, nonatomic) id <CKRecordKeyValueSetting> encryptedValuesByKey;
@property(retain, nonatomic) NSSet *changedKeysSet;
@property(readonly, nonatomic) NSDictionary *originalValues;
@property(readonly, nonatomic) NSDictionary *values;
@property(readonly, nonatomic) unsigned long long size;
- (unsigned long long)_sizeOfRecordValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)_sizeOfRecordID:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *shortToken;
- (id)decryptFullToken:(id)arg1;
@property(readonly, nonatomic) NSData *encryptedFullTokenData;
@property(readonly, nonatomic) NSData *shortSharingTokenHashData;
- (id)shortSharingToken;
@property(readonly, nonatomic) NSData *shortSharingTokenData;
@property(readonly, nonatomic) NSString *fullToken;
@property(readonly, nonatomic) NSString *privateToken;
@property(readonly, nonatomic) NSData *encryptedPublicSharingKey;
@property(retain, nonatomic) NSData *mutableEncryptedPublicSharingKeyData;
@property(retain, nonatomic) CKEncryptedData *mutableEncryptedPublicSharingKey;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


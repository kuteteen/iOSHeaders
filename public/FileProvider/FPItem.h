//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSFileProviderItem-Protocol.h>
#import <FileProvider/NSFileProviderItem_Private-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class FPItemID, NSArray, NSData, NSDate, NSDictionary, NSError, NSNumber, NSPersonNameComponents, NSProgress, NSString, NSURL;

@interface FPItem : NSObject <NSFileProviderItem_Private, NSFileProviderItem, NSCopying, NSSecureCoding>
{
    NSProgress *_progress;
    _Bool _downloading;
    _Bool _mostRecentVersionDownloaded;
    _Bool _uploaded;
    _Bool _uploading;
    _Bool _trashed;
    _Bool _shared;
    _Bool _sharedByCurrentUser;
    _Bool _supportsMostRecentVersionDownloaded;
    _Bool _offline;
    _Bool _isUbiquitous;
    _Bool _isContainer;
    _Bool _hidden;
    _Bool _downloaded;
    _Bool _pending;
    NSString *_itemIdentifier;
    NSString *_domainIdentifier;
    NSString *_parentItemIdentifier;
    NSDate *_contentModificationDate;
    NSError *_downloadingError;
    NSError *_uploadingError;
    NSNumber *_childItemCount;
    unsigned long long _capabilities;
    NSDictionary *_userInfo;
    NSNumber *_documentSize;
    NSDate *_creationDate;
    NSString *_typeIdentifier;
    NSData *_versionIdentifier;
    NSPersonNameComponents *_ownerNameComponents;
    NSPersonNameComponents *_mostRecentEditorNameComponents;
    NSNumber *_isDownloadRequested;
    NSString *_sharingPermissions;
    NSString *_containerDisplayName;
    NSString *_filename;
    NSString *_appContainerBundleIdentifier;
    NSString *_formerIdentifier;
    NSNumber *_hasUnresolvedConflicts;
    NSURL *_fileURL;
    NSString *_spotlightDomainIdentifier;
    unsigned long long _state;
    NSString *_placeholdIdentifier;
    NSArray *_hierarchyPath;
    NSString *_displayName;
    NSNumber *_favoriteRank;
    NSDate *_lastUsedDate;
    NSData *_tagData;
    NSString *_providerIdentifier;
}

+ (id)allUbiquitousResourceKeys;
+ (_Bool)supportsSecureCoding;
+ (id)placeholderWithName:(id)arg1 isFolder:(_Bool)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProvider:(id)arg5;
+ (id)placeholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProvider:(id)arg4;
+ (id)generatePlaceholderIdentifierWithOriginalID:(id)arg1;
+ (id)generatePlaceholderIdentifier;
@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(nonatomic, getter=isPending) _Bool pending; // @synthesize pending=_pending;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isDownloaded) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(copy, nonatomic) NSData *tagData; // @synthesize tagData=_tagData;
@property(copy, nonatomic) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(copy, nonatomic) NSNumber *favoriteRank; // @synthesize favoriteRank=_favoriteRank;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSArray *hierarchyPath; // @synthesize hierarchyPath=_hierarchyPath;
@property(nonatomic) NSString *placeholdIdentifier; // @synthesize placeholdIdentifier=_placeholdIdentifier;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSString *spotlightDomainIdentifier; // @synthesize spotlightDomainIdentifier=_spotlightDomainIdentifier;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSNumber *hasUnresolvedConflicts; // @synthesize hasUnresolvedConflicts=_hasUnresolvedConflicts;
@property(retain, nonatomic) NSString *formerIdentifier; // @synthesize formerIdentifier=_formerIdentifier;
@property(copy, nonatomic) NSString *appContainerBundleIdentifier; // @synthesize appContainerBundleIdentifier=_appContainerBundleIdentifier;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) _Bool isContainer; // @synthesize isContainer=_isContainer;
@property(nonatomic, getter=isUbiquitous) _Bool ubiquitous; // @synthesize ubiquitous=_isUbiquitous;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) _Bool supportsMostRecentVersionDownloaded; // @synthesize supportsMostRecentVersionDownloaded=_supportsMostRecentVersionDownloaded;
@property(readonly, nonatomic) NSString *containerDisplayName; // @synthesize containerDisplayName=_containerDisplayName;
@property(readonly, nonatomic) NSString *sharingPermissions; // @synthesize sharingPermissions=_sharingPermissions;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(retain, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents; // @synthesize mostRecentEditorNameComponents=_mostRecentEditorNameComponents;
@property(retain, nonatomic) NSPersonNameComponents *ownerNameComponents; // @synthesize ownerNameComponents=_ownerNameComponents;
@property(nonatomic, getter=isSharedByCurrentUser) _Bool sharedByCurrentUser; // @synthesize sharedByCurrentUser=_sharedByCurrentUser;
@property(nonatomic, getter=isShared) _Bool shared; // @synthesize shared=_shared;
@property(nonatomic, getter=isTrashed) _Bool trashed; // @synthesize trashed=_trashed;
@property(retain, nonatomic) NSData *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSNumber *documentSize; // @synthesize documentSize=_documentSize;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) NSNumber *childItemCount; // @synthesize childItemCount=_childItemCount;
@property(copy, nonatomic) NSError *uploadingError; // @synthesize uploadingError=_uploadingError;
@property(nonatomic, getter=isUploading) _Bool uploading; // @synthesize uploading=_uploading;
@property(nonatomic, getter=isUploaded) _Bool uploaded; // @synthesize uploaded=_uploaded;
@property(copy, nonatomic) NSError *downloadingError; // @synthesize downloadingError=_downloadingError;
@property(nonatomic, getter=isMostRecentVersionDownloaded) _Bool mostRecentVersionDownloaded; // @synthesize mostRecentVersionDownloaded=_mostRecentVersionDownloaded;
@property(nonatomic, getter=isDownloading) _Bool downloading; // @synthesize downloading=_downloading;
@property(copy, nonatomic) NSDate *contentModificationDate; // @synthesize contentModificationDate=_contentModificationDate;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier; // @synthesize parentItemIdentifier=_parentItemIdentifier;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)_downloadingStatus;
- (id)ubiquitousResourceKeysDiffAgainstItem:(id)arg1;
@property(readonly, nonatomic) NSString *hierarchyPathKey;
@property(readonly, nonatomic) unsigned long long depthInHierarchy;
@property(readonly, nonatomic, getter=isCloudItem) _Bool cloudItem;
@property(readonly, nonatomic) NSProgress *copyingProgress;
@property(readonly, nonatomic) NSProgress *uploadingProgress;
@property(readonly, nonatomic) NSProgress *downloadingProgress;
- (void)setFp_SpotlightDomainIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *fp_spotlightDomainIdentifier;
@property(copy, nonatomic) NSArray *tags;
- (long long)localizedStandardTagsCompare:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) FPItemID *formerItemID;
@property(readonly, nonatomic) FPItemID *itemID;
@property(readonly, nonatomic) unsigned long long folderType;
@property(readonly, nonatomic) _Bool isFolder;
- (void)setParentItemIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, nonatomic, getter=isWritable) _Bool writable;
@property(readonly, nonatomic, getter=isReadable) _Bool readable;
@property(readonly, nonatomic, getter=fp_isContainer) _Bool fp_isContainer;
@property(readonly, nonatomic, getter=fp_isUbiquitous) _Bool fp_ubiquitous;
@property(readonly, nonatomic) NSString *fp_appContainerBundleIdentifier;
@property(readonly, nonatomic) NSString *fp_domainIdentifier;
- (id)copyAsPending;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVendorItem:(id)arg1 provider:(id)arg2 domain:(id)arg3;
- (id)initWithProvider:(id)arg1 itemIdentifier:(id)arg2 parentItemIdentifier:(id)arg3 filename:(id)arg4 isDirectory:(_Bool)arg5;
- (id)initWithProvider:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 parentItemIdentifier:(id)arg4 filename:(id)arg5 typeIdentifier:(id)arg6;
- (id)initWithSearchableItem:(id)arg1;
- (id)toSearchableItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSNumber *isDownloadRequested; // @synthesize isDownloadRequested=_isDownloadRequested;
@property(readonly) Class superclass;

@end


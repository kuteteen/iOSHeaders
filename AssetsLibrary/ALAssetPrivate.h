//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibrary/ALAssetsLibraryAsset-Protocol.h>

@class ALAssetsLibrary, NSString, PLManagedAsset, PLPhotoLibrary;

__attribute__((visibility("hidden")))
@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset>
{
    ALAssetsLibrary *_library;
    _Bool _isValid;
    PLManagedAsset *_photo;
    PLPhotoLibrary *_photoLibrary;
}

@property(retain, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) PLManagedAsset *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isDeletable) _Bool deletable;
- (void)libraryDidChange;
@property(nonatomic) ALAssetsLibrary *library;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


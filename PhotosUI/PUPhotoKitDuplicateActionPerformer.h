//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUDuplicateActionController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitDuplicateActionPerformer : PUPhotoKitActionPerformer
{
    PUDuplicateActionController *_duplicateActionController;
    long long _action;
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) PUDuplicateActionController *duplicateActionController; // @synthesize duplicateActionController=_duplicateActionController;
- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end


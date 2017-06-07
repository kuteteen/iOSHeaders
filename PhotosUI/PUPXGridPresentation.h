//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXGridPresentation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPXGridPresentation : NSObject <PXGridPresentation>
{
    long long _userInterfaceIdiom;
}

@property long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
- (id)createSceneDebugViewControllerWithAssetCollection:(id)arg1 sceneIdentifier:(id)arg2 hideTabBar:(_Bool)arg3 hideSearch:(_Bool)arg4;
- (_Bool)_isEmpty:(id)arg1;
- (void)createGridViewControllerWithAssets:(id)arg1 withTitle:(id)arg2 hideTabBar:(_Bool)arg3 hideSearch:(_Bool)arg4 containerViewController:(id)arg5 navigationItemDelegate:(id)arg6 andCompletion:(CDUnknownBlockType)arg7;
- (id)initWithUserInterfaceIdiom:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


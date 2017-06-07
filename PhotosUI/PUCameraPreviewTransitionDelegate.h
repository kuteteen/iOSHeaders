//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotosPreviewTransitionDelegate.h>

@class PUScrubberView, UIImage;

__attribute__((visibility("hidden")))
@interface PUCameraPreviewTransitionDelegate : PUPhotosPreviewTransitionDelegate
{
    _Bool _shouldHideScrubber;
    PUScrubberView *_previewScrubber;
    UIImage *_previewSourceImage;
    struct CGRect _previewSourceRect;
}

@property(retain, nonatomic) UIImage *previewSourceImage; // @synthesize previewSourceImage=_previewSourceImage;
@property(nonatomic) struct CGRect previewSourceRect; // @synthesize previewSourceRect=_previewSourceRect;
@property(retain, nonatomic) PUScrubberView *previewScrubber; // @synthesize previewScrubber=_previewScrubber;
@property(nonatomic) _Bool shouldHideScrubber; // @synthesize shouldHideScrubber=_shouldHideScrubber;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end


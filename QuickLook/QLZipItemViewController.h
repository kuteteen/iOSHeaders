//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLDetailItemViewController.h>

@class QLDetailItemViewControllerState;

__attribute__((visibility("hidden")))
@interface QLZipItemViewController : QLDetailItemViewController
{
    unsigned long long _numberOfContainedFiles;
    QLDetailItemViewControllerState *_readyToUnzipState;
    QLDetailItemViewControllerState *_unzippingState;
    QLDetailItemViewControllerState *_unableToUnzipState;
}

- (void).cxx_destruct;
- (void)performAction;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateZipInformation;
- (void)viewDidLoad;

@end


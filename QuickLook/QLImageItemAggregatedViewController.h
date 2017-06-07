//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemAggregatedViewController.h>

@class QLImageItemViewController, QLMarkupImageItemViewController;

__attribute__((visibility("hidden")))
@interface QLImageItemAggregatedViewController : QLItemAggregatedViewController
{
    QLMarkupImageItemViewController *_imageMarkupPreviewController;
    QLImageItemViewController *_imagePreviewController;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (id)_imagePreviewController;
- (id)_imageMarkupPreviewController;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


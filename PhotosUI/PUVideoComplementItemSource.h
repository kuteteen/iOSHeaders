//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/UIActivityItemSource-Protocol.h>

@class NSString, NSURL, PFVideoComplement;

@interface PUVideoComplementItemSource : NSObject <UIActivityItemSource>
{
    NSURL *_bundleURL;
    PFVideoComplement *_videoComplement;
}

- (void).cxx_destruct;
- (id)activityViewControllerSubject:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithVideoComplement:(id)arg1;
- (id)initWithVideoComplementBundleAtURL:(id)arg1;
- (id)_initWithVideoComplement:(id)arg1 bundleAtURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


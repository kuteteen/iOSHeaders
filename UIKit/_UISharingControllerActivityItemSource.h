//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIActivityItemSource-Protocol.h>

@class NSString, UICloudSharingController;

__attribute__((visibility("hidden")))
@interface _UISharingControllerActivityItemSource : NSObject <UIActivityItemSource>
{
    UICloudSharingController *_viewController;
}

@property(retain, nonatomic) UICloudSharingController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class LSApplicationProxy, NSString, UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIDocumentInteractionControllerOpenWithAppActivity : UIActivity
{
    LSApplicationProxy *_appProxy;
    _Bool _appIsOwner;
    NSString *_activityType;
    UIDocumentInteractionController *_documentInteractionController;
}

+ (long long)activityCategory;
@property(readonly, nonatomic) LSApplicationProxy *appProxy; // @synthesize appProxy=_appProxy;
@property(nonatomic) __weak UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityTitle;
- (_Bool)_shouldOpenInPlace;
- (id)activityType;
- (id)initWithApplicationIdentifier:(id)arg1 documentInteractionController:(id)arg2 appIsOwner:(_Bool)arg3;

@end


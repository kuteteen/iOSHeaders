//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class UIViewController;

@interface UIPrintActivity : UIActivity
{
    UIViewController *_wrapperViewController;
}

+ (unsigned long long)_xpcAttributes;
@property(retain) UIViewController *wrapperViewController; // @synthesize wrapperViewController=_wrapperViewController;
- (void).cxx_destruct;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (id)printInteractionController;
- (void)cancelPrintOptions;
- (void)performActivity;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;
- (id)_activityImage;
- (id)activityType;

@end


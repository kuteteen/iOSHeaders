//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplicationExtensionActivity.h>

@class NSString, SLComposeViewController;

@interface UISocialActivity : UIApplicationExtensionActivity
{
    NSString *_builtinActivityType;
    SLComposeViewController *_socialComposeViewController;
}

+ (long long)activityCategory;
@property(retain, nonatomic) SLComposeViewController *socialComposeViewController; // @synthesize socialComposeViewController=_socialComposeViewController;
@property(copy, nonatomic) NSString *builtinActivityType; // @synthesize builtinActivityType=_builtinActivityType;
- (void).cxx_destruct;
- (void)_cleanup;
- (struct CGSize)_thumbnailSize;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (_Bool)_canBeExcludedByActivityViewController:(id)arg1;
- (id)activityType;
- (id)debugDescription;
- (id)initWithActivityType:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UINavigationController, _MPAudioAndSubtitlesController;

@interface MPAudioAndSubtitlesController : UIViewController
{
    _MPAudioAndSubtitlesController *_viewController;
    UINavigationController *_navController;
    UIViewController *_viewControllerForOrientation;
}

@property(nonatomic) __weak UIViewController *viewControllerForOrientation; // @synthesize viewControllerForOrientation=_viewControllerForOrientation;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithAVItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SXKeyValueObserver;

@interface SXFullscreenCanvasViewController : UIViewController
{
    _Bool _visible;
    SXKeyValueObserver *_navigationBarObserver;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) SXKeyValueObserver *navigationBarObserver; // @synthesize navigationBarObserver=_navigationBarObserver;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end


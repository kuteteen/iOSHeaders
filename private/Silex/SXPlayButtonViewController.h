//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SXVideoControlItem.h"

@class NSString, SXMaterialVideoPlayButton;

@interface SXPlayButtonViewController : UIViewController <SXVideoControlItem>
{
    SXMaterialVideoPlayButton *_playButton;
}

@property(readonly, nonatomic) SXMaterialVideoPlayButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)hide:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
@property(readonly, nonatomic) _Bool supportsAutoAppearance;
- (_Bool)isVisible;
@property(readonly, nonatomic) _Bool hideable;
- (void)loadView;
- (id)initWithPlayButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


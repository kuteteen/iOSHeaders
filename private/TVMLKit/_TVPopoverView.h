//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, TVImageProxy, _TVButton, _TVPopoverDescriptor;

@interface _TVPopoverView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _imageLoaded;
    _TVPopoverDescriptor *_popoverDescriptor;
    _TVButton *_tvPopoverButton;
    TVImageProxy *_imageProxy;
}

@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) _TVButton *tvPopoverButton; // @synthesize tvPopoverButton=_tvPopoverButton;
@property(retain, nonatomic) _TVPopoverDescriptor *popoverDescriptor; // @synthesize popoverDescriptor=_popoverDescriptor;
- (void).cxx_destruct;
- (void)_popoverButtonPressed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


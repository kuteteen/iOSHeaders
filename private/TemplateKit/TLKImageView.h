//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "TLKObservable.h"

@class NSString, TLKImage, TLKImageFittingObject, TLKObserver;

@interface TLKImageView : UIImageView <TLKObservable>
{
    TLKImage *_tlkImage;
    unsigned long long _style;
    TLKImageFittingObject *_imageFittingObject;
    TLKObserver *_imageObserver;
}

@property(retain) TLKObserver *imageObserver; // @synthesize imageObserver=_imageObserver;
@property(retain) TLKImageFittingObject *imageFittingObject; // @synthesize imageFittingObject=_imageFittingObject;
@property unsigned long long style; // @synthesize style=_style;
@property(retain) TLKImage *tlkImage; // @synthesize tlkImage=_tlkImage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)observableProperties;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateImageView;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


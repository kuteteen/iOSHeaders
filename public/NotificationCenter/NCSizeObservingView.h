//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol NCSizeObservingViewDelegate;

__attribute__((visibility("hidden")))
@interface NCSizeObservingView : UIView
{
    _Bool _delegateInterestedInSizeChanges;
    id <NCSizeObservingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NCSizeObservingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

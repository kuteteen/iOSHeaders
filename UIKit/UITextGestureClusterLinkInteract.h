//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextGestureCluster.h>

__attribute__((visibility("hidden")))
@interface UITextGestureClusterLinkInteract : UITextGestureCluster
{
    _Bool _isTryingToHighlightLink;
}

- (_Bool)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelInteractionWithLink;
- (_Bool)tapOnLinkWithGesture:(id)arg1;
- (void)longDelayRecognizer:(id)arg1;
- (void)linkTapRecognizer:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (void)_resetForLink;
- (id)initWithView:(id)arg1;

@end


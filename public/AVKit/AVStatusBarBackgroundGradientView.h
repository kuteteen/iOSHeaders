//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface AVStatusBarBackgroundGradientView : UIView
{
    _Bool _showsGradientWhenStatusBarVisible;
    double _gradientOpacity;
}

+ (Class)layerClass;
@property(nonatomic) double gradientOpacity; // @synthesize gradientOpacity=_gradientOpacity;
@property(nonatomic) _Bool showsGradientWhenStatusBarVisible; // @synthesize showsGradientWhenStatusBarVisible=_showsGradientWhenStatusBarVisible;
- (void)_updateGradientOpacity;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end


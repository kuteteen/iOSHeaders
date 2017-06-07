//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView
{
    UIView *_backgroundImage;
    NSDictionary *_preservedLayerValues;
    double _cornerRadius;
    UIView *_contentView;
}

@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)didFinishRotation;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect)arg1 newBounds:(struct CGRect)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateShadowPath;
- (id)init;

@end


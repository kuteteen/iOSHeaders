//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WLKUIScorecardViewDelegate.h"

@class NSArray, NSString, TVImageElement, TVViewElement, UIImage, WLKUIScorecardView, _TVImageView, _WLKUITextBadge;

@interface WLKUISportsOverlayView : UIView <WLKUIScorecardViewDelegate>
{
    _Bool _textBadgeHasMaterial;
    UIImage *_backgroundImageForMaterialRendering;
    TVViewElement *_overlayElement;
    NSArray *_scorecardData;
    TVViewElement *_scorecardElement;
    WLKUIScorecardView *_scorecardView;
    TVViewElement *_textBadgeElement;
    _WLKUITextBadge *_textBadge;
    _TVImageView *_logo;
    TVImageElement *_logoElement;
}

+ (id)sportsOverlayViewFromElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) TVImageElement *logoElement; // @synthesize logoElement=_logoElement;
@property(retain, nonatomic) _TVImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) _WLKUITextBadge *textBadge; // @synthesize textBadge=_textBadge;
@property(retain, nonatomic) TVViewElement *textBadgeElement; // @synthesize textBadgeElement=_textBadgeElement;
@property(nonatomic) _Bool textBadgeHasMaterial; // @synthesize textBadgeHasMaterial=_textBadgeHasMaterial;
@property(retain, nonatomic) WLKUIScorecardView *scorecardView; // @synthesize scorecardView=_scorecardView;
@property(retain, nonatomic) TVViewElement *scorecardElement; // @synthesize scorecardElement=_scorecardElement;
@property(copy, nonatomic) NSArray *scorecardData; // @synthesize scorecardData=_scorecardData;
@property(retain, nonatomic) TVViewElement *overlayElement; // @synthesize overlayElement=_overlayElement;
@property(retain, nonatomic) UIImage *backgroundImageForMaterialRendering; // @synthesize backgroundImageForMaterialRendering=_backgroundImageForMaterialRendering;
- (void).cxx_destruct;
- (int)backgroundBlendModeForElementInRow:(long long)arg1 atIndex:(long long)arg2;
- (id)backgroundImageForScorecardViewMaterial:(id)arg1;
- (double)maximumWidthForScorecardView:(id)arg1;
- (double)rowSpacingInScorecardView:(id)arg1;
- (double)maximumInteritemSpacingInScorecardView:(id)arg1;
- (double)minimumInteritemSpacingInScorecardView:(id)arg1;
- (id)viewElementForScorecard:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (long long)numberOfElementsForScorecardView:(id)arg1 inRow:(long long)arg2;
- (long long)numberOfRowsInScorecardView:(id)arg1;
- (long long)styleForScorecardView:(id)arg1;
- (void)_resetTextBadge;
- (id)_materialImageForImage:(id)arg1 forFrame:(struct CGRect)arg2;
- (void)backgroundImageSizeDidChange:(struct CGSize)arg1;
- (void)reset;
- (void)layoutWithElement:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


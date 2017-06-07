//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImplInternal-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying>
{
}

- (id)newRepresentationViewForAction:(id)arg1;
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (id)actionPropertiesAffectingImageViewStyling;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (id)actionPropertiesAffectingLabelStyling;
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;
- (id)actionClassificationLabelColorForViewState:(id)arg1;
- (id)actionClassificationLabelFontForViewState:(id)arg1;
- (id)actionTitleLabelColorForViewState:(id)arg1;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;
- (double)actionTitleLabelMinimumScaleFactor;
- (_Bool)selectionFeedbackEnabled;
- (_Bool)selectByPressGestureRequired;
- (struct UIEdgeInsets)actionSequenceEdgeInsets;
- (double)actionSectionSpacing;
- (double)verticalImageContentSpacing;
- (double)horizontalImageContentSpacing;
- (struct CGSize)minimumActionContentSize;
- (struct UIEdgeInsets)contentMargin;
- (double)contentCornerRadius;
- (struct CGSize)maximumActionGroupContentSize;
- (id)defaultScreen;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


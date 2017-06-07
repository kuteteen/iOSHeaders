//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInterfaceActionConcreteVisualStyle.h>

#import <UIKit/UIInterfaceActionConcreteVisualStyleImpl-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_CarPlay : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>
{
}

- (id)_normalActionTitleLabelColorForViewState:(id)arg1;
- (id)_highlightedActionTitleLabelColorForViewState:(id)arg1;
- (id)_preferredActionFont;
- (id)_regularActionFont;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)actionTitleLabelColorForViewState:(id)arg1;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (_Bool)selectByPressGestureRequired;
- (struct CGSize)minimumActionContentSize;
- (double)verticalImageContentSpacing;
- (double)horizontalImageContentSpacing;
- (struct UIEdgeInsets)contentMargin;
- (double)contentCornerRadius;
- (id)defaultScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


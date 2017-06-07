//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject
{
    ABStyleProvider *_styleProvider;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)customSetEmphasized:(_Bool)arg1 onCell:(id)arg2;
- (_Bool)shouldPropagateStylesThroughUnknownPersonActions;
- (_Bool)shouldPropagateStylesToPickers;
- (double)cardTableViewSectionFooterHeightWhenEditing:(_Bool)arg1;
- (double)cardTableViewSectionHeaderHeightWhenEditing:(_Bool)arg1;
- (id)newCustomCardTableScrollingBackgroundView;
- (id)newCardActionButton;
- (Class)customCardActionCellClass;
- (Class)customCardCellClass;
- (_Bool)shouldUseCardContentProviderWhenAvailable;
- (void)setHighlighted:(_Bool)arg1 onPropertyCell:(id)arg2;
- (long long)unknownModalPresentationStyle;
- (double)distanceBetweenSections;
- (id)newScrollingBackgroundView;
- (void)setIndicatesFaceTimeHistory:(_Bool)arg1 onActionButton:(id)arg2;
- (id)newActionButton;
- (Class)actionCellClass;
- (Class)propertyCellClass;
- (void)dealloc;
- (id)init;

@end


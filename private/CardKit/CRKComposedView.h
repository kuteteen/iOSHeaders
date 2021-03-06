//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CRKComposableView.h"

@class NSArray, NSMutableArray, NSString;

@interface CRKComposedView : UIView <CRKComposableView>
{
    NSMutableArray *_cardSectionSubviews;
}

@property(retain, nonatomic) NSArray *cardSectionSubviews; // @synthesize cardSectionSubviews=_cardSectionSubviews;
- (void).cxx_destruct;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets cardSectionContentMargins;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


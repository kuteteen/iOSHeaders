//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIIndexBarVisualStyle-Protocol.h>

@class NSString, UIIndexBarView;

__attribute__((visibility("hidden")))
@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle>
{
    UIIndexBarView *_indexBarView;
}

@property(nonatomic) __weak UIIndexBarView *indexBarView; // @synthesize indexBarView=_indexBarView;
- (void).cxx_destruct;
- (id)displayEntryFromEntry:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double minLineHeight;
@property(readonly, nonatomic) _Bool overlay;
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool expanded;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

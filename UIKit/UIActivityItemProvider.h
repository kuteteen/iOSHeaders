//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <UIKit/UIActivityItemSource-Protocol.h>

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource>
{
    id _placeholderItem;
    NSString *_activityType;
    id _providedItem;
}

@property(retain, nonatomic) id providedItem; // @synthesize providedItem=_providedItem;
@property(copy, nonatomic, setter=_setActivityType:) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) id placeholderItem; // @synthesize placeholderItem=_placeholderItem;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (_Bool)_shouldExecuteItemOperationForActivity:(id)arg1;
- (void)main;
@property(readonly, nonatomic) id item;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


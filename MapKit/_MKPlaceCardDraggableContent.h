//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;
@protocol UIItemProviderWriting;

@interface _MKPlaceCardDraggableContent : NSObject
{
    _Bool _header;
    int _analyticsTarget;
    UIView *_view;
    id <UIItemProviderWriting> _draggableContent;
}

@property(nonatomic) int analyticsTarget; // @synthesize analyticsTarget=_analyticsTarget;
@property(nonatomic, getter=isHeader) _Bool header; // @synthesize header=_header;
@property(retain, nonatomic) id <UIItemProviderWriting> draggableContent; // @synthesize draggableContent=_draggableContent;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;

@end


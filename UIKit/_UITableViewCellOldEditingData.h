//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIControl, UIRemoveControl, UIView;

__attribute__((visibility("hidden")))
@interface _UITableViewCellOldEditingData : NSObject
{
    UIRemoveControl *_removeControl;
    UIControl *_grabber;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separator;
@property(retain, nonatomic) UIControl *reorderControl; // @synthesize reorderControl=_grabber;
- (void).cxx_destruct;
- (_Bool)dataRequired;

@end


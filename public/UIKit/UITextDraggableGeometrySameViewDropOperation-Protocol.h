//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSAttributedString, UITextRange;

@protocol UITextDraggableGeometrySameViewDropOperation <NSObject>
@property(readonly, nonatomic) unsigned long long operation;
@property(readonly, nonatomic) NSAttributedString *text;
@property(readonly, nonatomic) UITextRange *targetRange;
@property(readonly, nonatomic) NSArray *sourceRanges;
@end

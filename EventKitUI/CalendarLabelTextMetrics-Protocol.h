//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIColor, UIFont;

@protocol CalendarLabelTextMetrics
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) long long textAlignment;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long numberOfLines;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
@end


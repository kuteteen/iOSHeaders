//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class ICMediaTime, ICMediaTimeFormatter;

@interface ICMediaTimeLabel : UILabel
{
    ICMediaTime *_mediaTimeValue;
    ICMediaTimeFormatter *_formatter;
}

@property(retain, nonatomic) ICMediaTimeFormatter *formatter; // @synthesize formatter=_formatter;
@property(copy, nonatomic) ICMediaTime *mediaTimeValue; // @synthesize mediaTimeValue=_mediaTimeValue;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

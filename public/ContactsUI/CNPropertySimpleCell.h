//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleCell : CNPropertyCell
{
    UILabel *_labelLabel;
    UILabel *_valueLabel;
}

@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
- (void).cxx_destruct;
- (id)valueView;
- (id)labelView;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ABDateField;

@protocol ABDateFieldDelegate
- (_Bool)dateFieldShouldClear:(ABDateField *)arg1;
- (void)dateFieldDidBeginEditing:(ABDateField *)arg1;
- (void)dateFieldDidEndEditing:(ABDateField *)arg1;
- (_Bool)dateFieldShouldEndEditing:(ABDateField *)arg1;
- (_Bool)dateFieldShouldBeginEditing:(ABDateField *)arg1;
- (void)dateFieldDateDidChange:(ABDateField *)arg1;
@end


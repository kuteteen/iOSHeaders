//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKFormControl-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKDateTimePicker : NSObject <WKFormControl>
{
    struct RetainPtr<UIDatePicker> _datePicker;
    NSString *_formatString;
    _Bool _shouldRemoveTimeZoneInformation;
    _Bool _isTimeInput;
    WKContentView *_view;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (void)_dateChangeHandler:(id)arg1;
- (void)_dateChanged;
- (void)_dateChangedSetAsString;
- (RetainPtr_6b9d0b10)dateFormatterForPicker;
- (void)_dateChangedSetAsNumber;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (long long)_timeZoneOffsetFromGMT:(id)arg1;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;
- (id)datePicker;

@end


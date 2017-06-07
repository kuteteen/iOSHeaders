//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldDismiss;
    _Bool _shouldAdvanceInputMode;
    _Bool _requiresInputManagerSync;
    _Bool _shouldAdvanceResponder;
    _Bool _shouldPostReturnKeyNotification;
    NSArray *_keyboardOutputs;
    NSString *_primaryLanguage;
    long long _inputModeListTouchPhase;
    double _inputModeListTouchBegan;
    struct CGPoint _inputModeListFromLocation;
    struct CGPoint _inputModeListUpdatePoint;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldPostReturnKeyNotification; // @synthesize shouldPostReturnKeyNotification=_shouldPostReturnKeyNotification;
@property(nonatomic) _Bool shouldAdvanceResponder; // @synthesize shouldAdvanceResponder=_shouldAdvanceResponder;
@property(nonatomic) _Bool requiresInputManagerSync; // @synthesize requiresInputManagerSync=_requiresInputManagerSync;
@property(nonatomic) struct CGPoint inputModeListUpdatePoint; // @synthesize inputModeListUpdatePoint=_inputModeListUpdatePoint;
@property(nonatomic) struct CGPoint inputModeListFromLocation; // @synthesize inputModeListFromLocation=_inputModeListFromLocation;
@property(nonatomic) double inputModeListTouchBegan; // @synthesize inputModeListTouchBegan=_inputModeListTouchBegan;
@property(nonatomic) long long inputModeListTouchPhase; // @synthesize inputModeListTouchPhase=_inputModeListTouchPhase;
@property(copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(nonatomic) _Bool shouldAdvanceInputMode; // @synthesize shouldAdvanceInputMode=_shouldAdvanceInputMode;
@property(nonatomic) _Bool shouldDismiss; // @synthesize shouldDismiss=_shouldDismiss;
@property(retain, nonatomic) NSArray *keyboardOutputs; // @synthesize keyboardOutputs=_keyboardOutputs;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setInputModeList:(long long)arg1 touchBegan:(double)arg2 fromLocation:(struct CGPoint)arg3 updatePoint:(struct CGPoint)arg4;
- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (id)_currentKeyboardOutput;
- (void)_pushNewKeyboardOutput;
- (void)dealloc;

@end


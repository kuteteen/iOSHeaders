//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class TIDocumentState, TITextInputTraits, UITextInputMode;

__attribute__((visibility("hidden")))
@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding>
{
    TIDocumentState *_documentState;
    TITextInputTraits *_textInputTraits;
    UITextInputMode *_documentInputMode;
}

+ (id)stateForKeyboardState:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UITextInputMode *documentInputMode; // @synthesize documentInputMode=_documentInputMode;
@property(retain, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createDocumentStateIfNecessary;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSKeyboard.h"

@class NSString;

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard>
{
    id <IKAppKeyboardBridge> _appBridge;
}

@property(retain, nonatomic) id <IKAppKeyboardBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void).cxx_destruct;
- (void)jsTextDidChange;
@property(copy, nonatomic) NSString *text;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUIButton.h>

@class NSArray, NSString;

@interface SAVCSContentButton : SAUIButton
{
}

+ (id)contentButtonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)contentButton;
@property(copy, nonatomic) NSArray *togglePlayPauseCommands;
@property(copy, nonatomic) NSString *contentType;
@property(copy, nonatomic) NSString *canonicalId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SACFAbstractClientCommand.h>

@class NSDictionary;

@interface SACFFlowCommand : SACFAbstractClientCommand
{
}

+ (id)flowCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)flowCommand;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSDictionary *jsDialogScripts;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface VOSVoiceOverCommandInfo : NSObject
{
    NSDictionary *_brailleCommands;
}

- (void).cxx_destruct;
- (id)localizedNameForCategory:(id)arg1;
- (id)localizedNameForCommand:(id)arg1;
- (id)brailleCommandsForCategory:(id)arg1;
- (id)brailleVoiceOverCategories;
- (void)_loadBrailleCommandsIfNecessary;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CNUI)
- (_Bool)cnui_containsEmojiCharacters;
- (_Bool)cnui_containsNonLatinCharacters;
- (id)cnui_stringByTransliteratingToPhoneticCharactersForProperty:(id)arg1;
- (_Bool)cnui_shouldTransliterateToLatin;
- (_Bool)cnui_shouldUseZhuyinTransliteration;
- (_Bool)cnui_shouldUseJapaneseTransliteration;
- (id)cnui_stringByTransliteratingToKanaAsName:(_Bool)arg1;
- (unsigned int)cnui_firstUTF32Character;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (AXExtensions)
- (struct _NSRange)_axUnit:(unsigned long long)arg1 fromPosition:(long long)arg2 inDirection:(unsigned long long)arg3;
- (struct _NSRange)ax_wordFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct _NSRange)ax_sentenceFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct _NSRange)ax_lineFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct _NSRange)_ax_rangeOfNextUnitWithStartPosition:(long long)arg1 direction:(unsigned long long)arg2 withCharacterSet:(id)arg3;
@end

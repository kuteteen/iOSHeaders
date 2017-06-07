//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
- (id)appendSlashIfNeeded;
- (id)removeSlashIfNeeded;
- (id)safeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)unquote;
- (id)trimChar:(unsigned short)arg1;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFinalChar:(unsigned short)arg1;
- (id)trimCommas;
- (id)trimFirstComma;
- (id)trimFinalComma;
- (id)trimWhiteSpace;
- (id)quote;
@end

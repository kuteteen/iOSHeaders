//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

@interface UIApplication (TSUAdditions)
- (id)tsu_ignoreUserInteractionEventsInfo;
- (id)tsu_newWrapperBeginningIgnoringInteractionEventsSafely;
- (void)tsu_temporarilyEndIgnoringInteractionEventsForToken:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)tsu_endIgnoringInteractionEventsWithToken:(id)arg1;
- (id)tsu_beginIgnoringInteractionEvents;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol _DUIClientSessionDestination;

@protocol _DUIServerDestination
- (oneway void)sawFirstDragEventWithSessionID:(unsigned int)arg1 destination:(id <_DUIClientSessionDestination>)arg2 reply:(void (^)(id <_DUIServerSessionDestination>, PBItemCollection *, NSArray *, unsigned long long))arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Spotlight/SPQueryTask.h>

@class NSArray;

@interface SPZKWSearchQuery : SPQueryTask
{
    NSArray *_mutableSections;
    _Bool _springBoardIsActive;
}

@property _Bool springBoardIsActive; // @synthesize springBoardIsActive=_springBoardIsActive;
- (void).cxx_destruct;
- (id)unsafeSessionEntityString;
- (id)unsafeSections;
- (id)unsafeLocalSuggestions;
- (id)unsafeSuggestions;

@end


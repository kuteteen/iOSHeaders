//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPMediaLibrary, NSString;

@interface MPMediaLibraryConnectionAssertion : NSObject
{
    MPMediaLibrary *_library;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)_initWithMediaLibrary:(id)arg1 identifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView;

@interface _MPModelLibraryRequestItemsQueryOperation : MPAsyncOperation
{
    MPMediaLibraryView *_libraryView;
    CDUnknownBlockType _resultHandler;
    shared_ptr_34add297 _query;
}

@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(nonatomic) shared_ptr_34add297 query; // @synthesize query=_query;
@property(retain, nonatomic) MPMediaLibraryView *libraryView; // @synthesize libraryView=_libraryView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)execute;

@end


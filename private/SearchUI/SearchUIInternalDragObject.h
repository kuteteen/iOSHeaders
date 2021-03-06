//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIItemProviderWriting.h"

@class NSArray, NSString;

@interface SearchUIInternalDragObject : NSObject <UIItemProviderWriting>
{
    id <SearchUIDragObject> _dragObject;
}

+ (id)writableTypeIdentifiersForItemProvider;
@property(retain) id <SearchUIDragObject> dragObject; // @synthesize dragObject=_dragObject;
- (void).cxx_destruct;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (_Bool)shouldShareDragURL;
- (id)initWithDragObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


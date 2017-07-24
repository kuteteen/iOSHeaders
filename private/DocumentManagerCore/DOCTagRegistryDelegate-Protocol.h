//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManagerCore/NSObject-Protocol.h>

@class DOCTag, NSArray, NSString;

@protocol DOCTagRegistryDelegate <NSObject>
@property(nonatomic) _Bool inBatchUpdate;
- (DOCTag *)tagForName:(NSString *)arg1;
- (_Bool)moveTag:(DOCTag *)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)canReplaceTag:(DOCTag *)arg1 withTag:(DOCTag *)arg2;
- (_Bool)replaceTag:(DOCTag *)arg1 withTag:(DOCTag *)arg2;
- (void)removeAllTagsOfType:(long long)arg1;
- (void)removeTags:(NSArray *)arg1;
- (_Bool)insertTag:(DOCTag *)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)addTag:(DOCTag *)arg1;
- (void)addTag:(DOCTag *)arg1 options:(long long)arg2;
- (void)addTags:(NSArray *)arg1 options:(long long)arg2;
- (_Bool)isValidNewTagName:(NSString *)arg1;
@end

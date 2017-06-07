//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Protocol;

@interface CLIntersiloInterface : NSObject
{
    struct map<SEL *, CLIntersiloInterfaceSelectorInfo *, std::__1::less<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, CLIntersiloInterfaceSelectorInfo *>>> _selectors;
    Protocol *_protocol;
}

+ (id)interfaceWithProtocol:(id)arg1 base:(id)arg2;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)getInfoForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)initWithProtocol:(id)arg1 base:(id)arg2;

@end


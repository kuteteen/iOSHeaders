//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext;

__attribute__((visibility("hidden")))
@interface JSObjCClassInfo : NSObject
{
    JSContext *m_context;
    Class m_class;
    _Bool m_block;
    // Error parsing type: ^{OpaqueJSClass={atomic<unsigned int>=AI}^{OpaqueJSClass}^{OpaqueJSClass}^?^?^?^?^?^?^?^?^?^?^?{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{unique_ptr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > >, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > > >={__compressed_pair<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > *, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > > >=^{HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > >}}}{unique_ptr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> > > >, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> > > > > >={__compressed_pair<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> > > > *, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> > > > > >=^{HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> > > >}}}}, name: m_classRef
    struct Weak<JSC::JSObject> m_prototype;
    struct Weak<JSC::JSObject> m_constructor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct JSObject *)prototype;
- (struct JSObject *)constructor;
- (struct JSObject *)wrapperForObject:(id)arg1;
- (pair_bfa3637f)allocateConstructorAndPrototype;
- (void)dealloc;
- (id)initWithContext:(id)arg1 forClass:(Class)arg2;

@end


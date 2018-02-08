//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface CUAppleIDClient : NSObject
{
    struct __SecCertificate *_myCertificate;
    struct __SecIdentity *_myIdentity;
    // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}, name: _mySecretKey
    NSData *_myValidationData;
    struct __SecCertificate *_peerCertificate;
    // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}, name: _peerPublicKey
    _Bool _peerSignatureVerified;
    NSDictionary *_peerValidationDict;
    _Bool _peerValidated;
    NSString *_myAppleID;
    CUAppleIDClient *_myInfoClient;
    NSString *_peerAppleID;
    NSArray *_peerAppleIDs;
    NSData *_peerCertificateData;
    NSData *_peerValidationData;
    NSData *_myCertificateData;
    NSData *_mySecretKeyData;
    NSString *_mySecretKeyType;
}

@property(copy, nonatomic) NSString *mySecretKeyType; // @synthesize mySecretKeyType=_mySecretKeyType;
@property(copy, nonatomic) NSData *mySecretKeyData; // @synthesize mySecretKeyData=_mySecretKeyData;
@property(copy, nonatomic) NSData *myCertificateData; // @synthesize myCertificateData=_myCertificateData;
@property(copy, nonatomic) NSData *peerValidationData; // @synthesize peerValidationData=_peerValidationData;
@property(copy, nonatomic) NSData *peerCertificateData; // @synthesize peerCertificateData=_peerCertificateData;
@property(copy, nonatomic) NSArray *peerAppleIDs; // @synthesize peerAppleIDs=_peerAppleIDs;
@property(copy, nonatomic) NSString *peerAppleID; // @synthesize peerAppleID=_peerAppleID;
@property(retain, nonatomic) CUAppleIDClient *myInfoClient; // @synthesize myInfoClient=_myInfoClient;
@property(copy, nonatomic) NSString *myAppleID; // @synthesize myAppleID=_myAppleID;
- (void).cxx_destruct;
-     // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}24@0:8^@16, name: _getPeerPublicKeyAndReturnError:
- (struct __SecCertificate *)_getPeerCertificateAndReturnError:(id *)arg1;
- (id)copyMyValidationDataAndReturnError:(id *)arg1;
-     // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}24@0:8^@16, name: _getMySecretKeyAndReturnError:
- (struct __SecIdentity *)_getMyIdentityAndReturnError:(id *)arg1;
- (id)copyMyCertificateDataAndReturnError:(id *)arg1;
- (struct __SecCertificate *)_getMyCertificateAndReturnError:(id *)arg1;
- (id)copyMyAppleIDAndReturnError:(id *)arg1;
- (_Bool)verifyBytes:(const void *)arg1 verifyLength:(unsigned long long)arg2 signatureBytes:(const void *)arg3 signatureLength:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)verifyData:(id)arg1 signature:(id)arg2 error:(id *)arg3;
- (_Bool)_validatePeerHashes:(id)arg1;
- (_Bool)validatePeerWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (id)signBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)signData:(id)arg1 error:(id *)arg2;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestSerializer.h"

@class NSString, NSURL;

@interface AFAmazonS3RequestSerializer : AFHTTPRequestSerializer
{
    BOOL _useSSL;
    NSString *_bucket;
    NSString *_region;
    NSString *_sessionToken;
    NSString *_accessKey;
    NSString *_secret;
}

@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property(nonatomic) BOOL useSSL; // @synthesize useSSL=_useSSL;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;
- (id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)preSignedRequestWithRequest:(id)arg1 expiration:(id)arg2 error:(id *)arg3;
- (id)requestBySettingAuthorizationHeadersForRequest:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSURL *endpointURL;
- (void)setAccessKeyID:(id)arg1 secret:(id)arg2;
- (id)init;

@end


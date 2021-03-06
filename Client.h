//
//  Client.m
//  Nio - Notify.io client
//
//  Copyright 2009 GliderLab. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Growl-WithInstaller/GrowlApplicationBridge.h"

@interface Client : NSObject {
	NSString *urlString;
	NSURLConnection *notifyConn;
	NSMutableURLRequest *notifyReq;
	NSURLConnection *iconConn;
	NSDictionary *growlData;
}

@property (nonatomic, retain) NSDictionary *growlData;

- (id)initRemoteHost:(NSString *)urlString;
- (void)makeConnection;
- (void)makeConnection:(NSTimeInterval)delay;

@end

//
//  Simulator.h
//  Sim
//
//  Created by ProbablyInteractive on 7/28/09.
//  Copyright 2009 Probably Interactive. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "iPhoneSimulatorRemoteClient.h"

@class DTiPhoneSimulatorSystemRoot;

@interface Simulator : NSObject <DTiPhoneSimulatorSessionDelegate> {
    NSString *_appPath;
    DTiPhoneSimulatorSystemRoot *_sdk;
	NSNumber *_family;
    DTiPhoneSimulatorSession* _session;
	NSDictionary *_env;
    NSString *_videoPath;
	NSArray *_args;
    CGWindowID _windowID;
    QTMovie *_movie;
    NSTimeInterval _lastInterval;
}

@property (nonatomic, readonly) DTiPhoneSimulatorSession* session;

+ (NSArray *)availableSDKs;

- (id)initWithAppPath:(NSString *)appPath sdk:(NSString *)sdk family:(NSString *)family video:(NSString *)videoPath env:(NSDictionary *)env args:(NSArray *)args;
- (int)launch;
- (void)addScreenshotToMovie;
- (void)end;

@end
//
//  DataSource.h
//  Blocstagram
//
//  Created by Ziggy on 2/9/16.
//  Copyright © 2016 Ziggy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end

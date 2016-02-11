//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Ziggy on 2/11/16.
//  Copyright © 2016 Ziggy. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end

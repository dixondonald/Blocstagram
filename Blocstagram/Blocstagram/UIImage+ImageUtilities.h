//
//  UIImage+ImageUtilities.h
//  Blocstagram
//
//  Created by Ziggy on 3/3/16.
//  Copyright © 2016 Ziggy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)

- (UIImage *) imageWithFixedOrientation;
- (UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *) imageCroppedToRect:(CGRect)cropRect;

@end

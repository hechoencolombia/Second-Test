//
//  ViewController.h
//  iAds
//
//  Created by Alejo on 2014-07-26.
//  Copyright (c) 2014 AlejoApps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>


@interface ViewController : UIViewController<ADBannerViewDelegate>
{
    ADBannerView *adView;
}

@end

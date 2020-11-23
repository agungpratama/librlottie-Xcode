#ifndef CONFIG_H
#define CONFIG_H

// disable JSON assert
#define RAPIDJSON_ASSERT

// enable threading
#if __i386__
// Apple Platform i386 does not have Thread Local support
#else
#define LOTTIE_THREAD_SUPPORT
#endif

// enable logging
//#define LOTTIE_LOGGING_SUPPORT

// enable module building of image loader
//#define LOTTIE_IMAGE_MODULE_SUPPORT


//Disabling cache support to fix the bug that happens when using librlottie with SDWebImage/SDWebImageLottieCoder
//credit to stasmilke's reply
/*
it was caused by passing empty string in lottie_animation_from_data (SDImageLottieCoder.m). you should pass unique value as second argument, because it's used as cache key (or you can disable LOTTIE_CACHE_SUPPORT in librlottie config.h file)
*/
//issue thread: https://github.com/SDWebImage/SDWebImageLottieCoder/issues/4

// enable lottie model caching
//#define LOTTIE_CACHE_SUPPORT

#endif  // CONFIG_H

#include <string>
#include <iostream>

// Forward declaration of Application class
class Application;

// Base class MediaItem
class MediaItem {
public:
    std::string name;
    std::string format;
    int size;

    // Method to share a media item via an application
    virtual void share(Application* app) = 0; // Pure virtual function
};

// Video class
class Video : public MediaItem {
public:
    // Override share method for Video
    void share(Application* app) override {
        std::cout << "Video" << std::endl;
    }
};

// Image class
class Image : public MediaItem {
public:
    // Override share method for Image
    void share(Application* app) override {
        // Implementation of share method for Image
    }
};

// Application class
class Application {
public:
    std::string name;
};

int main() {
    // Create a Video object
    Video myVideo;
    myVideo.name = "Video";
    myVideo.format = "mp4";
    myVideo.size = 500; 

    
    Image myImage;
    myImage.name = "Image";
    myImage.format = "jpeg";
    myImage.size = 2; 

    // Create an Application object
    Application myApp;
    myApp.name = "WhatsApp";

    // Share the media items via the application
    myVideo.share(&myApp);
    myImage.share(&myApp);

    return 0;
}

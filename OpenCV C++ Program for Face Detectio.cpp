#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main()
{
    cv::Mat image = cv::imread("path/to/image.jpg");

    cv::CascadeClassifier faceCascade;
    faceCascade.load("path/to/haarcascade_frontalface_alt.xml");

    std::vector<cv::Rect> faces;
    faceCascade.detectMultiScale(image, faces);

    for (int i = 0; i < faces.size(); i++)
    {
        cv::rectangle(image, faces[i], cv::Scalar(255, 0, 0), 2);
    }

    cv::imshow("Face detection", image);
    cv::waitKey(0);

    return 0;
}

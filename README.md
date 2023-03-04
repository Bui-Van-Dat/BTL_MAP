# BTL_LTUDDD
Thiết kế và tạo ra ứng dụng smart home để điều khiển thông minh các thiết bị có trong ngôi nhà!!
*Thiết lập môi trường 
*Các bước biên dịch
*Kiểm thử chuong trình
##Thiết lập môi trường:
    +Truy cập đường dẫn https://developer.android.com/studio/index.html sau đó nhấn chọn tải phần mềm Android Studio về máy tính.
    +Nhấp đôi chuột vào tập tin Android Studio vừa tải về, sau đó nhấn Next để xác nhận cài đặt Android Studio.
     ![H1](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h1.jpg)
    +Tích chọn tất cả các tùy chọn hiện có bao gồm Android Studio, Android SDK, Android Virtual Device.
     ![H2](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h2.jpg)
    +Chọn I Agree để đồng ý cài đặt Android Studio.
     ![H3](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h3.jpg)
    +Màn hình tiếp theo là lựa chọn nơi lưu trữ, bạn có thể để mặc định và nhấn Next để qua bước kế tiếp.
     ![H4](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h4.jpg)
    +Chọn Install để bắt đầu tiến hành cài đặt Android Studio.
     ![H5](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h5.jpg)
    +Hãy chờ đợi quá trình cài đặt diễn ra tầm 10 đến 30 phút tùy cấu hình từng máy, sau có thông báo cài đặt thành công bạn nhấn Finish.
     ![H6](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h6.jpg)
    +Bây giờ bạn hãy nhấn chọn các bước như sau đây.
    ![H7](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h7.jpg)
    +Nhấn Next để qua bước kế tiếp.
    ![H8](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h8.jpg)
    +Nhấn Next để qua bước kế tiếp.
    ![H9](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h9.jpg)
    +Nhấn Finish để qua bước kế tiếp.
    ![H10](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h10.jpg)
    +Tiếp tục chờ đợi để quá trình cài đặt diễn ra, sau khi cài đặt xong nhấn Finish để hoàn thành quá trình.
    ![H11](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h11.jpg)
    +Nếu như bạn thấy xuất hiện màn hình sau đây có nghĩa là quá trình cài đặt thành công, bây giờ bạn đã có thể phát triển ứng dụng Android cho riêng mình.
    ![H12](https://teamvietdev.com/wp-content/uploads/2018/04/ung-dung-tra-cuu-thi-truong-bai-1-huong-dan-cai-dat-android-studio-h12.jpg)

##Các bước biên dịch:
	Quá trình chạy phần mềm lên thiết bị có thể được tóm tắt thành 6 bước:
		Bước 1: Soạn thảo mã nguồn
		Bước 2: Biên dịch thành .dex
		Bước 3: Đóng gói thành .apk (là tập tin phần mềm chạy Android)
		Bước 4: Upload .apk lên thiết bị
		Bước 5: Cài đặt .apk vào vào thiết bị
		Bước 6: Kích hoạt Activity được quy định chạy trước trong AndroidManifest
		
##Kiểm thử chương trình

        | TEST CASE                      | TEST STEPTS                  | EXPECTE RESULT  | STATUS (PASS/FAIL)|
        | :----------------------------- | :--------------------------- | :-------------- | :---------------- |
        | Xác định giao diện đầu vào     |  1.Đăng ký tài khoản         |  successfull    | pass              |
        |                                |  2.Login                     |  successfull    | pass              |    
        | Chức năng bật tắt đèn          | 1.Bật tắt đèn 1              |  successfull    | pass              |
        |                                | 2.Bật tắt đèn 2              |  successfull    | pass              |
        |                                | 3.Bật tắt đèn 3              |  successfull    | pass              |
        |                                | 4.Bật tắt đèn 4              |  successfull    | pass              |

        | Chức năng đo nhiệt độ          | 1.Theo dõi nhiệt độ          |  successfull    | fail              | 
        | Chức năng đóng cửa             | 1.Đóng mở của                |  successfull    | pass              |

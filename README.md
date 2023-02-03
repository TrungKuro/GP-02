# GP-02

[Mạch Định Vị GPS BDS GNSS GP-02 Module Ai-Thinker Breakout](https://hshop.vn/products/mach-dinh-vi-gps-bds-gnss-gp-02-module-ai-thinker-breakout).

## Pinout của Module

>     GND : Grounded
>     5V  : 5V power supply
>     TX  : The default is TXD of UART0
>     RX  : The default is RXD of UART0
>     PPS : Time pulse signal

## Các thông số kỹ thuật

>     TTFF:
>     - Cold start : ≤ 32s
>     - Hot start  : ≤ 1s
>     - Recapture  : ≤ 1s
>
>     PPS:
>     - Tần suất cập nhập định vị (mặc định 1Hz, tối đa 10Hz).
>
>     UART:
>     - Giao tiếp theo định dạng giao thức NMEA0183.
>     - Tốc độ giao tiếp hỗ trợ 4800bps ~ 115200bps, với mặc định...
>       * Baud rate : 9600bps
>       * Data bits : 8
>       * Stop bits : 1
>       * Parity    : none

## Một số lưu ý khi sử dụng Module

### Về Antenna:

> Cần phải gắn thêm `Anten GPS` trước khi sử dụng. Loại Anten này giúp Module thu được đúng tín hiệu GPS từ các vệ tinh ở tần số **1575,42 MHz** trong dải *"tần số cực cao"* - **UHF (Ultra-High Frequency)**.
>
> Module có thiết kế cổng gắn Anten dạng `SMA Cái`. Vì vậy phải dùng những Anten có đầu gắn `SMA Đực`, như:
> - [Anten GPS BDS GNSS Active Ceramic 38 DBi SMA Đực](https://hshop.vn/products/anten-gps-1575-42mhzsma-duc).
>
> Ngoài ra Anten còn có thông số `dBi` *(độ nhạy thu)* mà ta cũng cần phải quan tâm, để lựa chọn cho phù hợp với nhu cầu. Bạn có thể tìm hiểu thêm qua bài viết này: [Thông số dBi (độ nhạy thu) của anten là gì? Có phải dBi càng lớn là càng tốt?](https://phatdatcomputer.vn/tin-tuc/thong-so-dbi-do-nhay-thu-cua-anten-la-gi-co-phai-dbi-cang-lon-la-cang-tot).

### Về khu vực sử dụng:

> Nên sử dụng module GPS tại những nơi thoáng đãng và không có chướng ngại vật trên đầu. Bạn có thể xem bài viết này để hiểu các yếu tố làm ảnh hưởng đến độ chính xác của GPS: [3 factors that affect GPS accuracy](https://www.iotinsider.com/communications/3-factors-that-affect-gps-accuracy/#:).
>
> Ngoài ra, bạn cũng có thể dùng chính điện thoại của mình để kiểm tra *"cường độ tín hiệu GPS"* ở khu vực hiện tại, bằng ứng dụng [GPS Test - Chartcross Limited](https://play.google.com/store/apps/details?id=com.chartcross.gpstest&hl=vi&gl=US).
>
> Thông số `AVG SNR` - **(The average value of Signal to Noise Ratio)** trong app sẽ cho bạn biết điều này. Với dãi đo *"từ 0 đến 99dB"*. Nó cho biết *"tỷ lệ tín hiệu GPS trên nhiễu"*.
>
> Trong đó **0** là *"tệ nhất"*. Thông thường SNR sẽ không bao giờ vượt quá trên **50** và từ **40** trở lên đã là *"rất tốt"*. Thử nghiệm thực tế:
> - Test trong nhà, tuy có phát hiện được vài chục vệ tinh *(In View > 0)*, nhưng không thể nhận được bất kỳ thông tin đầy đủ nào từ các vệ tinh cả *(In Use = 0)*.<br>![Test app trong nhà](/img/Test_App_InDoor.png "Test app trong nhà")
> - Test ngoài đường trước nhà, cần chờ khoảng thời gian hơn một phút. Lúc này, thường đã có thể nhận được thông tin đầy đủ từ vài vệ tinh *(In Use > 0)*. Chỉ số **SNR** dao động trong *"vùng cam từ 10 đến 20dB"*.<br>![Test app ngoài đường](/img/Test_App_OutDoor.png "Test app ngoài đường")
> - Test trên sân thượng, tầm vài chục giây là định vị được. Số lượng vệ tinh sử dụng tăng cao *(In Use > 0)*. Chỉ số **SNR** dao động trong *"vùng vàng từ 20 đến 30dB"*.<br>![Test app trên tầng thượng.png](/img/Test_App_On_Rooftop.png "Test app trên tầng thượng.png")
>
> Tuy nhiên bạn cần lưu ý, cách kiểm tra này mang tính chất tương đối. Vì nó còn phụ thuộc vào tùy khu vực, hay chất lượng công nghệ của điện thoại.

### Về Battery:

> Có một thông số kỹ thuật mà các bạn phải chú ý ... `TTFF` - [Time to First Fix](https://vi.eyewated.com/thoi-gian-dje-sua-chua-djau-tien-ttff/), đây là thời gian cần thiết bị GPS để tìm vị trí của bạn.
>
> Lưu ý, thông số TTFF nhà sản xuất cung cấp được thực nghiệm trong môi trường lý tưởng.
>
> Thông số này mô tả thời gian và quy trình cần thiết cho thiết bị GPS để có đủ tín hiệu và dữ liệu vệ tinh có thể sử dụng để cung cấp điều hướng chính xác.
>
> Ngoài ra các điều kiện khác nhau có thể ảnh hưởng đến TTFF, bao gồm môi trường và liệu thiết bị GPS có ở trong nhà hay bên ngoài, không có các vật cản giữa thiết bị và vệ tinh.
>
> **TTFF** thường được chia thành **3** loại:
> - `Khởi động *"Cold"*`, đề cập đến tình huống mà thiết bị GPS phải thu thập tất cả dữ liệu để bắt đầu điều hướng.<br>_ Chế độ này được dùng cho những thiết bị mới hoặc đã được khôi phục về cài đặt gốc.<br>_ Cho nên thời gian khởi động lần đầu tiên thường khá lâu.
> - `Khởi động *"Warm"*`, lúc này GPS có hầu hết dữ liệu cần thiết trong bộ nhớ.<br>_ Nên thời gian khởi động nhanh hơn nhiều, tầm 1 phút hoặc ít hơn.<br>_ Chế độ này nên dùng khi thiết bị đã tắt trong một ngày hoặc lâu hơn, nhưng không tắt lâu đến mức dữ liệu của nó cực kỳ lỗi thời.
> - `Khởi động *"Hot"*`, lúc này GPS cũng đã có hầu hết dữ liệu cần thiết trong bộ nhớ.<br>_ Vì thiết bị này thường tắt chỉ trong vài giờ, dữ liệu thời gian - lịch vẫn còn giá trị sử dụng.<br>_ Nên thời gian khởi động rất là nhanh, tầm vài giây.
>
> Để lưu trữ những dữ liệu này trong bộ nhớ khi Module ngắt nguồn. Ta cần gắn thêm PIN làm nguồn dự phòng cho nó (`PIN CR2032`).

## Cách đọc giá trị thô từ Module trực tiếp

> Theo cấu hình mặc định, từ lúc được cấp nguồn. Module sẽ liên tục gửi về các *"gói tin NMEA"* với tần suất mỗi 1 giây.
>
> Bạn có thể đọc các giá trị này qua giao thức UART, với tốc độ giao tiếp mặc định 9600bps.

### Chuẩn bị phần cứng

> - Module GPS `GP-02` (đã kết nối Antenna và Battery).
> - Mạch Chuyển `USB UART` (đã cài Driver tương ứng).
>
> Sơ đồ kết nối **USB UART** và **GP-02**:
>
>     5V  <-> 5V
>     GND <-> GND
>     RXD <-> TX
>     TXD <-> RX

### Chuẩn bị phần mềm

> Các bạn có thể dùng bất kỳ *"Phần mềm hỗ trợ giao tiếp UART"* nào cũng được. Vd: Termite, Hercules, ...
>
> Với cấu hình sau, Baud rate (9600bps), Data bits (8), Stop bits (1), Parity (none).

### Quá trình sử dụng thực tế

> Mình test thực tế trên tầng thượng, ở lần đầu tiên cấp nguồn Module, mình đợi khoảng **40~45s** bắt đầu nhận được giá trị định vị.
>
> Sau đó ngắt nguồn, mình đợi một chút cấp nguồn lại. Lần này Module chỉ mất khoảng **3~5s** là định vị được vị trí.

### Gói dữ liệu NMEA nhận được

> Ở cấu hình mặc định, mỗi 1s Module trả về **10 gói tin NMEA** theo trình tự sau, gồm:
> 1. GNGGA
> 2. GNGLL
> 3. GNGSA
> 4. GNGSA
> 5. GPGSV
> 6. BDGSV
> 7. GNRMC
> 8. GNVTG
> 9. GNZDA
> 10. GPTXT

#### Vd: Gói dữ liệu NMEA khi Module chưa định vị được

>     $GNGGA,,,,,,0,00,25.5,,,,,,*64
>     $GNGLL,,,,,,V,N*7A
>     $GNGSA,A,1,,,,,,,,,,,,,25.5,25.5,25.5,1*01
>     $GNGSA,A,1,,,,,,,,,,,,,25.5,25.5,25.5,4*04
>     $GPGSV,1,1,00,0*65
>     $BDGSV,1,1,00,0*74
>     $GNRMC,,V,,,,,,,,,,N,V*37
>     $GNVTG,,,,,,,,,N*2E
>     $GNZDA,,,,,,*56
>     $GPTXT,01,01,01,ANTENNA OPEN*25

#### Vd: Gói dữ liệu NMEA khi Module đã định vị được

>     $GNGGA,094350.000,1046.39939,N,10639.40447,E,1,18,1.0,27.5,M,-4.1,M,,*6D
>     $GNGLL,1046.39939,N,10639.40447,E,094350.000,A,A*48
>     $GNGSA,A,3,03,06,07,09,17,19,30,194,199,,,,1.6,1.0,1.3,1*3E
>     $GNGSA,A,3,08,09,13,16,19,36,38,39,46,,,,1.6,1.0,1.3,4*3A
>     $GPGSV,3,1,11,03,28,119,25,06,21,214,26,07,67,188,38,09,15,187,28,0*63
>     $GPGSV,3,2,11,14,31,341,,17,36,302,20,19,20,269,26,21,22,034,,0*62
>     $GPGSV,3,3,11,30,61,295,22,194,52,073,28,199,63,117,23,0*58
>     $BDGSV,3,1,12,01,,,33,08,48,161,26,09,54,217,25,13,44,174,30,0*4A
>     $BDGSV,3,2,12,16,43,194,28,19,13,166,31,35,,,20,36,71,108,26,0*43
>     $BDGSV,3,3,12,38,58,141,25,39,34,184,24,46,22,136,26,59,,,28,0*40
>     $GNRMC,094350.000,A,1046.39939,N,10639.40447,E,0.00,319.66,030223,,,A,V*0E
>     $GNVTG,319.66,T,,M,0.00,N,0.00,K,A*28
>     $GNZDA,094350.000,03,02,2023,00,00*41
>     $GPTXT,01,01,01,ANTENNA OPEN*25
>
> Để tra cứu tọa độ, bạn *copy* nội dung của gói tin `GNRMC` hoặc `GNGGA`. Rồi *paste* vào trang web này: [GPRMC & GPGGA decoder](https://rl.se/gprmc), để tra cứu kết quả.
>
> Và đây là kết quả mà mình nhận được:
>
> Gói GNRMC
>
>     Position   : 10.773323°N
>                  106.656741°E
>     Timestamp  : Fri, 03 Feb 2023 09:43:50 UTC
>     Close to   : Quận Mười, Vietnam
>     Local time : Fri, 03 Feb 2023 16:43:50 +07
>     Timezone   : Asia/Ho_Chi_Minh
>
> Gói GNGGA
>
>     Time        : 09:43:50 UTC
>     Fix quality : 1 - GPS
>     Position    : 10.773323°N
>                 : 106.656741°E
>     Sats in use : 18
>     HDOP        : 1
>     Geoid       : -4.1 m
>     Altitude    : 27.5 m
>     Close to    : Quận Mười, Vietnam

### Cấu hình Module GPS

> Bạn cũng có thể cấu hình lại cho Module GPS của mình bằng chính giao thức UART này, để sử dụng theo đúng nhu cầu riêng.
>
> Tìm hiểu thêm trong:
> - [**GNSSToolKit**](https://www.icofchina.com/d/file/xiazai/2020-09-22/26ac3f347aca9fc6c3a23db296b0dec0.zip): Tool Instructions.
> - [**CASIC**](https://www.icofchina.com/d/file/xiazai/2020-09-22/20f1b42b3a11ac52089caf3603b43fb5.pdf) multi mode satellite navigation receiver protocol specification.
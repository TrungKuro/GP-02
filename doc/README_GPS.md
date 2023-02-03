# GPS là gì?
>
> - Là hệ thống `định vị toàn cầu` **do Mỹ** phát triển và vận hành.
> - Là tên viết tắt của cụm từ *"Global Positioning System"*.
> - Là một hệ thống bao gồm nhiều vệ tinh bay trên quỹ đạo phía trên trái đất ở độ cao 20.200 km.
>
> Nó hoạt động trong:
> - Mọi điều kiện thời tiết
> - Mọi nơi trên Trái Đất
> - Liên tục suốt 24 giờ
>
> @ Đặc biệt, kết nối GPS **không phụ thuộc vào Internet**.

## Nguyên lý hoạt động

> - **BỘ PHÁT:** Các vệ tinh GPS bay vòng quanh Trái Đất hai lần trong một ngày theo một quỹ đạo rất chính xác và phát tín hiệu có thông tin xuống Trái Đất.
> - **BỘ THU:** Các máy thu GPS nhận thông tin này và bằng **phép  tính lượng giác**, từ đó tính được chính xác vị trí của người dùng.
>
> `Bản chất của GPS` là *so sánh thời gian* tín hiệu được phát đi từ vệ tinh với thời gian nhận được chúng (tức giữa BỘ PHÁT và BỘ THU).
>
> `Độ sai lệch thời gian` cho biết máy thu GPS cách vệ tinh bao xa. Với nhiều quãng đường đo được tới nhiều vệ tinh máy thu có thể tính được vị trí của người dùng và hiển thị lên bản đồ điện tử của máy.

> Tức càng có nhiều dữ liệu từ nhiều vệ tinh, vị trí định vị càng chính xác !
> - Để tính ra được vị trí `2 chiều (kinh độ và vĩ độ)` thì máy thu phải nhận được tín hiệu **ít nhất là 3 vệ tinh**.
> - Với **ít nhất 4 vệ tinh** thì có thể tính được vị trí `3 chiều (kinh độ, vĩ độ và độ cao)`.
>
> Một khi vị trí người dùng đã tính được thì máy thu GPS có thể tính các thông tin khác như tốc độ, hướng chuyển động, bám sát di chuyển, khoảng hành trình, ...

## Các hệ thống định vị khác

> GPS chỉ là một trong số các hệ thống vệ tinh định vị toàn cầu.
>
> Có hai hệ thống GPS chính đang được áp dụng trên tất cả smartphone hiện nay, đó là **A-GPS** và **GLONASS**, ngoài ra còn một số loại khác được sử dụng cho mục đích riêng.

### A-GPS

> Là công nghệ kết hợp định vị GPS và các cảm biến, tín hiệu của mạng viễn thông và suy ra vị trí hiện tại của thiết bị.
>
> **Ưu điểm:**
> - Tăng tốc độ tính toán vị trí làm cho chức năng định vị trên máy bạn trở nên nhanh hơn.
> - Cũng như khả năng xác định vị trí một cách tương đối khi thiết bị đi vào vùng mất tín hiệu vệ tinh GPS.
>
> **Nhược điểm:**
> - Cần có Internet để hoạt động, vậy nên khi bạn đi vào khu vực sóng yếu hoặc kết nối mạng bị gián đoạn thì A-GPS không còn chạy được.

### GLONASS

> Được phát triển **bởi Nga** với 24 vệ tinh nhân tạo. Khi kết hợp với GPS, cả hai hệ thống này sẽ giúp cho việc xác định vị trí trở nên chính xác hơn.
>
> GLONASS cũng được sử dụng rộng rãi trên các thiết bị di động.
>
> **Ưu điểm:**
> - Chỉ được kích hoạt khi GPS yếu nhằm tiết kiệm tối ưu hơn cho pin của thiết bị nhưng tốc độ của GLONASS có phần hơi chậm.
>
> **Nhược điểm:**
> - Độ chính xác của GLONASS còn tùy thuộc vào nơi bạn sử dụng. Nó đưa ra kết quả định vị chính xác hơn ở **[Bán cầu Bắc]** so với **[Bán cầu Nam]** do khu vực này tập trung nhiều trạm mặt đất hơn.

### BDS

> Là một dự án **của Trung Quốc** phát triển một hệ thống vệ tinh định vị độc lập, ban đầu chỉ được sử dụng ở khu vực nội địa nhưng nay đã phát triển rộng rãi ra hệ thống toàn cầu.
>
> BDS còn có tên gọi đầy đủ là *"The BeiDou Navigation Satellite System"* hay *"Bắc Đẩu" (Beidou)*
>
> **Ứng dụng:**
> - Thường được sử dụng rộng rãi trong việc định vị giao thông, khu vực biển, dự báo thời tiết, thiên tai, thuỷ điện, ...
>
> **Ưu điểm:**
> - Bắc Đẩu sử dụng một loạt các vệ tinh để cung cấp cho người dùng định vị chính xác với **sai số khoảng 5 - 10m**.
> - Hầu hết chip điện thoại thông minh đã bán trên toàn cầu đều tương thích với Bắc Đẩu.

### Galileo

> Là một hệ thống định vị toàn cầu giống như GPS, GLONASS hay Bắc Đẩu và nó **thuộc quyền sở hữu của Liên minh châu Âu (EU)**.
>
> Khác với *"GPS của Hoa Kỳ"* và *"GLONASS của Liên bang Nga"* ở chỗ nó là một hệ thống định vị được điều hành và quản lý bởi các tổ chức dân dụng, phi quân sự.
>
> **Ưu điểm:**
>
> Với tiêu chuẩn băng tần kép được xây dựng, các thiết bị hỗ trợ Galileo sẽ có thể định vị **chính xác theo thời gian thực**.
> - Xuống đến **phạm vị mét** (miễn phí cho người dùng cá nhân).
> - Và **thậm chí là centimet** dành cho các doanh nghiệp, tổ chức có trả phí.

### QZSS

> Là hệ thống định vị phủ khắp **[châu Á]** và **[châu Đại Dương]** đến **từ đất nước Nhật Bản**.
>
> QZSS của Nhật sử dụng 4 vệ tinh, trong đó có một vệ tinh luôn bay phía trên nước Nhật. Nó được thiết kế góc hoạt động riêng và tầm phủ rộng để tín hiệu không bị các tòa nhà, cây cối che mất.
>
> **Ứng dụng:**
> - Được sử dụng với mục đích phát triển công nghệ xe tự lái, thu hoạch nông sản tự động, ... 
>
> **Ưu điểm:**
> - Nhật Bản sẽ cho phép mọi người sử dụng QZSS miễn phí nếu thiết bị của họ hỗ trợ hệ thống định vị này.

### IRNSS

> Là hệ thống định vị tại khu vực **của Ấn Độ** và **[bắc Ấn Độ Dương]**.
>
> **Ứng dụng:**
> - Được dùng cả lĩnh vực quân sự lẫn dân sự, như giúp quản lý các hoạt động của quân đội Ấn Độ hay dự báo thảm họa, ...
> - Ngoài ra, hệ thống định vị IRNSS hỗ trợ định hướng và giám sát chuyển động của các đội tàu xe như xe tải hoặc tàu biển.
>
> **Ưu điểm:**
>
> IRNSS sẽ cung cấp dịch vụ thông tin định vị chính xác cho những người sử dụng trong nước và nước ngoài, cách biên giới Ấn Độ tới 1.500 km. Gồm hai loại hình dịch vụ là:
> - Dịch vụ định vị tiêu chuẩn (SPS) dành cho mọi người.
> - Dịch vụ định vị hạn chế (RS) chỉ dành riêng cho người được ủy quyền và quân đội.

# [Hệ tọa độ địa lý](https://vi.wikipedia.org/wiki/H%E1%BB%87_t%E1%BB%8Da_%C4%91%E1%BB%99_%C4%91%E1%BB%8Ba_l%C3%BD)

> Là một *"hệ tọa độ"* cho phép tất cả mọi điểm trên Trái Đất đều có thể xác định được bằng `một tập hợp các số` có thể kèm ký hiệu.
>
> Hệ tọa độ phổ biến hiện dùng là *"hệ tọa độ cầu"* tương ứng với **tâm Trái Đất** với các tọa độ là `vĩ độ`, `kinh độ` và `cao độ`.

## Chiều thứ nhất: Vĩ độ - chiều ngang

> Vĩ độ (ký hiệu: *φ*), của một điểm bất kỳ trên mặt Trái Đất là góc...
>
> Đường tạo bởi **các điểm có cùng vĩ độ** gọi là *"vĩ tuyến"*.
>
> **Vĩ tuyến gốc** là vĩ tuyến 0 độ, hay còn gọi là *"đường xích đạo"*. Nó là một đường thẳng tưởng tượng chia địa cầu thành **[Bán cầu BẮC]** và **[Bán cầu NAM]**.
>
> - Những vĩ tuyến nằm `từ xích đạo đến cực Bắc` gọi là *"vĩ tuyến Bắc"*.
> - Những vĩ tuyến nằm `từ xích đạo đến cực Nam` gọi là *"vĩ tuyến Nam"*.

## Chiều thứ hai: Kinh độ - chiều dọc

> Kinh độ (ký hiệu: *λ*), của một điểm bất kỳ trên mặt Trái Đất là góc...
>
> Đường tạo bởi **các điểm có cùng kinh độ** gọi là *"kinh tuyến"*.
>
> **Kinh tuyến gốc** là kinh tuyến 0 độ. Đối diện kinh tuyến gốc là kinh tuyến 180 độ.
>
> Theo quy ước quốc tế, kinh tuyến 0 độ là kinh tuyến đi qua đài thiên văn Grin-uýt ở ngoại ô thành phố Luân Đôn (nước Anh).
>
> - Những kinh tuyến nằm `bên phải` kinh tuyến gốc gọi là *"kinh tuyến Đông"*.
> - Những kinh tuyến nằm `bên trái` kinh tuyến gốc gọi là *"kinh tuyến Tây"*.

---

#### Bằng cách phối hợp hai góc này (Vĩ độ & Kinh độ).

#### Ta có thể xác định được vị trí nằm ngang của bất kỳ điểm nào trên Trái Đất.

#### [THẾ NÀO LÀ KINH TUYẾN VÀ VĨ TUYẾN](https://www.youtube.com/watch?v=a30FCrfWiag&ab_channel=GEOGRAPHYANDYOU).

> [Độ](https://vi.wikipedia.org/wiki/%C4%90%E1%BB%99_(g%C3%B3c)) thông thường được biểu diễn bằng ký hiệu `°` hoặc `d`, là đơn vị đo lường của các góc phẳng.
>
> Một vòng tròn có 360 độ, tức với đơn vị độ --> Thì độ phân giải chỉ ở mức **{ 360 }** đơn vị.
>
> Để tăng độ phân giải. Độ được chia thành **PHÚT** (1/60 độ, ký hiệu là `′` hoặc `m`) --> Độ phân giải lúc này là **{ 360 x 60 = 21,600 }** đơn vị.
>
> Phút chia thành **GIÂY** (1/60 phút, ký hiệu là `″` hoặc `s`) --> Lúc này độ phân giải là **{ 360 x 60 x 60 = 1,296,000 }** đơn vị.

> Có nhiều cách viết độ, tất cả chúng đều xuất hiện theo cùng thứ tự **[Vĩ độ - Kinh độ]**:
> - **DMS** *(Degree : Minute : Second)*
> - **DM** *(Degree : Minute)*
> - **DD** *(Decimal Degree)* - Độ thập phân, thường với 4 số thập phân, tức độ phân giải **{ 0.0001 }**.

> Để chuyển từ DM hoặc DMS sang DD, ta có công thức sau: *"Số ĐỘ cộng với số PHÚT chia cho 60, cộng với số giây chia cho 3600"*.
> - `DD = d + (m/60) + (s/3600)`
>
> **DMS** là định dạng phổ biến nhất, và là tiêu chuẩn trên tất cả các biểu đồ và bản đồ, cũng như hệ định vị toàn cầu và hệ thông tin địa lý.
>
> Ngoài ra, Vĩ độ và Kinh độ được đo bằng độ thay vì các đơn vị đo lường tuyệt đối (như `dặm` hoặc `km`), vì trái đất có hình cầu.
>
> Trong khi khoảng cách giữa các vĩ tuyến là không đổi (60 hải lý hoặc 111,12 km), thì do hình dạng của trái đất, khoảng cách giữa các kinh tuyến lại giảm dần về phía hai cực.
>

#### [Cách để Đọc vĩ độ và kinh độ trên bản đồ](https://www.wikihow.vn/%C4%90%E1%BB%8Dc-v%C4%A9-%C4%91%E1%BB%99-v%C3%A0-kinh-%C4%91%E1%BB%99-tr%C3%AAn-b%E1%BA%A3n-%C4%91%E1%BB%93).
> `Vĩ độ (Latitude)` và `Kinh độ (Longitude)` là các phép đo vị trí trên trái đất.
>
> Nếu biết cách đọc vĩ độ và kinh độ trên bản đồ, bạn có thể xác định toạ độ địa lý của bất cứ điểm nào trên bản đồ.
>
> **Lưu ý, giúp phân biệt:**
> - *"Độ"* là giá trị vị trí của điểm.
> - *"Tuyến"* là đường thẳng, nơi tập hợp các điểm cùng giá trị độ.
>
> **Vĩ độ:**
> - Là phép đo khoảng cách của một điểm về phía `Bắc (North)` hoặc `Nam (South)` của `Đường xích đạo (Equator)`, một đường tưởng tượng chạy ngang qua điểm trung tâm của trái đất giữa hai cực.
> - Trái đất được chia thành 180 vĩ tuyến. Các vĩ tuyến này chạy ngang vòng quanh trái đất, trong đó có 90 vĩ tuyến bắc và 90 vĩ tuyến nam.
>
> **Kinh độ:**
> - Là phép đo khoảng cách của một điểm về phía `Đông (East)` hoặc `Tây (West)` của đường tưởng tượng chạy dọc từ giữa trái đất từ cực Bắc đến cực Nam, gọi là `Kinh tuyến gốc (Prime Meridian)`.
> - Kinh tuyến đối diện với kinh tuyến gốc ở phía bên kia trái đất được gọi là **Kinh tuyến nghịch**.
> - Các kinh tuyến là một loạt các đường chạy dọc từ cực Bắc xuống cực Nam.
> - Có 360 kinh tuyến ở cả hai bên kinh tuyến gốc, trong đó có 180 kinh tuyến đông và 180 kinh tuyến tây
>

---

## Chiều thứ ba: Cao độ - chiều cao & chiều sâu

> Để **xác định hoàn toàn** một vị trí nằm trên, ở trong hoặc ở phía trên bề mặt Trái Đất, ta cần phải xác định *"cao độ"* của điểm.
>
> Được định nghĩa bằng vị trí của điểm theo chiều thẳng đứng so với trung tâm của hệ thống tham chiếu.

---

## Mạch Định Vị GPS

### [Hệ thống định vị toàn cầu GPS – Các khái niệm cơ bản](https://tapit.vn/he-thong-dinh-vi-toan-cau-gps/):

> **NMEA** viết tắt của *"National Marine Electronics Association" – Hiệp hội Điện tử hàng hải Quốc gia*.
>
> **NMEA** là định dạng dữ liệu tiêu chuẩn hỗ trợ cho tất cả các thiết bị nhận tín hiệu GPS.
>
> Cấu trúc của một **NMEA Message** gồm có:
> - **14 Output Messages:** chứa nhiều dữ liệu mà thiết bị nhận GPS thu được từ vệ tinh như thời gian, vị trí tọa độ, số lượng vệ tinh trong vùng quan sát, độ cao, cường độ tín hiệu, ...
> - **11 Input Messages:** người dùng gửi các message này để trực tiếp cấu hình vị trí hiện tại, thời gian, baudrate, bit dữ liệu, bit stop, ...

> **Output Messages:**
> - Các *"Output Messages"* phân biệt với nhau dựa theo các *"Header"* được đặt sau ký tự `$`.
> - Có *"14 loại Header"* tương ứng với 14 Output Messages.
> - Chúng ta chỉ cần quan tâm đến *"3 loại Header"* có chứa tọa độ vị trí: `__GGA`, `__RMC` và `__GLL`.

### [Tiêu chuẩn NMEA](https://en.wikipedia.org/wiki/NMEA_0183):

> **Cấu trúc Messages:**
>
> Tất cả dữ liệu được truyền là các ký tự [ASCII](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1b/ASCII-Table-wide.svg/2560px-ASCII-Table-wide.svg.png) *"có thể in được"* **từ 0x20 đến 0x7E**.
>
> 1. `$` (0x24) - Start Delimiter - Bắt đầu tin nhắn.
> 2. **5 ký tự** tiếp theo xác định *"Talker"* **(2 ký tự)** và *"Type of Message"* **(3 ký tự)**.
> 3. Tất cả các *"Data Field"* theo sau được phân cách bằng dấu `,` (0x2C). Khi không có dữ liệu, trường tương ứng sẽ để trống.
> 4. Ký tự đầu tiên ngay sau ký tự cuối của *"Data Field"* cuối cùng là dấu `*`, nhưng nó chỉ được bao gồm nếu **Checksum** được cung cấp, được biểu thị dưới dạng *"số HEX có 2 chữ số"*.
> 5. `\r\n` (0x0D 0x0A) - [Carriage return + Line feed] - Eend Delimiter - Kết thúc tin nhắn.
>
> **Talker:** ID bao gồm...
> - `BD` hoặc `GB` - Bắc Đẩu
> - `GA` - Galileo
> - `GP` - GPS
> - `GL` - GLONASS
> - `GN` - ???
>
> **Type of Message:** chủ yếu gồm các loại...
> - `GGA` - **Global Positioning System** Fixed Data.
> - `GLL` - Geographic Position - **Latitude and Longitude**.
> - `GSA` - GNSS DOP and active satellites.
> - `GSV` - GNSS satellites in view.
> - `RMC` - Recommended minimum specific **GPS data**.
> - `VTG` - Course over ground and ground speed.

### [GPRMC & GPGGA decoder](https://rl.se/gprmc): This is the best GPRMC decoder online!

> VD: { $GPRMC,001225,A,2832.1834,N,08101.0536,W,12,25,251211,1.2,E,A*03 }
>
> **Decoding Results:**
> - Position : 28.536390°N - 81.017560°W
> - Timestamp : Sun, 25 Dec 2011 00:12:25 UTC
> - Movement : Speed 12.0 kts, heading 25°
> - Close to : Christmas, United States
> - Local time : Sat, 24 Dec 2011 19:12:25 EST
> - Timezone : America/New_York

### [GPRMC](https://adamchukpa.mcgill.ca/web_ssm/web_GPS_NMEA.html#RMC)

> - Field 01 - **UTC** of position fix in `hhmmss` format.
> - Field 02 - Status (`A` - data is valid, `V` - warning).
> - Field 03 - Geographic **Latitude** in `ddmm.mmmmmm` format.
> - Field 04 - Direction of **Latitude** (`N` - North, `S` - South).
> - Field 05 - Geographic **Longitude** in `dddmm.mmmmmm` format.
> - Field 06 - Direction of **Longitude** (`E` - East, `W` - West).
> - Field 07 - Speed over ground *(knots)*.
> - Field 08 - Track made good *(heading)*.
> - Field 09 - **Date** in `ddmmyy` format.
> - Field 10 - Magnetic variation *(°)*.
> - Field 11 - Direction of magnetic variation (`E` - East, `W` - West).
> - Field 12 - Mode indication (`A` - autonomous, `D` - differential, `N` - data not valid).

### [GPGGA](https://adamchukpa.mcgill.ca/web_ssm/web_GPS_NMEA.html#GGA)

> - Field 01 - **UTC** of position fix in `hhmmss.ss` format.
> - Field 02 - Geographic **Latitude** in `ddmm.mmmmmm` format.
> - Field 03 - Direction of latitude (`N` - North, `S` - South).
> - Field 04 - Geographic **Longitude** in `dddmm.mmmmmm` format.
> - Field 05 - Direction of **Longitude** (`E` - East, `W` - West).
> - Field 06 - GPS quality indicator (`0` - fix not valid, `1` - GPS fix, `2` - DGPS fix).
> - Field 07 - Number of satellites in use *(00-12)*.
> - Field 08 - Horizontal DOP.
> - Field 09 - Antenna height above MSL (mean sea level) reference, *(meters)*.
> - Field 10 - Unit of altitude *(meters)*.
> - Field 11 - Geoidal separation *(meters)*.
> - Field 12 - Unit of geoidal separation *(meters)*.
> - Field 13 - Age of differential GPS data record.
> - Field 14 - Base station ID *(0000-1023)*.

### [GPGLL](https://adamchukpa.mcgill.ca/web_ssm/web_GPS_NMEA.html#GLL)

> - Field 01 - Geographic **Latitude** in `ddmm.mmmmmm` format.
> - Field 02 - Direction of latitude (`N` - North, `S` - South).
> - Field 03 - Geographic **Longitude** in `dddmm.mmmmmm` format.
> - Field 04 - Direction of **Longitude** (`E` - East, `W` - West).
> - Field 05 - **UTC** of position fix in `hhmmss.ss` format.
> - Field 06 - `A` shows that data is valid.
> - Field 07 - Mode indication (`A` - autonomous, `D` - differential, `N` - data not valid).

### [Mạch Định Vị GPS BDS ATGM336H](https://hshop.vn/products/mach-gps-bds-atgm336h)

> **Thư viện Arduino:** `TinyGPSPlus` by [mikalhart](https://github.com/mikalhart/TinyGPSPlus).
>
> ---
>
> [**GNSSToolKit**](https://www.icofchina.com/d/file/xiazai/2020-09-22/26ac3f347aca9fc6c3a23db296b0dec0.zip): Tool Instructions.
>
> [**CASIC**](https://www.icofchina.com/d/file/xiazai/2020-09-22/20f1b42b3a11ac52089caf3603b43fb5.pdf) multi mode satellite navigation receiver protocol specification.
>
> @ Mọi tài liệu về thiết bị GPS trên có thể tìm [tại đây](https://www.icofchina.com/xiazai/).
>
> ---
>
> @ Lưu ý: các lệnh cấu hình này đều có kí tự kết thúc `\r\n` cuối chuỗi. Và dưới đây là một số cấu hình cần chú ý.
>
> **CAS01:** Cài đặt tốc độ Baudrate.
> - `$PCAS01,1*1D` : 9600bps
> - `$PCAS01,5*19` : 115200bps
>
> **CAS03:** Cài đặt yêu cầu thêm hoặc dừng dữ liệu đầu ra các *"câu NMEA"*.
> - `$PCAS03,1,0,0,0,0,0,0,0,0,0,,,0,0*03` : Chỉ lấy dữ liệu GGA.
> - `$PCAS03,0,0,0,0,1,0,0,0,0,0,,,0,0*03` : Chỉ lấy dữ liệu RMC.
> - `$PCAS03,0,1,0,0,0,0,0,0,0,0,,,0,0*03` : Chỉ lấy dữ liệu GLL.
>
> **CAS04:** Cấu hình hệ thống làm việc.
> - `$PCAS04,3*1A` : Chế độ kép dùng vệ tinh Beidou và GPS.
>
> **CAS10:** Khởi động lại *"bộ Thu"*, tức bộ ATGM336H.
> - `$PCAS10,0*1C` : **Hot** - Không sử dụng thông tin khởi tạo. Và dùng tất cả dữ liệu trong *"Bộ nhớ"* sao lưu.
> - `$PCAS10,1*1D` : **Warm** - Không sử dụng thông tin khởi tạo. Chỉ dùng lịch thiên văn.
> - `$PCAS10,2*1E` : **Cold** - Không sử dụng thông tin khởi tạo, xóa tất cả dữ liệu trong *"Bộ nhớ"* sao lưu. Ngoại trừ cấu hình.
> - `$PCAS10,3*1F` : **Factory Settings** - Xóa tất cả dữ liệu trong *"Bộ nhớ"* và đặt lại *"Bộ Thu"* về cấu hình mặc định của nhà sản xuất.
>
> **CAS11:** Cài đặt mô hình chuyển động của *"Bộ Thu"*.

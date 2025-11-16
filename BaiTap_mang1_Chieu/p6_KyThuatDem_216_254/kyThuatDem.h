#pragma once

// ================= BÀI TẬP DẾM =================

// -------------------------
// 	Bài 216: Đếm số lượng số chẵn trong mảng
// 	Bài 217: Đếm số dương chia hết cho 7 trong mảng
// 	Bài 218: Đếm số đối xứng trong mảng
// 	Bài 219: Đếm số lần xuất hiện của giá trị x trong mảng
// 	Bài 220: Đếm số lượng giá trị tận cùng bằng 5 trong mảng
// 	Bài 221: Cho biết sự tương quan giữa số lượng chẵn và lẻ trong mảng
// 	Hàm trả về 1 trong 3 giá trị -1, 0, 1
// 	Giá trị -1 là chẵn nhiều hơn lẻ
// 	Giá trị 0 là chẵn bằng lẻ
// 	Giá trị 1 là chẵn ít hơn lẻ
// 	Bài 222: Đếm phần tử lớn hơn hay nhỏ hơn phần tử xung quanh mảng
// 	Bài 223: Đếm số nguyên tố trong mảng
// 	Bài 224: Đếm số hoàn thiện trong mảng
// 	Bài 225: Đếm số lượng giá trị lớn nhất có trong mảng
// 	Bài 226: Hãy xác định số lượng phần tử kề nhau mà cả 2 đều chẵn
// 	Bài 227: Hãy xác định số lượng phần tử kề nhau mà cả 2 trái dấu
// 	Bài 228: Hãy xác định số lượng phần tử kề nhau mà số đứng sau cùng dấu số đứng trước và có giá trị tuyệt đối lớn hơn
// 	Bài 229: Đếm số lượng các giá trị phân biệt có trong mảng
// 	Bài 230: Liệt kê tần suất xuất hiện các giá trị trong mảng (mỗi giá trị liệt kê 1 lần)
// 	Bài 231: Hãy liệt kê các giá trị xuất hiện trong mảng 1 chiều các số nguyên đúng 1 lần
// 	Bài 232: Hãy liệt kê các giá trị xuất hiện trong dãy quá 1 lần. Lưu ý: mỗi giá trị liệt kê 1 lần
// 	Bài 233: Hãy liệt kê tần suất của các giá trị xuất hiện trong dãy. Lưu ý: mỗi giá trị liệt kê tần suất 1 lần
// 	Bài 234: Cho 2 mảng a, b. Đếm số lượng giá trị chỉ xuất hiện 1 trong 2 mảng
// 	Bài 235: Cho 2 mảng a, b. Liệt kê các giá trị chỉ xuất hiện 1 trong 2 mảng
// 	Bài 236(*): Cho 2 mảng a, b. Hãy cho biết số lần xuất hiện của mảng a trong mảng b
// A: 1 2 3 
// B:  1 3 5 1 2 3 8 1 2 3 7 6
// 	Bài 237 + 238(*): Hãy liệt kê các giá trị có số lần xuất hiện nhiều nhất trong mảng
// 	Bài 239: Hãy đếm số lượng số nguyên tố phân biệt trong mảng
// 	Bài 240: Kiểm tra mảng có giá trị 0 hay không? Có trả về 1, không có trả về 0
// 	Bài 241: Kiểm tra mảng có 2 giá trị 0 liên tiếp hay không? Có trả về 1, không có trả về 0
// 	Bài 242: Kiểm tra mảng có số chẵn hay không? Có trả về 1, không có trả về 0
// 	Bài 243: Kiểm tra mảng có số nguyên tố hay không? Có trả về 1, không có trả về 0
// 	Bài 244: Kiểm tra mảng thỏa tính chất: mảng không có số hoàn thiện lớn hơn 256. Có trả về 1, không có trả về 0
// 	Bài 245: Kiểm tra mảng có toàn số chẵn không? Có trả về 1, không có trả về 0
// 	Bài 246: Kiểm tra mảng có đối xứng không? Có trả về 1, không có trả về 0
// 	Bài 247: Ta định nghĩa 1 mảng có tính chất lẻ, khi tổng của 2 phần tử liên tiếp luôn là lẻ. Kiểm tra mảng có tính chất lẻ hay không
// 	Bài 248: Kiểm tra mảng có tăng dần hay không
// 	Bài 249: Kiểm tra mảng có giảm dần hay không
// 	Bài 250: Hãy cho biết các phần tử trong mảng có lập thành cấp số cộng hay không? Nếu có chỉ ra công sai d
// 	Bài 251: Hãy cho biết các phần tử trong mảng có bằng nhau không
// 	Bài 252: Ta định nghĩa 1 mảng được gọi là dạng song, khi phần tử có trị số I lớn hơn hoặc nhỏ hơn 2 phần tử xung quanh. Hãy viết hàm kiểm tra mảng có dạng sóng không
// 	Bài 253: Hãy cho biết tất cả các phần tử trong mảng a có nằm trong mảng b không
// 	Bài 254: Hãy đếm giá trị trong mảng thỏa: lớn hơn tất cả các giá trị đứng đằng trước nó

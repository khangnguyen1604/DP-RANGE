DP ranges (Dynamic Programming on ranges)

Dynamic Programming on ranges (Quy hoạch động trên phạm vi) là một kỹ thuật lập trình chuyên dùng để giải các bài toán mà lời giải phụ thuộc vào một đoạn con liên tiếp của mảng hoặc chuỗi, như đoạn A[l..r].

Phương pháp giải:

Chia bài toán lớn (toàn mảng A[0..N-1]) thành các đoạn con nhỏ hơn A[l..r],
rồi giải từng đoạn từ nhỏ đến lớn, tái sử dụng kết quả đã tính của các đoạn con nhỏ hơn để ghép lại.

Bài toán ví dụ:

- Đề bài: cho một chuỗi S (|S|≤1000) và Q (Q≤10^6) truy vấn, mỗi truy vấn nhập vào hai số nguyên l,r (1≤l≤r≤|S|) . Nhiệm vụ của bạn trả lời xem với mỗi truy vấn chuỗi con S[l...r] có phải là xâu palindrome hay không?
 
- Nhận xét: với độ dài chuỗi S nhỏ và số lượng truy vấn lớn ta có thể chuẩn bị trước đáp án với mọi l,r ( 1≤l≤r≤|S|) bằng bảng quy hoạch động f[i][j] (f[i][j] = 1 nếu S[l...r] là xâu palindrome).
 
- Lời giải: 
 
  + Cơ sở quy hoạch động:
 
      + Nếu (i = j) → f[i][j] = 1;
  
      + Nếu (i + 1 = j) → f[i][j] = 1 khi S[i] = S[j].
  
	+ Tổng quát:  f[i][j] = 1 khi S[i] = S[j] và f[i + 1][j – 1] = 1. Ta thấy để tính được f[i][j] ta phải tính được f[i + 1][j – 1] trước đó.

→ Note: Quy hoạch động phạm vi quan trọng nhất là thứ tự quy hoạch động.



// function duplicateCount(text) {
//     let sample = text.toLowerCase();
//     let length = sample.length;
//     let duplicate = 0;
//     let seen = new Set();
//     for (let i = 0; i < length; i++) {
//         for (let j = i + 1; j <= length - 1; j++) {
//             if (sample[i] === sample[j]) {
//                 if (!seen.has(sample[i])){
//                     seen.add(sample[i]);
//                     duplicate++;
//                 }
//             }
//         }
//     }
//     return duplicate;
// }
// function countDuplicates(str) {
//     str = str.toLowerCase(); // Konversi string ke huruf kecil untuk mengabaikan letter case
//     let charCount = {}; // Objek untuk melacak jumlah karakter

//     for (let char of str) {
//         if (/[a-z0-9]/.test(char)) { // Hanya proses karakter alfanumerik
//             charCount[char] = (charCount[char] || 0) + 1; // Hitung karakter
//         }
//     }

//     let duplicateCount = 0;
//     for (let char in charCount) {
//         if (charCount[char] > 1) { // Jika karakter muncul lebih dari sekali, tambahkan ke hitungan
//             duplicateCount++;
//         }
//     }

//     return charCount;
// }

// console.log(countDuplicates("Indivisibilities"));
var isPalindrome = function(x) {
    x = x.toString();
    let length = x.length;
    let palindrome = "";

    if (length < 3){
        return false;
    }

    if (length === 0){
        return true;
    }
    for (let i = length - 1; i >= 0; i--){
        palindrome += x[i];
    }
    return (x === palindrome) ? true : false;
};

console.log(isPalindrome(-1231));
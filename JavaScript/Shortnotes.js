Q1 Diff bw == and ===

== -> it compares string/integer to integer and still give correct ans
eg let a =10
if(a=='10') return true // it returns true

=== -> it compares same type to same type
it will give false in above expression

--------------------------------------------------------------------------------------------------
Q2 If we neeed ending space too so what to do

document.getElementsById("abc").innerText=" Hey ";
it will ignore last space and cout Hey
if we want to have last space we can use .textContent

